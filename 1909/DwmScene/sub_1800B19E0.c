/*
 * XREFs of sub_1800B19E0 @ 0x1800B19E0
 * Callers:
 *     sub_1800AE9B4 @ 0x1800AE9B4 (sub_1800AE9B4.c)
 *     sub_1800AEA44 @ 0x1800AEA44 (sub_1800AEA44.c)
 *     sub_1800AEB04 @ 0x1800AEB04 (sub_1800AEB04.c)
 *     sub_1800B1CAC @ 0x1800B1CAC (sub_1800B1CAC.c)
 * Callees:
 *     sub_180017E58 @ 0x180017E58 (sub_180017E58.c)
 *     sub_180081DBC @ 0x180081DBC (sub_180081DBC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_OWORD *__fastcall sub_1800B19E0(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 *v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 *v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v42; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v43; // [rsp+30h] [rbp-D0h]
  __int128 v44; // [rsp+40h] [rbp-C0h]
  __int128 v45; // [rsp+50h] [rbp-B0h]
  __int128 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+70h] [rbp-90h]
  __int128 v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+90h] [rbp-70h]
  _OWORD v50[4]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v51[4]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v52[4]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v53[4]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v54[4]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = *(_OWORD *)(a1 + 692);
  v46 = *(_OWORD *)(a1 + 676);
  v3 = *(_OWORD *)(a1 + 708);
  v47 = v2;
  v4 = *(_OWORD *)(a1 + 724);
  v48 = v3;
  v5 = *(_OWORD *)(a1 + 1252);
  v49 = v4;
  v6 = *(_OWORD *)(a1 + 1268);
  v50[0] = v5;
  v7 = *(_OWORD *)(a1 + 1284);
  v50[1] = v6;
  v8 = *(_OWORD *)(a1 + 1300);
  v50[2] = v7;
  v9 = *(_OWORD *)(a1 + 804);
  v50[3] = v8;
  v10 = *(_OWORD *)(a1 + 820);
  v52[0] = v9;
  v11 = *(_OWORD *)(a1 + 836);
  v52[1] = v10;
  v12 = *(_OWORD *)(a1 + 852);
  v52[2] = v11;
  v13 = *(_OWORD *)(a1 + 932);
  v52[3] = v12;
  v14 = *(_OWORD *)(a1 + 948);
  v42 = v13;
  v15 = *(_OWORD *)(a1 + 964);
  v43 = v14;
  v16 = *(_OWORD *)(a1 + 980);
  v44 = v15;
  v17 = *(_OWORD *)(a1 + 1124);
  v45 = v16;
  v18 = *(_OWORD *)(a1 + 1140);
  v51[0] = v17;
  v19 = *(_OWORD *)(a1 + 1156);
  v51[1] = v18;
  v20 = *(_OWORD *)(a1 + 1172);
  v51[2] = v19;
  v21 = *(_OWORD *)(a1 + 1444);
  v51[3] = v20;
  v22 = *(_OWORD *)(a1 + 1460);
  v54[0] = v21;
  v23 = *(_OWORD *)(a1 + 1476);
  v54[1] = v22;
  v24 = *(_OWORD *)(a1 + 1492);
  v54[2] = v23;
  v54[3] = v24;
  sub_180017E58((__int64)v53, v54, v51);
  v25 = (__int128 *)sub_180017E58((__int64)v54, &v46, v50);
  v26 = v25[1];
  v46 = *v25;
  v27 = v25[2];
  v47 = v26;
  v28 = v25[3];
  v48 = v27;
  v49 = v28;
  sub_180081DBC((_OWORD *)(a1 + 740), &v46);
  v29 = (__int128 *)sub_180017E58((__int64)&v46, &v42, v50);
  v30 = v29[1];
  v42 = *v29;
  v31 = v29[2];
  v43 = v30;
  v32 = v29[3];
  v44 = v31;
  v45 = v32;
  sub_180081DBC((_OWORD *)(a1 + 996), &v42);
  v33 = (__int128 *)sub_180017E58((__int64)&v46, v51, v52);
  v34 = v33[1];
  v42 = *v33;
  v35 = v33[2];
  v43 = v34;
  v36 = v33[3];
  v44 = v35;
  v45 = v36;
  sub_180081DBC((_OWORD *)(a1 + 1060), &v42);
  v42 = v53[0];
  v43 = v53[1];
  v44 = v53[2];
  v45 = v53[3];
  sub_180081DBC((_OWORD *)(a1 + 1380), &v42);
  v37 = (__int128 *)sub_180017E58((__int64)&v46, v53, v52);
  v38 = v37[1];
  v42 = *v37;
  v39 = v37[2];
  v43 = v38;
  v40 = v37[3];
  v44 = v39;
  v45 = v40;
  return sub_180081DBC((_OWORD *)(a1 + 1316), &v42);
}
