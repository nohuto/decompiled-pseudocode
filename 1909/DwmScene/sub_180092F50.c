/*
 * XREFs of sub_180092F50 @ 0x180092F50
 * Callers:
 *     sub_1800EF4E0 @ 0x1800EF4E0 (sub_1800EF4E0.c)
 *     sub_1800F0270 @ 0x1800F0270 (sub_1800F0270.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180011540 @ 0x180011540 (sub_180011540.c)
 *     sub_180091460 @ 0x180091460 (sub_180091460.c)
 *     sub_180091510 @ 0x180091510 (sub_180091510.c)
 *     sub_180091608 @ 0x180091608 (sub_180091608.c)
 *     sub_180091700 @ 0x180091700 (sub_180091700.c)
 *     sub_18009185C @ 0x18009185C (sub_18009185C.c)
 *     sub_180091950 @ 0x180091950 (sub_180091950.c)
 *     sub_1800A3BB0 @ 0x1800A3BB0 (sub_1800A3BB0.c)
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 *     sub_1800F239C @ 0x1800F239C (sub_1800F239C.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=32
void __fastcall sub_180092F50(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int128 v12; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v18[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v19[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v20[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v21[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v22[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v23[4]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v24[4]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v25[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v26[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v27[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v28[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v29[4]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v30[4]; // [rsp+228h] [rbp+120h] BYREF
  __int64 v31[4]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v32[4]; // [rsp+268h] [rbp+160h] BYREF
  __int64 v33[4]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v34[4]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v35[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v36[4]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v37[4]; // [rsp+308h] [rbp+200h] BYREF
  __int64 v38[4]; // [rsp+328h] [rbp+220h] BYREF
  __int128 v39; // [rsp+348h] [rbp+240h] BYREF
  __int64 v40; // [rsp+358h] [rbp+250h]
  _QWORD *v41; // [rsp+360h] [rbp+258h]
  __int128 v42; // [rsp+368h] [rbp+260h] BYREF
  _QWORD Src[4]; // [rsp+378h] [rbp+270h] BYREF
  _QWORD v44[4]; // [rsp+398h] [rbp+290h] BYREF
  _QWORD v45[4]; // [rsp+3B8h] [rbp+2B0h] BYREF
  _QWORD v46[4]; // [rsp+3D8h] [rbp+2D0h] BYREF
  _QWORD v47[4]; // [rsp+3F8h] [rbp+2F0h] BYREF
  _QWORD v48[4]; // [rsp+418h] [rbp+310h] BYREF
  _QWORD v49[4]; // [rsp+438h] [rbp+330h] BYREF
  __int128 v50; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v51[64]; // [rsp+468h] [rbp+360h] BYREF
  _BYTE v52[64]; // [rsp+4A8h] [rbp+3A0h] BYREF
  _BYTE v53[64]; // [rsp+4E8h] [rbp+3E0h] BYREF
  _BYTE v54[64]; // [rsp+528h] [rbp+420h] BYREF
  _BYTE v55[64]; // [rsp+568h] [rbp+460h] BYREF
  _BYTE v56[64]; // [rsp+5A8h] [rbp+4A0h] BYREF
  _BYTE v57[64]; // [rsp+5E8h] [rbp+4E0h] BYREF
  _BYTE v58[64]; // [rsp+628h] [rbp+520h] BYREF
  _BYTE v59[64]; // [rsp+668h] [rbp+560h] BYREF
  _BYTE v60[64]; // [rsp+6A8h] [rbp+5A0h] BYREF
  _BYTE v61[64]; // [rsp+6E8h] [rbp+5E0h] BYREF
  _BYTE v62[64]; // [rsp+728h] [rbp+620h] BYREF
  _BYTE v63[64]; // [rsp+768h] [rbp+660h] BYREF
  _BYTE v64[64]; // [rsp+7A8h] [rbp+6A0h] BYREF
  _BYTE v65[64]; // [rsp+7E8h] [rbp+6E0h] BYREF
  _BYTE v66[64]; // [rsp+828h] [rbp+720h] BYREF
  _BYTE v67[64]; // [rsp+868h] [rbp+760h] BYREF
  _BYTE v68[64]; // [rsp+8A8h] [rbp+7A0h] BYREF
  _BYTE v69[64]; // [rsp+8E8h] [rbp+7E0h] BYREF
  _BYTE v70[64]; // [rsp+928h] [rbp+820h] BYREF
  _BYTE v71[64]; // [rsp+968h] [rbp+860h] BYREF
  _BYTE v72[64]; // [rsp+9A8h] [rbp+8A0h] BYREF
  _BYTE v73[64]; // [rsp+9E8h] [rbp+8E0h] BYREF
  _BYTE v74[64]; // [rsp+A28h] [rbp+920h] BYREF
  _BYTE v75[64]; // [rsp+A68h] [rbp+960h] BYREF
  _BYTE v76[64]; // [rsp+AA8h] [rbp+9A0h] BYREF
  _BYTE v77[64]; // [rsp+AE8h] [rbp+9E0h] BYREF
  _BYTE v78[64]; // [rsp+B28h] [rbp+A20h] BYREF
  _BYTE v79[64]; // [rsp+B68h] [rbp+A60h] BYREF
  _BYTE v80[64]; // [rsp+BA8h] [rbp+AA0h] BYREF

  v40 = -2LL;
  v41 = a2;
  v50 = 0uLL;
  sub_1800A3BB0(a1, &v50, 2LL);
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_18000F444(v21, (__int64)&qword_18025C558);
  v42 = xmmword_1801EDF60;
  sub_180091510((__int64)v51, v21, 6LL, &v42);
  v22[2] = 0LL;
  v22[3] = 0LL;
  sub_18000F444(v22, (__int64)&qword_18025C578);
  v39 = xmmword_1801EDF50;
  sub_180091510((__int64)v52, v22, 6LL, &v39);
  v23[2] = 0LL;
  v23[3] = 0LL;
  sub_18000F444(v23, (__int64)&qword_18025C598);
  *(_QWORD *)&v13 = 0x3F8000003F800000LL;
  *((_QWORD *)&v13 + 1) = 0x3F8000003F800000LL;
  sub_180091608((__int64)v53, v23, 5LL, &v13);
  v3 = sub_180011540(Src, &qword_18025C618, &qword_18025C538);
  sub_180091950((__int64)v54, v3, 0LL, 0);
  v4 = sub_180011540(v44, &qword_18025C638, &qword_18025C538);
  sub_180091950((__int64)v55, v4, 0LL, 0);
  v5 = sub_180011540(v45, &qword_18025C658, &qword_18025C538);
  sub_180091950((__int64)v56, v5, 0LL, 0);
  v6 = sub_180011540(v46, &qword_18025C678, &qword_18025C538);
  sub_180091950((__int64)v57, v6, 0LL, 0);
  v7 = sub_180011540(v47, &qword_18025C698, &qword_18025C538);
  sub_180091950((__int64)v58, v7, 0LL, 0);
  v8 = sub_180011540(v48, &qword_18025C6B8, &qword_18025C538);
  sub_180091950((__int64)v59, v8, 0LL, 0);
  v9 = sub_180011540(v49, &qword_18025C6D8, &qword_18025C538);
  sub_180091950((__int64)v60, v9, 0LL, 0);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18000F444(v24, (__int64)&qword_18025C6F8);
  sub_180091460((__int64)v61, v24, 0);
  v25[2] = 0LL;
  v25[3] = 0LL;
  sub_18000F444(v25, (__int64)&qword_18025C718);
  sub_180091460((__int64)v62, v25, 0);
  v26[2] = 0LL;
  v26[3] = 0LL;
  sub_18000F444(v26, (__int64)&qword_18025C5D8);
  sub_18009185C((__int64)v63, v26, 2LL, 1.0);
  v27[2] = 0LL;
  v27[3] = 0LL;
  sub_18000F444(v27, (__int64)&qword_18025C738);
  sub_180091700((__int64)v64, v27, 1LL, 0);
  v28[2] = 0LL;
  v28[3] = 0LL;
  sub_18000F444(v28, (__int64)&qword_18025C758);
  sub_18009185C((__int64)v65, v28, 2LL, 0.5);
  v17[2] = 0LL;
  v17[3] = 0LL;
  sub_18000F444(v17, (__int64)&qword_18025C778);
  sub_180091460((__int64)v66, v17, 5);
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_18000F444(v19, (__int64)&qword_18025C5F8);
  v14 = 0uLL;
  sub_180091510((__int64)v67, v19, 6LL, &v14);
  v20[2] = 0LL;
  v20[3] = 0LL;
  sub_18000F444(v20, (__int64)&qword_18025C5B8);
  *(_QWORD *)&v15 = 0x3F8000003F800000LL;
  *((_QWORD *)&v15 + 1) = 0x3F8000003F800000LL;
  sub_180091608((__int64)v68, v20, 5LL, &v15);
  v16[2] = 0LL;
  v16[3] = 0LL;
  sub_18000F444(v16, (__int64)&qword_18025C798);
  sub_180091950((__int64)v69, v16, 0LL, 0);
  v18[2] = 0LL;
  v18[3] = 0LL;
  sub_18000F444(v18, (__int64)&qword_18025C7B8);
  sub_180091950((__int64)v70, v18, 0LL, 0);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_18000F444(v29, (__int64)&qword_18025C7D8);
  sub_180091950((__int64)v71, v29, 0LL, 0);
  v30[2] = 0LL;
  v30[3] = 0LL;
  sub_18000F444(v30, (__int64)&qword_18025C7F8);
  sub_180091950((__int64)v72, v30, 0LL, 0);
  v31[2] = 0LL;
  v31[3] = 0LL;
  sub_18000F444(v31, (__int64)&qword_18025C818);
  sub_180091950((__int64)v73, v31, 0LL, 0);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18000F444(v32, (__int64)&qword_18025C618);
  sub_180091460((__int64)v74, v32, 8);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18000F444(v33, (__int64)&qword_18025C638);
  sub_180091460((__int64)v75, v33, 8);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18000F444(v34, (__int64)&qword_18025C658);
  sub_180091460((__int64)v76, v34, 8);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18000F444(v35, (__int64)&qword_18025C678);
  sub_180091460((__int64)v77, v35, 8);
  v36[2] = 0LL;
  v36[3] = 0LL;
  sub_18000F444(v36, (__int64)&qword_18025C6B8);
  sub_180091460((__int64)v78, v36, 8);
  v37[2] = 0LL;
  v37[3] = 0LL;
  sub_18000F444(v37, (__int64)&qword_18025C698);
  sub_180091460((__int64)v79, v37, 8);
  v38[2] = 0LL;
  v38[3] = 0LL;
  sub_18000F444(v38, (__int64)&qword_18025C6D8);
  sub_180091460((__int64)v80, v38, 8);
  sub_1800F239C(v50, v51, 30LL, 0LL);
  sub_1800F2BD4(v50);
  v12 = 0LL;
  if ( *((_QWORD *)&v50 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL));
  v12 = v50;
  sub_1800A9BE4(*a2, &v12);
  `eh vector destructor iterator'(v51, 0x40uLL, 0x1EuLL, (void (*)(void *))sub_180091A40);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v50 + 1);
  if ( *((_QWORD *)&v50 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a2[1];
  if ( v11 && !_InterlockedDecrement(v11 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( !_InterlockedDecrement(v11 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
}
