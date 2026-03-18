/*
 * XREFs of _PnpDeletePropertyWorker @ 0x14071DEF4
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x1407087CC (_PnpSetGenericStoreProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140002B5C (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     _PnpOpenPropertiesKey @ 0x1405C1624 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v9; // eax
  NTSTATUS v10; // ebx
  NTSTATUS inited; // edi
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  HANDLE KeyHandle; // [rsp+90h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-78h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-68h]
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-60h] BYREF

  v16 = a2;
  KeyHandle = 0LL;
  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 || (v10 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, (size_t *)&DestinationString.Length), v10 >= 0) )
  {
    if ( RtlStringCchPrintfExW(
           pszDest,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX") < 0 )
      return (unsigned int)-1073741595;
    v9 = PnpOpenPropertiesKey(a1, v16, pszDest, 6, 0, (__int64)pszFormat, &KeyHandle);
    v10 = v9;
    if ( v9 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v9 < 0 )
      return (unsigned int)v10;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, a3);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
    ZwClose(KeyHandle);
    if ( inited == -1073741772 || inited == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( inited < 0 )
    {
      return (unsigned int)inited;
    }
  }
  return (unsigned int)v10;
}
