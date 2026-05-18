/*
 * XREFs of sub_1800865F0 @ 0x1800865F0
 * Callers:
 *     sub_180010400 @ 0x180010400 (sub_180010400.c)
 *     sub_180014040 @ 0x180014040 (sub_180014040.c)
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     GsDriverEntry @ 0x180085BBC (GsDriverEntry.c)
 * Callees:
 *     sub_180081DBC @ 0x180081DBC (sub_180081DBC.c)
 *     sub_180084B24 @ 0x180084B24 (sub_180084B24.c)
 *     sub_1800864BC @ 0x1800864BC (sub_1800864BC.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char __fastcall sub_1800865F0(__int64 a1, _OWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  sub_180087524(a1);
  v9 = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0;
  v11 = xmmword_1801E48A0;
  if ( !sub_180084B24((__int64)a2, &v7, &v11, &v9) )
    return 0;
  v5 = v7;
  v6 = v8;
  v8 = v10;
  v7 = v9;
  sub_1800864BC(a1, (__int64)&v7, &v11, (__int64)&v5);
  sub_180081DBC((_OWORD *)(a1 + 224), a2);
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  return 1;
}
