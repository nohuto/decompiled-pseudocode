/*
 * XREFs of CoreMsgUninitialize @ 0x1C00B7BFC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1C00B7CF8 (-Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

NTSTATUS CoreMsgUninitialize()
{
  _QWORD *v0; // rcx
  _QWORD *v1; // rbx
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( CoreMessagingK::EntryLock::s_Initialized )
  {
    if ( dword_1C020F5E0 > 5u )
      TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA14D, 0LL, 0LL, 2u, &pData);
    v0 = CoreMessagingK::BufferCache::s_FreeList;
    CoreMessagingK::BufferCache::s_FreeList = 0LL;
    if ( v0 )
    {
      do
      {
        v1 = (_QWORD *)v0[1];
        ExFreePoolWithTag(v0, 0x43424D43u);
        v0 = v1;
      }
      while ( v1 );
    }
    CoreMessagingK::ServerPorts::Uninitialize();
    if ( CoreMessagingK::RegistrarClient::s_Port )
    {
      ZwClose(CoreMessagingK::RegistrarClient::s_Port);
      CoreMessagingK::RegistrarClient::s_Port = 0LL;
    }
    if ( Mutex )
    {
      ExFreePoolWithTag(Mutex, 0x4C454D43u);
      Mutex = 0LL;
    }
    CoreMessagingK::EntryLock::s_Initialized = 0;
    if ( dword_1C020F5E0 > 5u )
      TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA0C5, 0LL, 0LL, 2u, &pData);
    result = EtwUnregister(qword_1C020F600);
    qword_1C020F600 = 0LL;
    dword_1C020F5E0 = 0;
  }
  return result;
}
