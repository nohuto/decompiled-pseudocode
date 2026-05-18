/*
 * XREFs of sub_180093EDC @ 0x180093EDC
 * Callers:
 *     sub_1800EF3D0 @ 0x1800EF3D0 (sub_1800EF3D0.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180091350 @ 0x180091350 (sub_180091350.c)
 *     sub_180091930 @ 0x180091930 (sub_180091930.c)
 *     sub_1800A3AA0 @ 0x1800A3AA0 (sub_1800A3AA0.c)
 *     sub_1800A9AD4 @ 0x1800A9AD4 (sub_1800A9AD4.c)
 *     sub_1800F228C @ 0x1800F228C (sub_1800F228C.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 *     sub_1800F2C78 @ 0x1800F2C78 (sub_1800F2C78.c)
 *     sub_1800F3814 @ 0x1800F3814 (sub_1800F3814.c)
 *     sub_1800F3844 @ 0x1800F3844 (sub_1800F3844.c)
 *     sub_1800F38B0 @ 0x1800F38B0 (sub_1800F38B0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall sub_180093EDC(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // si
  unsigned __int16 v11; // di
  unsigned __int16 v12; // bx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int128 v15; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v20[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v21[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v22[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v23[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v24[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v25[4]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v26[4]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v27[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v28[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v29[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v30[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v31[4]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v32[4]; // [rsp+228h] [rbp+120h] BYREF
  __int64 v33[4]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v34[4]; // [rsp+268h] [rbp+160h] BYREF
  __int64 v35[4]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v36[4]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v37[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v38[4]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v39[4]; // [rsp+308h] [rbp+200h] BYREF
  __int64 v40[6]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v41[8]; // [rsp+358h] [rbp+250h] BYREF
  __int64 v42[8]; // [rsp+398h] [rbp+290h] BYREF
  __int64 v43[8]; // [rsp+3D8h] [rbp+2D0h] BYREF
  __int64 v44[8]; // [rsp+418h] [rbp+310h] BYREF
  __int64 v45[8]; // [rsp+458h] [rbp+350h] BYREF
  __int64 v46[8]; // [rsp+498h] [rbp+390h] BYREF
  __int64 v47[8]; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int64 v48[8]; // [rsp+518h] [rbp+410h] BYREF
  __int64 v49[8]; // [rsp+558h] [rbp+450h] BYREF
  __int64 v50[8]; // [rsp+598h] [rbp+490h] BYREF
  __int64 v51[8]; // [rsp+5D8h] [rbp+4D0h] BYREF
  __int64 v52[8]; // [rsp+618h] [rbp+510h] BYREF
  __int128 v53; // [rsp+658h] [rbp+550h] BYREF
  _BYTE v54[64]; // [rsp+668h] [rbp+560h] BYREF
  _BYTE v55[64]; // [rsp+6A8h] [rbp+5A0h] BYREF
  _BYTE v56[64]; // [rsp+6E8h] [rbp+5E0h] BYREF
  _BYTE v57[64]; // [rsp+728h] [rbp+620h] BYREF
  _BYTE v58[64]; // [rsp+768h] [rbp+660h] BYREF
  _BYTE v59[64]; // [rsp+7A8h] [rbp+6A0h] BYREF
  _BYTE v60[64]; // [rsp+7E8h] [rbp+6E0h] BYREF
  _BYTE v61[64]; // [rsp+828h] [rbp+720h] BYREF
  _BYTE v62[64]; // [rsp+868h] [rbp+760h] BYREF
  _BYTE v63[64]; // [rsp+8A8h] [rbp+7A0h] BYREF
  _BYTE v64[64]; // [rsp+8E8h] [rbp+7E0h] BYREF
  _BYTE v65[64]; // [rsp+928h] [rbp+820h] BYREF

  v40[5] = -2LL;
  v40[4] = (__int64)a2;
  v53 = 0uLL;
  sub_1800A3AA0(a1, &v53, 7LL);
  v17[2] = 0LL;
  v17[3] = 0LL;
  sub_18000F3F4(v17, (__int64)&qword_18025C278);
  sub_180091350((__int64)v54, v17, 7);
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_18000F3F4(v21, (__int64)&qword_18025C298);
  sub_180091350((__int64)v55, v21, 7);
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_18000F3F4(v22, (__int64)&qword_18025C2B8);
  sub_180091350((__int64)v56, v22, 5);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_18000F3F4(v23, (__int64)&qword_18025C2D8);
  sub_180091350((__int64)v57, v23, 5);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18000F3F4(v24, (__int64)&qword_18025C2F8);
  sub_180091350((__int64)v58, v24, 5);
  v20[2] = 0LL;
  v20[3] = 0LL;
  sub_18000F3F4(v20, (__int64)&qword_18025C318);
  sub_180091350((__int64)v59, v20, 5);
  v26[2] = 0LL;
  v26[3] = 0LL;
  sub_18000F3F4(v26, (__int64)&qword_18025C338);
  sub_180091350((__int64)v60, v26, 5);
  v27[2] = 0LL;
  v27[3] = 0LL;
  sub_18000F3F4(v27, (__int64)&qword_18025C358);
  sub_180091350((__int64)v61, v27, 7);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_18000F3F4(v28, (__int64)&qword_18025C378);
  sub_180091350((__int64)v62, v28, 7);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_18000F3F4(v29, (__int64)&qword_18025C398);
  sub_180091350((__int64)v63, v29, 5);
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_18000F3F4(v30, (__int64)&qword_18025C3B8);
  sub_180091350((__int64)v64, v30, 6);
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18000F3F4(v31, (__int64)&qword_18025C418);
  sub_180091350((__int64)v65, v31, 6);
  sub_1800F228C(v53, v54, 12LL, 0LL);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18000F3F4(v32, (__int64)&qword_18025C478);
  sub_180091350((__int64)v41, v32, 5);
  sub_1800F2344(v53, v41, 1LL);
  sub_180091930(v41);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18000F3F4(v33, (__int64)&qword_18025C458);
  sub_180091350((__int64)v42, v33, 2);
  sub_1800F2344(v53, v42, 1LL);
  sub_180091930(v42);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18000F3F4(v34, (__int64)&qword_18025C438);
  sub_180091350((__int64)v43, v34, 2);
  sub_1800F2344(v53, v43, 0LL);
  sub_180091930(v43);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18000F3F4(v35, (__int64)&qword_18025C498);
  sub_180091350((__int64)v44, v35, 2);
  sub_1800F2344(v53, v44, 0LL);
  sub_180091930(v44);
  v36[2] = 0LL;
  v36[3] = 0LL;
  sub_18000F3F4(v36, (__int64)&qword_18025C4B8);
  sub_180091350((__int64)v45, v36, 2);
  sub_1800F2344(v53, v45, 0LL);
  sub_180091930(v45);
  v37[2] = 0LL;
  v37[3] = 0LL;
  sub_18000F3F4(v37, (__int64)&qword_18025C4D8);
  sub_180091350((__int64)v46, v37, 6);
  sub_1800F2344(v53, v46, 0LL);
  sub_180091930(v46);
  v38[2] = 0LL;
  v38[3] = 0LL;
  sub_18000F3F4(v38, (__int64)&qword_18025C3D8);
  sub_180091350((__int64)v47, v38, 2);
  sub_1800F2344(v53, v47, 0LL);
  sub_180091930(v47);
  v39[2] = 0LL;
  v39[3] = 0LL;
  sub_18000F3F4(v39, (__int64)&qword_18025C3F8);
  sub_180091350((__int64)v48, v39, 2);
  sub_1800F2344(v53, v48, 0LL);
  sub_180091930(v48);
  sub_1800F2C78(v53, &qword_18025C438);
  sub_1800F3844(v53, v3);
  sub_1800F2C78(v53, &qword_18025C458);
  sub_1800F3844(v53, v4);
  sub_1800F2C78(v53, &qword_18025C478);
  v16[0] = 0LL;
  v16[1] = _mm_srli_si128((__m128i)xmmword_1801ECF70, 8).m128i_u64[0];
  sub_1800F3814(v53, v5, v16);
  sub_1800F2C78(v53, &qword_18025C498);
  sub_1800F3844(v53, v6);
  sub_1800F2C78(v53, &qword_18025C4B8);
  sub_1800F3844(v53, v7);
  sub_1800F2C78(v53, &qword_18025C3F8);
  sub_1800F3844(v53, v8);
  v40[2] = 0LL;
  v40[3] = 0LL;
  sub_18000F3F4(v40, (__int64)&qword_18025C518);
  sub_180091350((__int64)v49, v40, 8);
  v9 = sub_1800F2344(v53, v49, 0LL);
  sub_180091930(v49);
  v18[2] = 0LL;
  v18[3] = 0LL;
  sub_18000F3F4(v18, (__int64)&qword_18025C538);
  sub_180091350((__int64)v50, v18, 8);
  v10 = sub_1800F2344(v53, v50, 0LL);
  sub_180091930(v50);
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_18000F3F4(v19, (__int64)&qword_18025C558);
  sub_180091350((__int64)v51, v19, 8);
  v11 = sub_1800F2344(v53, v51, 0LL);
  sub_180091930(v51);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_18000F3F4(v25, (__int64)&qword_18025C4F8);
  sub_180091350((__int64)v52, v25, 8);
  v12 = sub_1800F2344(v53, v52, 0LL);
  sub_180091930(v52);
  sub_1800F38B0(v53, v9, 0LL);
  sub_1800F38B0(v53, v10, 2LL);
  sub_1800F38B0(v53, v11, 13LL);
  sub_1800F38B0(v53, v12, 12LL);
  sub_1800F2AC4(v53);
  v15 = 0LL;
  if ( *((_QWORD *)&v53 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL));
  v15 = v53;
  sub_1800A9AD4(*a2, &v15);
  `eh vector destructor iterator'(v54, 0x40uLL, 0xCuLL, (void (*)(void *))sub_180091930);
  v13 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( !_InterlockedDecrement(v13 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 && !_InterlockedDecrement(v14 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
    if ( !_InterlockedDecrement(v14 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
}
