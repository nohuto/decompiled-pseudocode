/*
 * XREFs of sub_180002FC0 @ 0x180002FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002320 @ 0x180002320 (sub_180002320.c)
 *     sub_18000258C @ 0x18000258C (sub_18000258C.c)
 *     sub_1800029C0 @ 0x1800029C0 (sub_1800029C0.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18003ADA0 (_alloca_probe.c)
 */

__int64 __fastcall sub_180002FC0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  _BYTE v5[1024]; // [rsp+20h] [rbp-1418h] BYREF
  char v6[4096]; // [rsp+420h] [rbp-1018h] BYREF

  v1 = (__int64 *)(a1 + 184);
  v2 = *(_QWORD *)(a1 + 184);
  if ( !v2 )
  {
    sub_180002320(v6, 2048LL, a1 + 24);
    sub_1800029C0(v5, 1024LL, (int)"%ws", v6);
    v3 = -1LL;
    do
      ++v3;
    while ( v5[v3] );
    sub_18000258C((__int64)v1, v5, v3 + 1);
    v2 = *v1;
  }
  return (v2 + 4) & -(__int64)(v2 != 0);
}
