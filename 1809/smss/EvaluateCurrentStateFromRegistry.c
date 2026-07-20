/*
 * XREFs of EvaluateCurrentStateFromRegistry @ 0x14000D6B8
 * Callers:
 *     EvaluateCurrentState @ 0x14000D68C (EvaluateCurrentState.c)
 * Callees:
 *     QueryFeatureOverride @ 0x14000D820 (QueryFeatureOverride.c)
 */

__int64 __fastcall EvaluateCurrentStateFromRegistry(int a1, int a2, volatile signed __int32 *a3)
{
  unsigned int v3; // edi
  BOOL v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0;
  v5 = a2 != 1;
  if ( (unsigned int)QueryFeatureOverride(
                       __ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
                       &v7)
    && v7 )
  {
    v5 = v7 != 1;
  }
  _InterlockedCompareExchange(a3, v5 + 1, 0);
  LOBYTE(v3) = *a3 != 1;
  return v3;
}
