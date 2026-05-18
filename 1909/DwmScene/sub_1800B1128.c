/*
 * XREFs of sub_1800B1128 @ 0x1800B1128
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C640C @ 0x1800C640C (sub_1800C640C.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B1128(__int64 a1, int a2, char a3)
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
