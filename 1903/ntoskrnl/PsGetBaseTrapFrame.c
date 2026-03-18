/*
 * XREFs of PsGetBaseTrapFrame @ 0x140307040
 * Callers:
 *     PsPicoWalkUserStack @ 0x1408CA3F0 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x14001B3F0 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
