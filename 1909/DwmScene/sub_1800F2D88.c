/*
 * XREFs of sub_1800F2D88 @ 0x1800F2D88
 * Callers:
 *     sub_1800905F4 @ 0x1800905F4 (sub_1800905F4.c)
 *     sub_180090F64 @ 0x180090F64 (sub_180090F64.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 *     sub_1800F610C @ 0x1800F610C (sub_1800F610C.c)
 *     sub_180113A30 @ 0x180113A30 (sub_180113A30.c)
 * Callees:
 *     sub_1800A4114 @ 0x1800A4114 (sub_1800A4114.c)
 */

__int64 __fastcall sub_1800F2D88(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1800A4114(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)result + 128) == 0xFFFF )
    return 511LL;
  return result;
}
