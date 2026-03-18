/*
 * XREFs of WakeRIT @ 0x1C00ECEA0
 * Callers:
 *     EditionActivateMitInput @ 0x1C00ECB90 (EditionActivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C00ECC50 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C00ECD00 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C00ECDE0 (EditionInitiateMouseEventProcessing.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 *     EditionDeactivateMitInput @ 0x1C0161920 (EditionDeactivateMitInput.c)
 *     WakeRITForConfigSwitch @ 0x1C01623D0 (WakeRITForConfigSwitch.c)
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
