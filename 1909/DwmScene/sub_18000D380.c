/*
 * XREFs of sub_18000D380 @ 0x18000D380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B10C @ 0x18000B10C (sub_18000B10C.c)
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_18000D1BC @ 0x18000D1BC (sub_18000D1BC.c)
 *     _alloca_probe @ 0x180126130 (_alloca_probe.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000D380(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  _BYTE v5[1024]; // [rsp+20h] [rbp-1418h] BYREF
  _WORD v6[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v1 = (__int64 *)(a1 + 184);
  v2 = *(_QWORD *)(a1 + 184);
  if ( !v2 )
  {
    sub_18000B10C(v6, 2048LL, a1 + 24);
    sub_18000CBF0(v5, 1024LL, (int)&unk_1801441D0, v6);
    v3 = -1LL;
    do
      ++v3;
    while ( v5[v3] );
    sub_18000D1BC((__int64)v1, (__int64)v5, v3 + 1);
    v2 = *v1;
  }
  return (v2 + 4) & -(__int64)(v2 != 0);
}
