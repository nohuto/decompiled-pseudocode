/*
 * XREFs of sub_1800B2074 @ 0x1800B2074
 * Callers:
 *     sub_1800B1B9C @ 0x1800B1B9C (sub_1800B1B9C.c)
 * Callees:
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_OWORD *__fastcall sub_1800B2074(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _BYTE v14[64]; // [rsp+20h] [rbp-79h] BYREF
  __int128 v15; // [rsp+60h] [rbp-39h] BYREF
  __int128 v16; // [rsp+70h] [rbp-29h]
  __int128 v17; // [rsp+80h] [rbp-19h]
  __int128 v18; // [rsp+90h] [rbp-9h]
  _OWORD v19[4]; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *(_OWORD *)(a1 + 628);
  v15 = *(_OWORD *)(a1 + 612);
  v3 = *(_OWORD *)(a1 + 644);
  v16 = v2;
  v4 = *(_OWORD *)(a1 + 660);
  v17 = v3;
  v5 = *(_OWORD *)(a1 + 932);
  v18 = v4;
  v6 = *(_OWORD *)(a1 + 948);
  v19[0] = v5;
  v7 = *(_OWORD *)(a1 + 964);
  v19[1] = v6;
  v8 = *(_OWORD *)(a1 + 980);
  v19[2] = v7;
  v19[3] = v8;
  v9 = (__int128 *)sub_180017DE8((__int64)v14, &v15, v19);
  v10 = v9[1];
  v15 = *v9;
  v11 = v9[2];
  v16 = v10;
  v12 = v9[3];
  v17 = v11;
  v18 = v12;
  return sub_180081CAC((_OWORD *)(a1 + 676), &v15);
}
