/*
 * XREFs of DpiFdoLineInterruptRoutine @ 0x1C0044610
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoMessageInterruptRoutine @ 0x1C0014100 (DpiFdoMessageInterruptRoutine.c)
 */

__int64 __fastcall DpiFdoLineInterruptRoutine(__int64 a1, __int64 a2)
{
  return DpiFdoMessageInterruptRoutine(a1, a2, 0LL);
}
