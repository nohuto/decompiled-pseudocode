/*
 * XREFs of ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C00F1DF4
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsSmallerThanScreen @ 0x1C010912C (IsSmallerThanScreen.c)
 */

__int64 __fastcall ShouldRemoveMonitorRgn(struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 8) != 0
    && ((unsigned int)IsSmallerThanScreen(a1) || *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL)) )
  {
    return 1;
  }
  return v1;
}
