/*
 * XREFs of Etw_ControllerFirmareVersionUpdate @ 0x1C003E55C
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0009608 (Command_D0EntryPostInterruptsEnabled.c)
 *     Register_ParseCapabilityRegister @ 0x1C0067778 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C003F35C (McTemplateK0pqqqqqqqsssxqqqt.c)
 */

__int64 __fastcall Etw_ControllerFirmareVersionUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pqqqqqqqsssxqqqt(
             a2 + 314,
             &USBXHCI_ETW_EVENT_CONTROLLER_FIRMWARE_VERSION_UPDATE,
             a2 + 309,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 244),
             *(_DWORD *)(a2 + 260),
             *(unsigned __int16 *)(a2 + 264),
             *(unsigned __int16 *)(a2 + 268),
             *(unsigned __int16 *)(a2 + 248),
             *(unsigned __int16 *)(a2 + 252),
             *(unsigned __int8 *)(a2 + 256),
             a2 + 304,
             a2 + 309,
             a2 + 314,
             *(_QWORD *)(a2 + 328),
             *(_DWORD *)(a2 + 464),
             *(_DWORD *)(a2 + 392),
             *(_DWORD *)(a2 + 176),
             *(unsigned __int8 *)(a2 + 536));
  return result;
}
