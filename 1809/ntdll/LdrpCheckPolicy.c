/*
 * XREFs of LdrpCheckPolicy @ 0x180086338
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall LdrpCheckPolicy(int a1)
{
  return (a1 & LdrpPolicyBits) != 0;
}
