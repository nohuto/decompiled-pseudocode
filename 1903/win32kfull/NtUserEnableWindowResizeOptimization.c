/*
 * XREFs of NtUserEnableWindowResizeOptimization @ 0x1C013FC20
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableWindowResizeOptimization @ 0x1C013FC80 (GreEnableWindowResizeOptimization.c)
 */

__int64 __fastcall NtUserEnableWindowResizeOptimization(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v6 = (int)GreEnableWindowResizeOptimization(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
