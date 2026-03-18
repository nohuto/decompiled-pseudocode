/*
 * XREFs of xxxComputeProposedPerMonRect @ 0x1C005AA38
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C0058FF8 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     FindOldMonitor @ 0x1C007223C (FindOldMonitor.c)
 */

__int64 __fastcall xxxComputeProposedPerMonRect(struct tagWND *a1, struct tagMONITORRECTS *a2, struct tagRECT *a3)
{
  int OldMonitor; // eax
  int ShouldMaximizeWindow; // eax
  __int64 v9; // r10
  int v10; // r9d

  *a3 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  OldMonitor = FindOldMonitor(a1, a2, 0LL);
  if ( OldMonitor == -1 || *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) == *((_WORD *)a2 + 28 * OldMonitor + 20) )
    return 0LL;
  ShouldMaximizeWindow = _ShouldMaximizeWindow(a1);
  xxxNormalizeRect(a1, a3, (struct tagRECT *)(v9 + 88), a2, v10, ShouldMaximizeWindow != 0, 1);
  return 1LL;
}
