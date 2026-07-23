/*
 * XREFs of EtwpEnumerateAutologgerPath @ 0x140742E18
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140742A4C (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 */

void __fastcall EtwpEnumerateAutologgerPath(PCWSTR Path, const WCHAR *a2, _RTL_AVL_TABLE *a3)
{
  __int64 v3; // rbx
  wchar_t *v6; // rsi
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
  _BYTE KeyInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v24; // [rsp+9Ch] [rbp-64h]
  WCHAR Buffer[136]; // [rsp+A0h] [rbp-60h] BYREF

  Table = a3;
  v3 = -1LL;
  v6 = 0LL;
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
      ++v3;
    while ( v15[v3] );
  }
  else
  {
    do
      ++v3;
    while ( Path[v3] );
  }
  RtlInitUnicodeString(&DestinationString, Path);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v8 = (unsigned int)(2 * v3 + 260);
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v8, 0x74777445u);
    if ( PoolWithTag )
    {
      if ( !a2 || (v6 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x74777445u)) != 0LL )
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
          else if ( v24 < 0x102 )
          {
            Buffer[(unsigned __int64)v24 >> 1] = 0;
            RtlInsertElementGenericTableAvl(Table, Buffer, v24 + 2, NewElement);
            if ( NewElement[0] )
            {
              if ( !RtlStringCbPrintfW(PoolWithTag, v8, L"%ws\\%ws", Path, Buffer)
                && (!a2 || !RtlStringCbPrintfW(v6, v8, L"%ws\\%ws", a2, Buffer)) )
              {
                EtwStartAutoLogger(Buffer, PoolWithTag);
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
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
}
