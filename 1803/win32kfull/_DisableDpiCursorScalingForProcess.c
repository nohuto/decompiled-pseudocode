/*
 * XREFs of _DisableDpiCursorScalingForProcess @ 0x1C01977E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DisableDpiCursorScalingForProcess(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x400000u;
  return 1LL;
}
