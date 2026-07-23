/*
 * XREFs of sub_180046C60 @ 0x180046C60
 * Callers:
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180046D10 @ 0x180046D10 (sub_180046D10.c)
 * Callees:
 *     sub_1800449D0 @ 0x1800449D0 (sub_1800449D0.c)
 *     sub_180044E1C @ 0x180044E1C (sub_180044E1C.c)
 *     sub_1800515E8 @ 0x1800515E8 (sub_1800515E8.c)
 *     sub_180083D40 @ 0x180083D40 (sub_180083D40.c)
 */

unsigned __int64 __fastcall sub_180046C60(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v13; // rax

  if ( (_WORD)a2 )
  {
    v8 = 0;
  }
  else
  {
    v13 = sub_1800515E8(&qword_180166A60, 2 * ((a2 - qword_180166A58) >> 20));
    if ( !v13 )
      return sub_180083D40(a1, a2, a3, a4);
    v8 = v13 - 1;
  }
  if ( v8 == 2 )
    return sub_180083D40(a1, a2, a3, a4);
  v9 = 192LL * v8 + a1;
  v10 = sub_180044E1C(v9 + 256, a2);
  if ( v10 )
    return sub_1800449D0(v9 + 256, v10, a2, v11, a4);
  else
    return -1LL;
}
