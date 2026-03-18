/*
 * XREFs of xxxComputeProposedPerMonRect @ 0x1C008FE20
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     FindOldMonitor @ 0x1C0091908 (FindOldMonitor.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C01170EC (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxComputeProposedPerMonRect(struct tagWND *a1, struct tagMONITORRECTS *a2, struct tagRECT *a3)
{
  int OldMonitor; // eax
  int ShouldMaximizeWindow; // eax
  __int64 v9; // r10
  int v10; // r9d

  *a3 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  OldMonitor = FindOldMonitor(a1, a2, 0LL);
  if ( OldMonitor == -1 )
    return 0LL;
  if ( *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) != *((_WORD *)a2 + 24 * OldMonitor + 20) )
  {
    ShouldMaximizeWindow = _ShouldMaximizeWindow(a1);
    xxxNormalizeRect(a1, a3, (struct tagRECT *)(v9 + 88), a2, v10, ShouldMaximizeWindow != 0, 1);
  }
  return 1LL;
}
