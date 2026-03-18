/*
 * XREFs of KdPowerTransition @ 0x1402A1FD0
 * Callers:
 *     PopHandleNextState @ 0x140598DB0 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1402A1FF0 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
