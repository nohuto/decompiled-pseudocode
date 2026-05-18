/*
 * XREFs of sub_180101660 @ 0x180101660
 * Callers:
 *     sub_1800CA73C @ 0x1800CA73C (sub_1800CA73C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180101660(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 16LL;
  if ( a2 < 0x10 || (v4 = 2048, result = a2, a2 <= 0x800) )
    v4 = result;
  *(_DWORD *)(a1 + 1940) = v4;
  return result;
}
