/*
 * XREFs of sub_1800D0A40 @ 0x1800D0A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064300 @ 0x180064300 (sub_180064300.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     sub_18009EBA0 @ 0x18009EBA0 (sub_18009EBA0.c)
 *     sub_18009F950 @ 0x18009F950 (sub_18009F950.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D0A40(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-28h] BYREF

  sub_18009EBA0(*(_QWORD *)(a1 + 112), a2);
  v4 = (__int64 *)(a1 + 192);
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_18009EBA0(v6, a2);
    if ( *v4 )
      sub_18009F950(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_1800657B8((__int64 *)(a1 + 256), (unsigned int *)&v8);
  return sub_180064300(a1, a2);
}
