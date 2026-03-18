/*
 * XREFs of ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0072EB4
 * Callers:
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0011680 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 IsDesktopHeapLoggingOn(void)
{
  unsigned int v0; // ebx
  int v1; // edi
  void *v2; // rbp
  int v3; // esi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+54h] [rbp-24h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  v0 = 0;
  DestinationString.Buffer = 0LL;
  v5 = gdwPolicyFlags;
  v1 = gdwPolicyFlags;
  while ( 1 )
  {
    v2 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v5);
    if ( !v2 )
      break;
    RtlInitUnicodeString(&DestinationString, L"DesktopHeapLogging");
    if ( ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0 )
    {
      v3 = v5;
      v1 = v5 != 0 ? v1 : 0;
    }
    else
    {
      v1 = v9;
      v3 = 0;
      v5 = 0;
    }
    ZwClose(v2);
    if ( !v3 )
      goto LABEL_9;
  }
  v1 = 0;
LABEL_9:
  LOBYTE(v0) = v1 != 0;
  return v0;
}
