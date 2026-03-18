/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C0008320
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000DA78 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     FWUPDATE_ReenumerateFirmwareUpdateDevice @ 0x1C0038EC4 (FWUPDATE_ReenumerateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset(struct _MCGEN_TRACE_CONTEXT *a1)
{
  unsigned __int64 MatchAllKeyword; // rbx

  MatchAllKeyword = a1[13].MatchAllKeyword;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0p(a1, &USBHUB3_ETW_EVENT_HUB_WAS_RESET_ON_RESUME, 0LL, *(_QWORD *)(MatchAllKeyword + 248));
  HUBMUX_QueuePowerUpEventToPSMs(MatchAllKeyword, 3022LL);
  FWUPDATE_ReenumerateFirmwareUpdateDevice(MatchAllKeyword);
  return 1000LL;
}
