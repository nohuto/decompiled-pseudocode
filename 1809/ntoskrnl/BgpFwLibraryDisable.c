/*
 * XREFs of BgpFwLibraryDisable @ 0x140950F24
 * Callers:
 *     BgLibraryDisable @ 0x140950E10 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140950E4C (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     LogFwReport @ 0x14094E514 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x14094F140 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x140950360 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140950424 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x14095101C (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409510F8 (BgpFoDestroy.c)
 *     AnFwDisplayProgressIndicator @ 0x14095129C (AnFwDisplayProgressIndicator.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax

  result = (unsigned int)dword_140405AD0;
  if ( (dword_140405AD0 & 2) != 0 )
  {
    if ( (dword_140405AD0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140405B98 )
    {
      BgpTxtDestroyRegion(qword_140405B98);
      if ( BgpTextRegionSave == qword_140405B98 )
        BgpTextRegionSave = 0LL;
      qword_140405B98 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140405B90 )
    {
      BgpTxtDestroyRegion(qword_140405B90);
      if ( BgpAnimationRegionSave == qword_140405B90 )
        BgpAnimationRegionSave = 0LL;
      qword_140405B90 = 0LL;
    }
    if ( qword_140405B78 )
    {
      BgpFoDestroy(qword_140405B78);
      if ( *(_QWORD *)qword_140405B78 )
      {
        if ( (*(_DWORD *)(qword_140405B78 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140405B78);
      }
      BgpFwFreeMemory(qword_140405B78);
      qword_140405B78 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_140405AD0 &= ~2u;
  }
  return result;
}
