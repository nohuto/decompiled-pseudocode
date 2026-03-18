/*
 * XREFs of PsGetBaseTrapFrame @ 0x1402E996C
 * Callers:
 *     PsPicoWalkUserStack @ 0x14088BFA0 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14088D5A0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1400A0F18 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
