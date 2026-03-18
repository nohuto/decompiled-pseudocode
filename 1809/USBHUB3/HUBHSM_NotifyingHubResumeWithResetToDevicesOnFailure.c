/*
 * XREFs of HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C00079E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000E588 (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure(struct _MCGEN_TRACE_CONTEXT *a1)
{
  unsigned __int64 MatchAllKeyword; // rbx

  MatchAllKeyword = a1[13].MatchAllKeyword;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0p(a1, &USBHUB3_ETW_EVENT_HUB_WAS_RESET_ON_RESUME, 0LL, *(_QWORD *)(MatchAllKeyword + 248));
  HUBMUX_QueuePowerUpEventToDSMs(MatchAllKeyword, 4014LL);
  return 1000LL;
}
