/*
 * XREFs of BgpFwLibraryDisable @ 0x140951F24
 * Callers:
 *     BgLibraryDisable @ 0x140951E10 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140951E4C (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     LogFwReport @ 0x14094F514 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x140950140 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x140951360 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140951424 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x14095201C (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409520F8 (BgpFoDestroy.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax

  result = (unsigned int)dword_140406AD0;
  if ( (dword_140406AD0 & 2) != 0 )
  {
    if ( (dword_140406AD0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140406B98 )
    {
      BgpTxtDestroyRegion(qword_140406B98);
      if ( BgpTextRegionSave == qword_140406B98 )
        BgpTextRegionSave = 0LL;
      qword_140406B98 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140406B90 )
    {
      BgpTxtDestroyRegion(qword_140406B90);
      if ( BgpAnimationRegionSave == qword_140406B90 )
        BgpAnimationRegionSave = 0LL;
      qword_140406B90 = 0LL;
    }
    if ( qword_140406B78 )
    {
      BgpFoDestroy(qword_140406B78);
      if ( *(_QWORD *)qword_140406B78 )
      {
        if ( (*(_DWORD *)(qword_140406B78 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140406B78);
      }
      BgpFwFreeMemory(qword_140406B78);
      qword_140406B78 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_140406AD0 &= ~2u;
  }
  return result;
}
