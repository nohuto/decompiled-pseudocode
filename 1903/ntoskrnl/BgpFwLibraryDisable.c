/*
 * XREFs of BgpFwLibraryDisable @ 0x140990F84
 * Callers:
 *     BgLibraryDisable @ 0x140990E70 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140990EAC (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     LogFwReport @ 0x14098E514 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x14098F178 (AnFwFadeCompletion.c)
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140990474 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x14099107C (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x140991158 (BgpFoDestroy.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax

  result = (unsigned int)dword_14042C030;
  if ( (dword_14042C030 & 2) != 0 )
  {
    if ( (dword_14042C030 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_14042C0F8 )
    {
      BgpTxtDestroyRegion(qword_14042C0F8);
      if ( BgpTextRegionSave == qword_14042C0F8 )
        BgpTextRegionSave = 0LL;
      qword_14042C0F8 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_14042C0F0 )
    {
      BgpTxtDestroyRegion(qword_14042C0F0);
      if ( BgpAnimationRegionSave == qword_14042C0F0 )
        BgpAnimationRegionSave = 0LL;
      qword_14042C0F0 = 0LL;
    }
    if ( qword_14042C0D8 )
    {
      BgpFoDestroy(qword_14042C0D8);
      if ( *(_QWORD *)qword_14042C0D8 )
      {
        if ( (*(_DWORD *)(qword_14042C0D8 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_14042C0D8);
      }
      BgpFwFreeMemory(qword_14042C0D8);
      qword_14042C0D8 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_14042C030 &= ~2u;
  }
  return result;
}
