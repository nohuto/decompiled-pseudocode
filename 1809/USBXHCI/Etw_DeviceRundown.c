/*
 * XREFs of Etw_DeviceRundown @ 0x1C003942C
 * Callers:
 *     Etw_DeviceListRundown @ 0x1C00017F0 (Etw_DeviceListRundown.c)
 * Callees:
 *     Etw_EndpointListRundown @ 0x1C0039640 (Etw_EndpointListRundown.c)
 *     McTemplateK0pppqqQ6qqqqn @ 0x1C0039AEC (McTemplateK0pppqqQ6qqqqn.c)
 */

__int64 __fastcall Etw_DeviceRundown(__int64 a1, __int64 a2)
{
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pppqqQ6qqqqn(
      a1,
      (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION,
      a1,
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)a2,
      *(_DWORD *)(a2 + 20),
      *(_DWORD *)(a2 + 36),
      a2 + 44,
      *(_BYTE *)(a2 + 135),
      *(_BYTE *)(a2 + 136) != 0,
      *(_DWORD *)(a2 + 140),
      *(_DWORD *)(a2 + 144));
  return Etw_EndpointListRundown(a1, a2);
}
