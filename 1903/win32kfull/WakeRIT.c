/*
 * XREFs of WakeRIT @ 0x1C0111FF0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     EditionActivateMitInput @ 0x1C0111CE0 (EditionActivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C0111DA0 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C0111E50 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C0111F30 (EditionInitiateMouseEventProcessing.c)
 *     EditionDeactivateMitInput @ 0x1C0160960 (EditionDeactivateMitInput.c)
 *     WakeRITForConfigSwitch @ 0x1C0161400 (WakeRITForConfigSwitch.c)
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
