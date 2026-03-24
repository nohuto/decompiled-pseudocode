/*
 * XREFs of PsGetBaseTrapFrame @ 0x1402E9A6C
 * Callers:
 *     PsPicoWalkUserStack @ 0x14088BF80 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14088D580 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1400A0F18 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
