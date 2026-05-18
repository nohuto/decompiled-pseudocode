/*
 * XREFs of sub_1800D58B0 @ 0x1800D58B0
 * Callers:
 *     sub_180067B38 @ 0x180067B38 (sub_180067B38.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D58B0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 184) && a2 <= *(_QWORD *)(a1 + 192) )
    return sub_1800D57D8(a1, a2, a3);
  else
    return 4LL;
}
