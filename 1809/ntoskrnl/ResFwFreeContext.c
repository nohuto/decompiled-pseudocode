/*
 * XREFs of ResFwFreeContext @ 0x14094F218
 * Callers:
 *     BgFreeContext @ 0x14094F1D4 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1401374D0 (MmFreePagesFromMdl.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x14094F340 (BgpFwReservePoolSwap.c)
 *     LogFwReport @ 0x14094F514 (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x140950140 (AnFwFadeCompletion.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     ResFwBackgroundTransition @ 0x140951360 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140951424 (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x14095154C (RaspClearCache.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  struct _MDL *v4; // rcx

  if ( (dword_140406AD0 & 0x100000) != 0 )
  {
    v2 = TxtpTextCache;
    v3 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v3 + 8) != v2 )
        goto LABEL_15;
      TxtpTextCache = (_UNKNOWN *)v3;
      *(_QWORD *)(v3 + 8) = &TxtpTextCache;
      if ( v2 == &TxtpTextCache )
        break;
      BgpGxRectangleDestroy(v2[6]);
      BgpFwFreeMemory((__int64)v2);
      v2 = TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
        goto LABEL_15;
      v3 = *(_QWORD *)TxtpTextCache;
    }
    dword_140401388 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1LL, 0LL, 0LL, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_140406AD0 &= 0xFFEFF7FD;
    qword_140406B90 = BgpAnimationRegionSave;
    qword_140406B98 = BgpTextRegionSave;
    memset(&BgInternal, 0, 0x28uLL);
    ResFwBackgroundTransition(1LL);
  }
  else
  {
    v4 = *(struct _MDL **)(a1 + 8);
    if ( v4 )
    {
      MmFreePagesFromMdl(v4);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
