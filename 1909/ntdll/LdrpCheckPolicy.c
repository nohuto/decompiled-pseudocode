/*
 * XREFs of LdrpCheckPolicy @ 0x180081EAC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall LdrpCheckPolicy(int a1)
{
  return (a1 & LdrpPolicyBits) != 0;
}
