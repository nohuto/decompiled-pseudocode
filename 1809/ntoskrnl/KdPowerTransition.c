/*
 * XREFs of KdPowerTransition @ 0x14028C1E0
 * Callers:
 *     PopHandleNextState @ 0x140569410 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x14028C200 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
