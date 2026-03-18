/*
 * XREFs of CoreMsgUninitialize @ 0x1C009314C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1C0093248 (-Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

NTSTATUS CoreMsgUninitialize()
{
  _QWORD *v0; // rcx
  _QWORD *v1; // rbx
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( CoreMessagingK::EntryLock::s_Initialized )
  {
    if ( dword_1C01C77B8 > 5u )
      TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A32F7, 0LL, 0LL, 2u, &pData);
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
    if ( P )
    {
      ExFreePoolWithTag(P, 0x4C454D43u);
      P = 0LL;
    }
    CoreMessagingK::EntryLock::s_Initialized = 0;
    if ( dword_1C01C77B8 > 5u )
      TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A326F, 0LL, 0LL, 2u, &pData);
    result = EtwUnregister(qword_1C01C77D8);
    qword_1C01C77D8 = 0LL;
    dword_1C01C77B8 = 0;
  }
  return result;
}
