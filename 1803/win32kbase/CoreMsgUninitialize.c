/*
 * XREFs of CoreMsgUninitialize @ 0x1C0165668
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x1C01651FC (-TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ @ 0x1C0165258 (-TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ.c)
 */

NTSTATUS __fastcall CoreMsgUninitialize(__int64 a1, __int64 a2, __int64 a3, const GUID *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const GUID *v6; // r9
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  PRKMUTEX v9; // rcx
  NTSTATUS result; // eax

  if ( CoreMessagingK::EntryLock::s_Initialized )
  {
    CoreMessagingK::Log::TraceUninitializeStart(a1, a2, a3, a4);
    v7 = CoreMessagingK::BufferCache::s_FreeList;
    CoreMessagingK::BufferCache::s_FreeList = 0LL;
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)v7[1];
        ExFreePoolWithTag(v7, 0x43424D43u);
        v7 = v8;
      }
      while ( v8 );
    }
    if ( CoreMessagingK::ServerPorts::s_CallbackRegistration )
    {
      ExUnregisterCallback(CoreMessagingK::ServerPorts::s_CallbackRegistration);
      CoreMessagingK::ServerPorts::s_CallbackRegistration = 0LL;
      ObfDereferenceObject(CoreMessagingK::ServerPorts::s_CallbackObject);
      CoreMessagingK::ServerPorts::s_CallbackObject = 0LL;
    }
    if ( CoreMessagingK::RegistrarClient::s_Port )
    {
      ZwClose(CoreMessagingK::RegistrarClient::s_Port);
      CoreMessagingK::RegistrarClient::s_Port = 0LL;
    }
    v9 = Mutex;
    if ( Mutex )
    {
      ExFreePoolWithTag(Mutex, 0x4C454D43u);
      Mutex = 0LL;
    }
    CoreMessagingK::EntryLock::s_Initialized = 0;
    CoreMessagingK::Log::TraceUninitializeStop((__int64)v9, v4, v5, v6);
    result = EtwUnregister(qword_1C019A370);
    qword_1C019A370 = 0LL;
    dword_1C019A350 = 0;
  }
  return result;
}
