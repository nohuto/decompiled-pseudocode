/*
 * XREFs of EtwpEnumerateAutologgerPath @ 0x1407705F8
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140770288 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x1406B8430 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406E41C0 (RtlWriteRegistryValue.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 */

void __fastcall EtwpEnumerateAutologgerPath(PCWSTR Path, const WCHAR *a2, _RTL_AVL_TABLE *a3)
{
  wchar_t *v5; // rsi
  __int64 v6; // rbx
  ULONG v7; // r13d
  SIZE_T v8; // r15
  WCHAR *PoolWithTag; // rbx
  NTSTATUS v10; // edi
  NTSTATUS v11; // ecx
  const WCHAR *v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  PCWSTR v15; // rdx
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ValueData; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  PRTL_AVL_TABLE Table; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyInformation[72]; // [rsp+90h] [rbp-70h] BYREF

  Table = a3;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v6 = -1LL;
  v7 = 0;
  if ( a2 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
    v14 = -1LL;
    do
      ++v14;
    while ( Path[v14] );
    v15 = Path;
    if ( v14 <= v13 )
      v15 = a2;
    do
      ++v6;
    while ( v15[v6] );
  }
  else
  {
    do
      ++v6;
    while ( Path[v6] );
  }
  RtlInitUnicodeString(&DestinationString, Path);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v8 = (unsigned int)(2 * v6 + 260);
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v8, 0x74777445u);
    if ( PoolWithTag )
    {
      if ( !a2 || (v5 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x74777445u)) != 0LL )
      {
        do
        {
          v10 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
          if ( v10 < 0 )
          {
            v11 = v10;
            ValueData = 0;
            if ( v10 == -2147483622 )
              v11 = 0;
            ValueData = RtlNtStatusToDosError(v11);
            v12 = a2;
            if ( !a2 )
              v12 = Path;
            RtlWriteRegistryValue(0, v12, L"Status", 4u, &ValueData, 4u);
            if ( v10 == -2147483643 || v10 == -1073741789 )
              v10 = 0;
          }
          else if ( KeyInformation[3] < 0x102u )
          {
            *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
            RtlInsertElementGenericTableAvl(Table, &KeyInformation[4], KeyInformation[3] + 2, NewElement);
            if ( NewElement[0] )
            {
              if ( !RtlStringCbPrintfW(PoolWithTag, v8, L"%ws\\%ws", Path, &KeyInformation[4])
                && (!a2 || !RtlStringCbPrintfW(v5, v8, L"%ws\\%ws", a2, &KeyInformation[4])) )
              {
                EtwStartAutoLogger((PCWSTR)&KeyInformation[4], PoolWithTag);
              }
            }
          }
          ++v7;
        }
        while ( v10 >= 0 );
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
}
