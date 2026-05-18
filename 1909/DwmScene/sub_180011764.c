/*
 * XREFs of sub_180011764 @ 0x180011764
 * Callers:
 *     sub_180011A70 @ 0x180011A70 (sub_180011A70.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_180075610 @ 0x180075610 (sub_180075610.c)
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_180085BE8 @ 0x180085BE8 (sub_180085BE8.c)
 *     sub_1800A35BC @ 0x1800A35BC (sub_1800A35BC.c)
 *     sub_1800A36E4 @ 0x1800A36E4 (sub_1800A36E4.c)
 *     sub_1800ADD00 @ 0x1800ADD00 (sub_1800ADD00.c)
 *     sub_1800B0EE4 @ 0x1800B0EE4 (sub_1800B0EE4.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800D1158 @ 0x1800D1158 (sub_1800D1158.c)
 *     sub_1800D89B0 @ 0x1800D89B0 (sub_1800D89B0.c)
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_1800D9D54 @ 0x1800D9D54 (sub_1800D9D54.c)
 *     sub_1800EBFE8 @ 0x1800EBFE8 (sub_1800EBFE8.c)
 *     sub_1800F0DA0 @ 0x1800F0DA0 (sub_1800F0DA0.c)
 *     sub_1800F3520 @ 0x1800F3520 (sub_1800F3520.c)
 *     sub_1800F8AAC @ 0x1800F8AAC (sub_1800F8AAC.c)
 *     sub_1801001B0 @ 0x1801001B0 (sub_1801001B0.c)
 *     sub_1801017A8 @ 0x1801017A8 (sub_1801017A8.c)
 *     sub_18010AE98 @ 0x18010AE98 (sub_18010AE98.c)
 *     sub_180113740 @ 0x180113740 (sub_180113740.c)
 *     sub_18011BB60 @ 0x18011BB60 (sub_18011BB60.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 *__fastcall sub_180011764(__int64 *a1, __int64 *Src)
{
  _QWORD *v3; // r9
  size_t v4; // rdi
  void *v5; // rsi

  if ( a1 != Src )
  {
    v3 = Src;
    if ( (unsigned __int64)Src[3] >= 0x10 )
      v3 = (_QWORD *)*Src;
    v4 = Src[2];
    if ( v4 > a1[3] )
    {
      sub_18000E168(a1, Src[2], 0LL, v3);
    }
    else
    {
      v5 = a1;
      if ( (unsigned __int64)a1[3] >= 0x10 )
        v5 = (void *)*a1;
      a1[2] = v4;
      memmove(v5, v3, v4);
      *((_BYTE *)v5 + v4) = 0;
    }
  }
  return a1;
}
