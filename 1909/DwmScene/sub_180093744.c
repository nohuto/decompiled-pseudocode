/*
 * XREFs of sub_180093744 @ 0x180093744
 * Callers:
 *     sub_1800EF4E0 @ 0x1800EF4E0 (sub_1800EF4E0.c)
 *     sub_1800F0270 @ 0x1800F0270 (sub_1800F0270.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180091460 @ 0x180091460 (sub_180091460.c)
 *     sub_180091608 @ 0x180091608 (sub_180091608.c)
 *     sub_1800A3BB0 @ 0x1800A3BB0 (sub_1800A3BB0.c)
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 *     sub_1800F1F44 @ 0x1800F1F44 (sub_1800F1F44.c)
 *     sub_1800F239C @ 0x1800F239C (sub_1800F239C.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 *     sub_1800F38B8 @ 0x1800F38B8 (sub_1800F38B8.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall sub_180093744(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v9; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v12; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+78h] [rbp-90h] BYREF
  __int128 v15; // [rsp+88h] [rbp-80h] BYREF
  __int128 v16; // [rsp+98h] [rbp-70h] BYREF
  __int128 v17; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v18; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v19; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v20; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v21[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v22[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v23[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v24[4]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v25[4]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v26[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v27[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v28[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v29[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v30[4]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v31[4]; // [rsp+228h] [rbp+120h] BYREF
  __int64 v32[4]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v33[4]; // [rsp+268h] [rbp+160h] BYREF
  __int64 v34[4]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v35[6]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _OWORD v36[4]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _OWORD v37[4]; // [rsp+318h] [rbp+210h] BYREF
  __int128 v38; // [rsp+358h] [rbp+250h] BYREF
  __int128 v39; // [rsp+368h] [rbp+260h] BYREF
  _BYTE v40[64]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v41[64]; // [rsp+3B8h] [rbp+2B0h] BYREF
  _BYTE v42[64]; // [rsp+3F8h] [rbp+2F0h] BYREF
  _BYTE v43[64]; // [rsp+438h] [rbp+330h] BYREF
  _BYTE v44[64]; // [rsp+478h] [rbp+370h] BYREF
  _BYTE v45[64]; // [rsp+4B8h] [rbp+3B0h] BYREF
  _BYTE v46[64]; // [rsp+4F8h] [rbp+3F0h] BYREF
  _BYTE v47[64]; // [rsp+538h] [rbp+430h] BYREF
  _BYTE v48[64]; // [rsp+578h] [rbp+470h] BYREF
  _BYTE v49[64]; // [rsp+5B8h] [rbp+4B0h] BYREF
  _BYTE v50[64]; // [rsp+5F8h] [rbp+4F0h] BYREF
  _BYTE v51[64]; // [rsp+638h] [rbp+530h] BYREF
  _BYTE v52[64]; // [rsp+678h] [rbp+570h] BYREF
  _BYTE v53[64]; // [rsp+6B8h] [rbp+5B0h] BYREF
  _BYTE v54[64]; // [rsp+6F8h] [rbp+5F0h] BYREF

  v35[4] = -2LL;
  v35[5] = (__int64)a2;
  v39 = 0uLL;
  sub_1800A3BB0(a1, &v39, 0LL);
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_18000F444(v22, (__int64)&qword_18025C838);
  sub_180091460((__int64)v40, v22, 7);
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_18000F444(v21, (__int64)&qword_18025C858);
  sub_180091460((__int64)v41, v21, 7);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18000F444(v24, (__int64)&qword_18025C878);
  sub_180091460((__int64)v42, v24, 2);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_18000F444(v23, (__int64)&qword_18025C898);
  sub_180091460((__int64)v43, v23, 2);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_18000F444(v25, (__int64)&qword_18025C8B8);
  sub_180091460((__int64)v44, v25, 2);
  sub_1800F239C(v39, v40, 5LL, 0LL);
  v4 = sub_1800F2D88(v39, &qword_18025C838);
  v36[0] = xmmword_18025EFE0;
  v36[1] = xmmword_18025EFF0;
  v36[2] = xmmword_18025F000;
  v36[3] = xmmword_18025F010;
  sub_1800F38B8(v39, v4, v36);
  v5 = sub_1800F2D88(v39, &qword_18025C858);
  v37[0] = xmmword_18025EFE0;
  v37[1] = xmmword_18025EFF0;
  v37[2] = xmmword_18025F000;
  v37[3] = xmmword_18025F010;
  sub_1800F38B8(v39, v5, v37);
  sub_1800F2BD4(v39);
  v10 = 0LL;
  if ( *((_QWORD *)&v39 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
  v10 = v39;
  sub_1800A9BE4(*a2, &v10);
  `eh vector destructor iterator'(v40, 0x40uLL, 5uLL, (void (*)(void *))sub_180091A40);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v38 = 0uLL;
  sub_1800A3BB0(a1, &v38, 9LL);
  sub_1800F1F44(v38, &qword_18025CA58, 7LL, 3LL);
  v26[2] = 0LL;
  v26[3] = 0LL;
  sub_18000F444(v26, (__int64)&qword_18025C8D8);
  v11 = 0uLL;
  sub_180091608((__int64)v45, v26, 5LL, &v11);
  v27[2] = 0LL;
  v27[3] = 0LL;
  sub_18000F444(v27, (__int64)&qword_18025C8F8);
  v12 = 0uLL;
  sub_180091608((__int64)v46, v27, 5LL, &v12);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_18000F444(v28, (__int64)&qword_18025C918);
  v13 = 0uLL;
  sub_180091608((__int64)v47, v28, 5LL, &v13);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_18000F444(v29, (__int64)&qword_18025C938);
  v14 = 0uLL;
  sub_180091608((__int64)v48, v29, 5LL, &v14);
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_18000F444(v30, (__int64)&qword_18025C958);
  v15 = 0uLL;
  sub_180091608((__int64)v49, v30, 5LL, &v15);
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18000F444(v31, (__int64)&qword_18025C978);
  v16 = 0uLL;
  sub_180091608((__int64)v50, v31, 5LL, &v16);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18000F444(v32, (__int64)&qword_18025C998);
  v17 = 0uLL;
  sub_180091608((__int64)v51, v32, 5LL, &v17);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18000F444(v33, (__int64)&qword_18025C9B8);
  v18 = 0uLL;
  sub_180091608((__int64)v52, v33, 5LL, &v18);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18000F444(v34, (__int64)&qword_18025C9D8);
  v19 = 0uLL;
  sub_180091608((__int64)v53, v34, 5LL, &v19);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18000F444(v35, (__int64)&qword_18025C9F8);
  v20 = 0uLL;
  sub_180091608((__int64)v54, v35, 5LL, &v20);
  sub_1800F239C(v38, v45, 10LL, 0LL);
  sub_1800F1F44(v38, &qword_18025CA78, 5LL, 3LL);
  sub_1800F1F44(v38, &qword_18025CA98, 5LL, 3LL);
  sub_1800F1F44(v38, &qword_18025CAB8, 5LL, 3LL);
  sub_1800F1F44(v38, &qword_18025CA18, 5LL, 3LL);
  sub_1800F1F44(v38, &qword_18025CA38, 5LL, 3LL);
  sub_1800F2BD4(v38);
  v9 = 0LL;
  if ( *((_QWORD *)&v38 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL));
  v9 = v38;
  sub_1800A9BE4(*a2, &v9);
  `eh vector destructor iterator'(v45, 0x40uLL, 0xAuLL, (void (*)(void *))sub_180091A40);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v38 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 && !_InterlockedDecrement(v8 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    if ( !_InterlockedDecrement(v8 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  }
}
