/*
 * XREFs of sub_1800D0930 @ 0x1800D0930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800641F0 @ 0x1800641F0 (sub_1800641F0.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     sub_18009EA90 @ 0x18009EA90 (sub_18009EA90.c)
 *     sub_18009F840 @ 0x18009F840 (sub_18009F840.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D0930(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-28h] BYREF

  sub_18009EA90(*(_QWORD *)(a1 + 112), a2);
  v4 = (__int64 *)(a1 + 192);
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_18009EA90(v6, a2);
    if ( *v4 )
      sub_18009F840(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_1800656A8((__int64 *)(a1 + 256), (unsigned int *)&v8);
  return sub_1800641F0(a1, a2);
}
