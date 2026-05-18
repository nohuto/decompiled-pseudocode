/*
 * XREFs of sub_1800655E0 @ 0x1800655E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064300 @ 0x180064300 (sub_180064300.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     sub_18009EBA0 @ 0x18009EBA0 (sub_18009EBA0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800655E0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  sub_1800657B8(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_18009EBA0(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_18009EBA0(v5, a2);
  return sub_180064300(a1, a2);
}
