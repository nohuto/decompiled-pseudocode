/*
 * XREFs of sub_1800F2C78 @ 0x1800F2C78
 * Callers:
 *     sub_1800904E4 @ 0x1800904E4 (sub_1800904E4.c)
 *     sub_180090E54 @ 0x180090E54 (sub_180090E54.c)
 *     sub_180093634 @ 0x180093634 (sub_180093634.c)
 *     sub_180093EDC @ 0x180093EDC (sub_180093EDC.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 *     sub_1800F5FFC @ 0x1800F5FFC (sub_1800F5FFC.c)
 *     sub_180113920 @ 0x180113920 (sub_180113920.c)
 * Callees:
 *     sub_1800A4004 @ 0x1800A4004 (sub_1800A4004.c)
 */

__int64 __fastcall sub_1800F2C78(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1800A4004(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)result + 128) == 0xFFFF )
    return 511LL;
  return result;
}
