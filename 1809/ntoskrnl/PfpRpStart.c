/*
 * XREFs of PfpRpStart @ 0x140754268
 * Callers:
 *     PfpRpInitialize @ 0x1409D5B8C (PfpRpInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpStart(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 136), 0LL);
  *(_DWORD *)(a1 + 152) |= 1u;
  return result;
}
