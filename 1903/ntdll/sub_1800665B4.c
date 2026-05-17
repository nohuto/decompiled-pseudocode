/*
 * XREFs of sub_1800665B4 @ 0x1800665B4
 * Callers:
 *     RtlCopyContext @ 0x1800662E0 (RtlCopyContext.c)
 *     sub_1800F2254 @ 0x1800F2254 (sub_1800F2254.c)
 *     sub_18010A120 @ 0x18010A120 (sub_18010A120.c)
 *     sub_18010A184 @ 0x18010A184 (sub_18010A184.c)
 * Callees:
 *     sub_1800665D4 @ 0x1800665D4 (sub_1800665D4.c)
 */

__int64 __fastcall sub_1800665B4(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return sub_1800665D4();
  if ( (a3 & 0x100000) != 0 )
    return sub_1800F22E4();
  if ( (a3 & 0x200000) != 0 )
    return sub_1800F24D0();
  if ( (a3 & 0x400000) != 0 )
    return sub_1800F2624();
  return result;
}
