/*
 * XREFs of sub_180011714 @ 0x180011714
 * Callers:
 *     sub_180011A20 @ 0x180011A20 (sub_180011A20.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_180075500 @ 0x180075500 (sub_180075500.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_180085AD8 @ 0x180085AD8 (sub_180085AD8.c)
 *     sub_1800A34AC @ 0x1800A34AC (sub_1800A34AC.c)
 *     sub_1800A35D4 @ 0x1800A35D4 (sub_1800A35D4.c)
 *     sub_1800ADBF0 @ 0x1800ADBF0 (sub_1800ADBF0.c)
 *     sub_1800B0DD4 @ 0x1800B0DD4 (sub_1800B0DD4.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800D1048 @ 0x1800D1048 (sub_1800D1048.c)
 *     sub_1800D88A0 @ 0x1800D88A0 (sub_1800D88A0.c)
 *     sub_1800D8B48 @ 0x1800D8B48 (sub_1800D8B48.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 *     sub_1800D9C44 @ 0x1800D9C44 (sub_1800D9C44.c)
 *     sub_1800EBED8 @ 0x1800EBED8 (sub_1800EBED8.c)
 *     sub_1800F0C90 @ 0x1800F0C90 (sub_1800F0C90.c)
 *     sub_1800F3410 @ 0x1800F3410 (sub_1800F3410.c)
 *     sub_1800F899C @ 0x1800F899C (sub_1800F899C.c)
 *     sub_1801000A0 @ 0x1801000A0 (sub_1801000A0.c)
 *     sub_180101698 @ 0x180101698 (sub_180101698.c)
 *     sub_18010AD88 @ 0x18010AD88 (sub_18010AD88.c)
 *     sub_180113630 @ 0x180113630 (sub_180113630.c)
 *     sub_18011BA50 @ 0x18011BA50 (sub_18011BA50.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

__int64 *__fastcall sub_180011714(__int64 *a1, __int64 *Src)
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
      sub_18000E118(a1, Src[2], 0LL, v3);
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
