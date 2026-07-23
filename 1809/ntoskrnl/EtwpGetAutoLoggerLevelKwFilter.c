/*
 * XREFs of EtwpGetAutoLoggerLevelKwFilter @ 0x1408C21D0
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407252B4 (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 */

void __fastcall EtwpGetAutoLoggerLevelKwFilter(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  WCHAR *v8; // rdi
  SIZE_T v9; // r13
  wchar_t *PoolWithTag; // rax
  WCHAR *v11; // r14
  int RegistryValues; // ebx
  HANDLE v13; // rax
  wchar_t *v14; // rax
  HANDLE v15; // rax
  char *v16; // rax
  char *v17; // rbx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+80h] [rbp-80h] BYREF
  char *v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h] BYREF
  char *v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h] BYREF
  char *v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp-50h] BYREF
  char *v29; // [rsp+B8h] [rbp-48h]
  _QWORD v30[148]; // [rsp+1D0h] [rbp+D0h] BYREF

  v6 = -1LL;
  KeyHandle = 0LL;
  v7 = -1LL;
  Handle = 0LL;
  v8 = 0LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  v9 = (unsigned int)(2 * v7 + 40);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_21;
  RegistryValues = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v9, L"%ws\\StackLevelKwFilter", a1);
  if ( RegistryValues )
    goto LABEL_20;
  RtlInitUnicodeString(&DestinationString, v11);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v13 = KeyHandle;
  if ( RegistryValues < 0 )
    v13 = 0LL;
  KeyHandle = v13;
  if ( a2 )
  {
    do
      ++v6;
    while ( *(_WORD *)(a2 + 2 * v6) );
    v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v6 + 40), 0x50777445u);
    v8 = v14;
    if ( !v14 )
      goto LABEL_21;
    RegistryValues = RtlStringCbPrintfW(v14, (unsigned int)(2 * v6 + 40), L"%ws\\StackLevelKwFilter", a2);
    if ( RegistryValues )
      goto LABEL_20;
    RtlInitUnicodeString(&DestinationString, v8);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValues = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    v15 = Handle;
    if ( RegistryValues < 0 )
      v15 = 0LL;
    Handle = v15;
  }
  if ( !KeyHandle && !Handle )
    goto LABEL_20;
  v16 = (char *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x50777445u);
  *a3 = v16;
  v17 = v16;
  if ( v16 )
  {
    memset(v30, 0, 0x498uLL);
    v23 = v17;
    LODWORD(v30[4]) = 11;
    v22 = 11;
    v30[3] = &v22;
    LODWORD(v30[11]) = 11;
    v30[2] = L"MatchAnyKeyword";
    v24 = 11;
    v30[10] = &v24;
    v30[0] = EtwpQueryRegistryCallback;
    v30[9] = L"MatchAllKeyword";
    v30[7] = EtwpQueryRegistryCallback;
    v25 = v17 + 8;
    v30[17] = &v26;
    v30[16] = L"Level";
    v27 = v17 + 16;
    v30[24] = &v28;
    v30[23] = L"FilterIn";
    v30[14] = EtwpQueryRegistryCallback;
    LODWORD(v30[18]) = 4;
    v26 = 4;
    v30[21] = EtwpQueryRegistryCallback;
    LODWORD(v30[25]) = 4;
    v28 = 4;
    v29 = v17 + 17;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v30, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( Handle )
      {
        v30[5] = *a3;
        v30[12] = v30[5] + 8LL;
        v30[19] = v30[5] + 16LL;
        v30[26] = v30[5] + 17LL;
        RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v30, 0LL);
      }
LABEL_20:
      if ( RegistryValues >= 0 )
        goto LABEL_23;
    }
  }
LABEL_21:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
