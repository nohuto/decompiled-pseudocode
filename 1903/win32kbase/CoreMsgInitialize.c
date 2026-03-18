/*
 * XREFs of CoreMsgInitialize @ 0x1C00AA70C
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00AA788 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1C00AAF40 (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01CA150 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     TraceLoggingRegisterEx @ 0x1C02490A4 (TraceLoggingRegisterEx.c)
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
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C020F5E0, 0LL, 0LL);
  if ( dword_1C020F5E0 > 5u )
    TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA16F, 0LL, 0LL, 2u, &pData);
  v0 = CoreMessagingK::EntryLock::Initialize();
  if ( v0 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize();
  v2 = v0;
  if ( dword_1C020F5E0 > 5u )
  {
    v6 = 0;
    v4 = &v2;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA126, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v0;
}
