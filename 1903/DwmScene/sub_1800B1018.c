/*
 * XREFs of sub_1800B1018 @ 0x1800B1018
 * Callers:
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 *     sub_1800FF368 @ 0x1800FF368 (sub_1800FF368.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B1018(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 440);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 440) = result;
  return result;
}
