/*
 * XREFs of CoreMsgInitialize @ 0x1C01653A8
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     ?TraceInitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1C016506C (-TraceInitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1C01650C8 (-TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1C0165748 (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C01659B4 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     TraceLoggingRegisterEx @ 0x1C01D719C (TraceLoggingRegisterEx.c)
 */

__int64 CoreMsgInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  const GUID *v3; // r9
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  const GUID *v7; // r9

  if ( CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(1LL, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C019A350, 0LL, 0LL);
  CoreMessagingK::Log::TraceInitializeStart(v1, v0, v2, v3);
  v5 = CoreMessagingK::EntryLock::Initialize();
  if ( v5 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize();
  CoreMessagingK::Log::TraceInitializeStop(v5, v4, v6, v7);
  return (unsigned int)v5;
}
