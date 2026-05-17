/*
 * XREFs of sub_18004E9E0 @ 0x18004E9E0
 * Callers:
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 *     sub_18004E2D4 @ 0x18004E2D4 (sub_18004E2D4.c)
 * Callees:
 *     sub_180047BA0 @ 0x180047BA0 (sub_180047BA0.c)
 */

__int64 __fastcall sub_18004E9E0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r10
  int v4; // r9d
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 46);
  v8 = 0LL;
  v4 = ((v3 & 6u) < 4 ? 0x2000 : 536883200) | 0x40000;
  if ( (v3 & 8) == 0 )
    v4 = (v3 & 6u) < 4 ? 0x2000 : 536883200;
  sub_180047BA0((__int64)&v8, a2, a3, v4, 4, v6, v7, *(_QWORD *)(a1 + 32));
  return v8;
}
