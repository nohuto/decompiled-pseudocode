/*
 * XREFs of CheckDesktopPolicy @ 0x1C0075600
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0011680 (OpenCacheKeyEx.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     RtlLoadStringOrError @ 0x1C0075C10 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(const UNICODE_STRING *a1, const WCHAR *a2)
{
  void *v4; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD KeyValueInformation[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v12[160]; // [rsp+60h] [rbp-A0h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v8 = gdwPolicyFlags & 6;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)a2, v12);
      a2 = (const WCHAR *)v12;
    }
    do
    {
      v4 = OpenCacheKeyEx(a1, 4u, 0x20019u, &v8);
      if ( !v4 )
        break;
      RtlInitUnicodeString(&DestinationString, a2);
      v6 = ZwQueryValueKey(v4, &DestinationString, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v4);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL, v7);
        return 1LL;
      }
    }
    while ( v8 );
  }
  return 0LL;
}
