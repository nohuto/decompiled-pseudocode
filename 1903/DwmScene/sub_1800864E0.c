/*
 * XREFs of sub_1800864E0 @ 0x1800864E0
 * Callers:
 *     sub_1800103B0 @ 0x1800103B0 (sub_1800103B0.c)
 *     sub_180013FD0 @ 0x180013FD0 (sub_180013FD0.c)
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     GsDriverEntry @ 0x180085AAC (GsDriverEntry.c)
 * Callees:
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     sub_180084A14 @ 0x180084A14 (sub_180084A14.c)
 *     sub_1800863AC @ 0x1800863AC (sub_1800863AC.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

char __fastcall sub_1800864E0(__int64 a1, _OWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  sub_180087414(a1);
  v9 = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0;
  v11 = xmmword_1801E38A0;
  if ( !sub_180084A14((__int64)a2, &v7, &v11, &v9) )
    return 0;
  v5 = v7;
  v6 = v8;
  v8 = v10;
  v7 = v9;
  sub_1800863AC(a1, (__int64)&v7, &v11, (__int64)&v5);
  sub_180081CAC((_OWORD *)(a1 + 224), a2);
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  return 1;
}
