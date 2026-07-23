/*
 * XREFs of PsGetBaseTrapFrame @ 0x1402E9C5C
 * Callers:
 *     PsPicoWalkUserStack @ 0x14088D1E0 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1400A0E58 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
