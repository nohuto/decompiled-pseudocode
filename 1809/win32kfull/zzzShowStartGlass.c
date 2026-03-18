/*
 * XREFs of zzzShowStartGlass @ 0x1C01C3DA0
 * Callers:
 *     <none>
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C0017CF0 (zzzCalcStartCursorHide.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax
  int v3; // edx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v3 & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
    v3 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) = v3 | 0x400;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, v1);
  return 1LL;
}
