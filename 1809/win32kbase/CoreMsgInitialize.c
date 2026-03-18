/*
 * XREFs of CoreMsgInitialize @ 0x1C008432C
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00849C4 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1C00857FC (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0185620 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     TraceLoggingRegisterEx @ 0x1C02003AC (TraceLoggingRegisterEx.c)
 */

__int64 CoreMsgInitialize()
{
  int v0; // ebx
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(1LL, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01C77B8, 0LL, 0LL);
  if ( dword_1C01C77B8 > 5u )
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A3319, 0LL, 0LL, 2u, &pData);
  v0 = CoreMessagingK::EntryLock::Initialize();
  if ( v0 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize();
  v2 = v0;
  if ( dword_1C01C77B8 > 5u )
  {
    v6 = 0;
    v4 = &v2;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A32D0, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v0;
}
