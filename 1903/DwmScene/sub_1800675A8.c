/*
 * XREFs of sub_1800675A8 @ 0x1800675A8
 * Callers:
 *     sub_180066388 @ 0x180066388 (sub_180066388.c)
 *     sub_180069650 @ 0x180069650 (sub_180069650.c)
 *     sub_180069678 @ 0x180069678 (sub_180069678.c)
 *     sub_1800696D8 @ 0x1800696D8 (sub_1800696D8.c)
 *     sub_180069A30 @ 0x180069A30 (sub_180069A30.c)
 *     sub_180069AC8 @ 0x180069AC8 (sub_180069AC8.c)
 *     sub_180069D64 @ 0x180069D64 (sub_180069D64.c)
 *     sub_180069E98 @ 0x180069E98 (sub_180069E98.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_18007E728 @ 0x18007E728 (sub_18007E728.c)
 *     sub_18007ECC0 @ 0x18007ECC0 (sub_18007ECC0.c)
 *     sub_1800A5BBC @ 0x1800A5BBC (sub_1800A5BBC.c)
 *     sub_1800A5D60 @ 0x1800A5D60 (sub_1800A5D60.c)
 *     sub_1800A60FC @ 0x1800A60FC (sub_1800A60FC.c)
 *     sub_1800BC360 @ 0x1800BC360 (sub_1800BC360.c)
 *     sub_1800CAF38 @ 0x1800CAF38 (sub_1800CAF38.c)
 *     sub_1800D1048 @ 0x1800D1048 (sub_1800D1048.c)
 *     sub_1800D15F0 @ 0x1800D15F0 (sub_1800D15F0.c)
 *     sub_1800D1FB4 @ 0x1800D1FB4 (sub_1800D1FB4.c)
 *     sub_1800D3C88 @ 0x1800D3C88 (sub_1800D3C88.c)
 *     sub_1800D47A8 @ 0x1800D47A8 (sub_1800D47A8.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 *     sub_1800D9F18 @ 0x1800D9F18 (sub_1800D9F18.c)
 *     sub_1800D9FF8 @ 0x1800D9FF8 (sub_1800D9FF8.c)
 *     sub_1800DA1CC @ 0x1800DA1CC (sub_1800DA1CC.c)
 *     sub_1800F38D8 @ 0x1800F38D8 (sub_1800F38D8.c)
 *     sub_1800F3A9C @ 0x1800F3A9C (sub_1800F3A9C.c)
 *     sub_1800F3B04 @ 0x1800F3B04 (sub_1800F3B04.c)
 *     sub_18010A354 @ 0x18010A354 (sub_18010A354.c)
 *     sub_18010D5DC @ 0x18010D5DC (sub_18010D5DC.c)
 *     sub_18010DC00 @ 0x18010DC00 (sub_18010DC00.c)
 *     sub_180111BD8 @ 0x180111BD8 (sub_180111BD8.c)
 *     sub_180111C18 @ 0x180111C18 (sub_180111C18.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800675A8(__int64 *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[3];
  if ( v4 >= 0x10 )
  {
    v5 = *a1;
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x18006761FLL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
