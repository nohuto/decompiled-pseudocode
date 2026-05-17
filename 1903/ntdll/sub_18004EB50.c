/*
 * XREFs of sub_18004EB50 @ 0x18004EB50
 * Callers:
 *     sub_18004EA3C @ 0x18004EA3C (sub_18004EA3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004EB50(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  v2 = a1 + 16;
  if ( (a2 & 0x10000000) == 0 )
    v2 = a1;
  if ( (a2 & 0x20000F08) != 0 )
    v2 = ((v2 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  result = 1LL;
  if ( v2 )
    return v2;
  return result;
}
