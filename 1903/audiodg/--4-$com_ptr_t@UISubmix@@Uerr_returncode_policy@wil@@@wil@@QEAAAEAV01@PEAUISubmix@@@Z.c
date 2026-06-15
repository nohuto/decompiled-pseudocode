/*
 * XREFs of ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140001D7C
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140004120 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossPro.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000DB80 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000F5C0 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140052980 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14005C838 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGI.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14005DCB0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
