/*
 * XREFs of WakeRIT @ 0x1C00BAB30
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     EditionActivateMitInput @ 0x1C00BA840 (EditionActivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C00BA970 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C00BA9C0 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C00BAA80 (EditionInitiateMouseEventProcessing.c)
 *     EditionDeactivateMitInput @ 0x1C00BAB90 (EditionDeactivateMitInput.c)
 *     WakeRITForConfigSwitch @ 0x1C0138E70 (WakeRITForConfigSwitch.c)
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
