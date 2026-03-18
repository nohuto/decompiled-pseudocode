/*
 * XREFs of PiNormalizeDeviceText @ 0x1406FE3AC
 * Callers:
 *     PnpQueryDeviceText @ 0x140701D4C (PnpQueryDeviceText.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfExW @ 0x140084634 (RtlStringCbPrintfExW.c)
 *     wcschr @ 0x1401A1F20 (wcschr.c)
 *     _wcstoi64 @ 0x1401A2968 (_wcstoi64.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401C0390 (ZwQueryKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     IopBuildFullDriverPath @ 0x14070D600 (IopBuildFullDriverPath.c)
 *     PiGetDefaultMessageString @ 0x140779578 (PiGetDefaultMessageString.c)
 */

__int64 __fastcall PiNormalizeDeviceText(const WCHAR *Src, wchar_t **a2)
{
  void *v4; // r14
  unsigned __int16 *v5; // r15
  wchar_t *v6; // rsi
  NTSTATUS inited; // ebx
  PVOID PoolWithTag; // rax
  const wchar_t *v10; // rbx
  wchar_t *v11; // rax
  const wchar_t *v12; // r12
  wchar_t *v13; // rax
  wchar_t *v14; // rdi
  unsigned __int16 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  SIZE_T v19; // rbx
  wchar_t *v20; // rax
  UNICODE_STRING String2; // [rsp+50h] [rbp-59h] BYREF
  wchar_t *EndPtr; // [rsp+60h] [rbp-49h] BYREF
  void *v23; // [rsp+68h] [rbp-41h]
  size_t pcbRemaining; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  ULONG MessageId[2]; // [rsp+88h] [rbp-21h]
  PVOID P; // [rsp+90h] [rbp-19h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-11h] BYREF
  ULONG Length; // [rsp+120h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a2 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = RtlInitUnicodeStringEx(&String2, Src);
  if ( inited < 0 )
    goto LABEL_4;
  if ( !RtlPrefixUnicodeString(&CmRegistryMachineName, &String2, 1u) )
  {
    inited = 0;
    goto LABEL_4;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, String2.Length + 2LL, 0x20207050u);
  P = PoolWithTag;
  v10 = (const wchar_t *)PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_4;
  }
  memmove(PoolWithTag, Src, String2.Length);
  v10[(unsigned __int64)String2.Length >> 1] = 0;
  v11 = wcschr(v10, 0x2Cu);
  if ( !v11 )
    goto LABEL_34;
  v12 = v11 + 1;
  *v11 = 0;
  v13 = wcschr(v11 + 1, 0x2Cu);
  v14 = v13;
  if ( v13 )
  {
    *v13 = 0;
    v14 = v13 + 1;
  }
  *(_QWORD *)MessageId = wcstoi64(v12, &EndPtr, 10);
  if ( *EndPtr )
    goto LABEL_34;
  RtlInitUnicodeString(&String2, v10);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &String2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  inited = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( inited >= 0 )
  {
    inited = ZwQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
    if ( inited == -1073741789 )
    {
      v5 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x20207050u);
      if ( !v5 )
        goto LABEL_38;
      inited = ZwQueryKey(KeyHandle, KeyBasicInformation, v5, Length, &Length);
      if ( inited < 0 )
        goto LABEL_35;
      String2.Length = v5[6];
      String2.MaximumLength = v5[6];
      String2.Buffer = v5 + 8;
      inited = IopBuildFullDriverPath(&String2, KeyHandle, &DestinationString);
      if ( inited < 0 )
        goto LABEL_35;
      *(_DWORD *)&String2.Length = 1703960;
      String2.Buffer = L"\\SystemRoot\\";
      if ( !RtlPrefixUnicodeString(&String2, &DestinationString, 1u) )
        goto LABEL_35;
      v15 = DestinationString.Length - 24;
      pcbRemaining = (size_t)(DestinationString.Buffer + 12);
      inited = PiGetDefaultMessageString(KeyHandle, MessageId[0]);
      if ( inited < 0 )
      {
        v4 = v23;
        goto LABEL_35;
      }
      v16 = -1LL;
      v17 = -1LL;
      do
        ++v17;
      while ( v12[v17] );
      v4 = v23;
      v18 = -1LL;
      do
        ++v18;
      while ( *((_WORD *)v23 + v18) );
      v19 = v15 + 2 * (v17 + v18 + 5);
      if ( v14 )
      {
        do
          ++v16;
        while ( v14[v16] );
        v19 += 2 * v16 + 6;
      }
      v20 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v19, 0x20207050u);
      v6 = v20;
      if ( !v20 )
      {
LABEL_38:
        inited = -1073741670;
        goto LABEL_35;
      }
      inited = RtlStringCbPrintfExW(v20, v19, &EndPtr, &pcbRemaining, 0, L"@%s,#%s;%s", pcbRemaining, v12, v4);
      if ( inited >= 0 )
      {
        if ( !v14 || (inited = RtlStringCbPrintfW(EndPtr, pcbRemaining, L";(%s)", v14), inited >= 0) )
        {
          *a2 = v6;
LABEL_34:
          inited = 0;
        }
      }
    }
  }
LABEL_35:
  ExFreePoolWithTag(P, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_4:
  RtlFreeAnsiString(&DestinationString);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( inited < 0 && v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
