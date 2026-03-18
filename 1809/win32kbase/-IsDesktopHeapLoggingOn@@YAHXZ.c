/*
 * XREFs of ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C006B4A0
 * Callers:
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

_BOOL8 IsDesktopHeapLoggingOn(void)
{
  int v0; // ebx
  void *v1; // rdi
  int v2; // esi
  int v4; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-30h] BYREF
  int v8; // [rsp+54h] [rbp-24h]

  v4 = gdwPolicyFlags;
  v0 = gdwPolicyFlags;
  while ( 1 )
  {
    v1 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v4);
    if ( !v1 )
      break;
    RtlInitUnicodeString(&DestinationString, L"DesktopHeapLogging");
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0 )
    {
      v2 = v4;
      if ( !v4 )
        v0 = 0;
    }
    else
    {
      v0 = v8;
      v2 = 0;
      v4 = 0;
    }
    ZwClose(v1);
    if ( !v2 )
      return v0 != 0;
  }
  return 0LL;
}
