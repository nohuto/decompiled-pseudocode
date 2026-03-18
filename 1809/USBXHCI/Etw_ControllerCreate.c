/*
 * XREFs of Etw_ControllerCreate @ 0x1C0038FFC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C0039BF8 (McTemplateK0pqqqqqqqsssxqqqt.c)
 */

__int64 __fastcall Etw_ControllerCreate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pqqqqqqqsssxqqqt(
             a2 + 250,
             &USBXHCI_ETW_EVENT_CONTROLLER_CREATE,
             a2 + 245,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 180),
             *(_DWORD *)(a2 + 196),
             *(unsigned __int16 *)(a2 + 200),
             *(unsigned __int16 *)(a2 + 204),
             *(unsigned __int16 *)(a2 + 184),
             *(unsigned __int16 *)(a2 + 188),
             *(unsigned __int8 *)(a2 + 192),
             a2 + 240,
             a2 + 245,
             a2 + 250,
             *(_QWORD *)(a2 + 264),
             *(_DWORD *)(a2 + 400),
             *(_DWORD *)(a2 + 328),
             *(_DWORD *)(a2 + 176),
             *(unsigned __int8 *)(a2 + 472));
  return result;
}
