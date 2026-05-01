/*
 * XREFs of ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x18005DC74
 * Callers:
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18005D6B0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1802B9810 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetExperienceIdPersistenceIndex(LPCWCH lpString1)
{
  unsigned __int64 i; // rbx

  for ( i = 1LL; i < 4; ++i )
  {
    if ( CompareStringOrdinal(lpString1, -1, off_1804517B0[i], -1, 1) == 2 )
      return i;
  }
  return 0LL;
}
