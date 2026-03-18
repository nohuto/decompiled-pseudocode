/*
 * XREFs of PsGetBaseTrapFrame @ 0x140306AF0
 * Callers:
 *     PsPicoWalkUserStack @ 0x1408C9CD0 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x1408CB3F0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x14001B7E0 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
