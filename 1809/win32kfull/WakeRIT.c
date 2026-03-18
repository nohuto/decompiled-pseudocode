/*
 * XREFs of WakeRIT @ 0x1C0108A00
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 *     EditionActivateMitInput @ 0x1C0108500 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C01085C0 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C0108810 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C01088C0 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C0108940 (EditionInitiateMouseEventProcessing.c)
 *     WakeRITForConfigSwitch @ 0x1C01594B0 (WakeRITForConfigSwitch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( gpkeRITEvent )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent(gpkeRITEvent, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}
