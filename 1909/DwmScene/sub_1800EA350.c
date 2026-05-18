/*
 * XREFs of sub_1800EA350 @ 0x1800EA350
 * Callers:
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180091460 @ 0x180091460 (sub_180091460.c)
 *     sub_180091510 @ 0x180091510 (sub_180091510.c)
 *     sub_180091608 @ 0x180091608 (sub_180091608.c)
 *     sub_18009185C @ 0x18009185C (sub_18009185C.c)
 *     sub_180091A40 @ 0x180091A40 (sub_180091A40.c)
 *     sub_1800A3BB0 @ 0x1800A3BB0 (sub_1800A3BB0.c)
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 *     sub_1800EA2D0 @ 0x1800EA2D0 (sub_1800EA2D0.c)
 *     sub_1800F1F44 @ 0x1800F1F44 (sub_1800F1F44.c)
 *     sub_1800F239C @ 0x1800F239C (sub_1800F239C.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 *     sub_1800F38B8 @ 0x1800F38B8 (sub_1800F38B8.c)
 *     sub_1800F39C0 @ 0x1800F39C0 (sub_1800F39C0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_1800EA350(__int64 a1, __int128 *a2)
{
  unsigned __int16 v4; // ax
  volatile signed __int32 *v5; // rbx
  unsigned __int16 v6; // ax
  volatile signed __int32 *v7; // rbx
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // bx
  volatile signed __int32 *v10; // rbx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // di
  unsigned __int16 v13; // bx
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  volatile signed __int32 *v16; // rbx
  __int128 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  __int128 v21; // [rsp+88h] [rbp-80h] BYREF
  __int128 v22; // [rsp+98h] [rbp-70h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v25; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v26; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v28; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v29; // [rsp+108h] [rbp+0h] BYREF
  __int128 v30; // [rsp+118h] [rbp+10h] BYREF
  __int128 v31; // [rsp+128h] [rbp+20h] BYREF
  __int64 v32[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v33[4]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v34[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v35[4]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v36[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v37[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v38[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v39[4]; // [rsp+218h] [rbp+110h] BYREF
  __int64 v40[4]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v41[4]; // [rsp+258h] [rbp+150h] BYREF
  __int64 v42[4]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v43[4]; // [rsp+298h] [rbp+190h] BYREF
  __int64 v44[4]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v45[4]; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int64 v46[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v47[4]; // [rsp+318h] [rbp+210h] BYREF
  __int64 v48[4]; // [rsp+338h] [rbp+230h] BYREF
  __int64 v49[4]; // [rsp+358h] [rbp+250h] BYREF
  __int64 v50[4]; // [rsp+378h] [rbp+270h] BYREF
  __int64 v51[4]; // [rsp+398h] [rbp+290h] BYREF
  __int64 v52[4]; // [rsp+3B8h] [rbp+2B0h] BYREF
  __int64 v53[4]; // [rsp+3D8h] [rbp+2D0h] BYREF
  __int64 v54[4]; // [rsp+3F8h] [rbp+2F0h] BYREF
  __int64 v55[4]; // [rsp+418h] [rbp+310h] BYREF
  __int64 v56[4]; // [rsp+438h] [rbp+330h] BYREF
  __int64 v57[4]; // [rsp+458h] [rbp+350h] BYREF
  __int64 v58[4]; // [rsp+478h] [rbp+370h] BYREF
  __int64 v59[4]; // [rsp+498h] [rbp+390h] BYREF
  __int64 v60[4]; // [rsp+4B8h] [rbp+3B0h] BYREF
  __int64 v61[6]; // [rsp+4D8h] [rbp+3D0h] BYREF
  _OWORD v62[4]; // [rsp+508h] [rbp+400h] BYREF
  _OWORD v63[4]; // [rsp+548h] [rbp+440h] BYREF
  __int64 v64[8]; // [rsp+588h] [rbp+480h] BYREF
  __int64 v65[8]; // [rsp+5C8h] [rbp+4C0h] BYREF
  __int64 v66[8]; // [rsp+608h] [rbp+500h] BYREF
  __int64 v67[8]; // [rsp+648h] [rbp+540h] BYREF
  __int64 v68[8]; // [rsp+688h] [rbp+580h] BYREF
  __int64 v69[8]; // [rsp+6C8h] [rbp+5C0h] BYREF
  __int64 v70[8]; // [rsp+708h] [rbp+600h] BYREF
  __int64 v71[8]; // [rsp+748h] [rbp+640h] BYREF
  __int128 v72; // [rsp+788h] [rbp+680h] BYREF
  __int128 v73; // [rsp+798h] [rbp+690h] BYREF
  __int128 v74; // [rsp+7A8h] [rbp+6A0h] BYREF
  __int128 v75; // [rsp+7B8h] [rbp+6B0h] BYREF
  __int128 v76; // [rsp+7C8h] [rbp+6C0h] BYREF
  _BYTE v77[64]; // [rsp+7D8h] [rbp+6D0h] BYREF
  _BYTE v78[64]; // [rsp+818h] [rbp+710h] BYREF
  _BYTE v79[64]; // [rsp+858h] [rbp+750h] BYREF
  _BYTE v80[64]; // [rsp+898h] [rbp+790h] BYREF
  _BYTE v81[64]; // [rsp+8D8h] [rbp+7D0h] BYREF
  _BYTE v82[64]; // [rsp+918h] [rbp+810h] BYREF
  _BYTE v83[64]; // [rsp+958h] [rbp+850h] BYREF
  _BYTE v84[64]; // [rsp+998h] [rbp+890h] BYREF
  _BYTE v85[64]; // [rsp+9D8h] [rbp+8D0h] BYREF
  _BYTE v86[64]; // [rsp+A18h] [rbp+910h] BYREF
  _BYTE v87[64]; // [rsp+A58h] [rbp+950h] BYREF
  _BYTE v88[64]; // [rsp+A98h] [rbp+990h] BYREF
  _BYTE v89[64]; // [rsp+AD8h] [rbp+9D0h] BYREF
  _BYTE v90[64]; // [rsp+B18h] [rbp+A10h] BYREF
  _BYTE v91[64]; // [rsp+B58h] [rbp+A50h] BYREF
  _BYTE v92[64]; // [rsp+B98h] [rbp+A90h] BYREF
  _BYTE v93[64]; // [rsp+BD8h] [rbp+AD0h] BYREF
  _BYTE v94[64]; // [rsp+C18h] [rbp+B10h] BYREF
  _BYTE v95[64]; // [rsp+C58h] [rbp+B50h] BYREF
  _BYTE v96[64]; // [rsp+C98h] [rbp+B90h] BYREF
  _BYTE v97[64]; // [rsp+CD8h] [rbp+BD0h] BYREF
  _BYTE v98[64]; // [rsp+D18h] [rbp+C10h] BYREF

  v61[4] = -2LL;
  v76 = 0uLL;
  sub_1800A3BB0(a2, &v76, 0);
  v38[2] = 0LL;
  v38[3] = 0LL;
  sub_18000F444(v38, (__int64)&qword_18025DED8);
  sub_180091460((__int64)v64, v38, 7);
  sub_1800F2454(v76, v64, 0LL);
  sub_180091A40(v64);
  sub_1800F2D88(v76, &qword_18025DED8);
  v62[0] = xmmword_18025EFE0;
  v62[1] = xmmword_18025EFF0;
  v62[2] = xmmword_18025F000;
  v62[3] = xmmword_18025F010;
  sub_1800F38B8(v76, v4, v62);
  sub_1800F2BD4(v76);
  v18 = 0LL;
  if ( *((_QWORD *)&v76 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v76 + 1) + 8LL), 1u);
  v18 = v76;
  sub_1800A9BE4(*(_QWORD *)(a1 + 56), (__int64 *)&v18);
  v5 = (volatile signed __int32 *)*((_QWORD *)&v76 + 1);
  if ( *((_QWORD *)&v76 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v76 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v75 = 0uLL;
  sub_1800A3BB0(a2, &v75, 4u);
  v39[2] = 0LL;
  v39[3] = 0LL;
  sub_18000F444(v39, (__int64)&qword_18025D198);
  sub_180091460((__int64)v65, v39, 7);
  sub_1800F2454(v75, v65, 1LL);
  sub_180091A40(v65);
  sub_1800F2D88(v75, &qword_18025D198);
  v63[0] = xmmword_18025EFE0;
  v63[1] = xmmword_18025EFF0;
  v63[2] = xmmword_18025F000;
  v63[3] = xmmword_18025F010;
  sub_1800F38B8(v75, v6, v63);
  v40[2] = 0LL;
  v40[3] = 0LL;
  sub_18000F444(v40, (__int64)&qword_18025D1B8);
  sub_180091460((__int64)v66, v40, 5);
  sub_1800F2454(v75, v66, 1LL);
  sub_180091A40(v66);
  sub_1800F2BD4(v75);
  v17 = 0LL;
  if ( *((_QWORD *)&v75 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v75 + 1) + 8LL), 1u);
  v17 = v75;
  sub_1800A9BE4(*(_QWORD *)(a1 + 56), (__int64 *)&v17);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v75 + 1);
  if ( *((_QWORD *)&v75 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v75 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v73 = 0uLL;
  sub_1800A3BB0(a2, &v73, 2u);
  v41[2] = 0LL;
  v41[3] = 0LL;
  sub_18000F444(v41, (__int64)&qword_18025DEF8);
  sub_180091460((__int64)v67, v41, 8);
  v8 = sub_1800F2454(v73, v67, 0LL);
  sub_180091A40(v67);
  sub_1800F39C0(v73, v8, 11LL);
  v42[2] = 0LL;
  v42[3] = 0LL;
  sub_18000F444(v42, (__int64)&qword_18025E0D8);
  sub_180091460((__int64)v68, v42, 8);
  v9 = sub_1800F2454(v73, v68, 0LL);
  sub_180091A40(v68);
  sub_1800F39C0(v73, v9, 12LL);
  *(_QWORD *)&v30 = 0x3F8000003F800000LL;
  *((_QWORD *)&v30 + 1) = 0x3F8000003F800000LL;
  *(_QWORD *)&v31 = 0x3F8000003F800000LL;
  *((_QWORD *)&v31 + 1) = 0x3F8000003F800000LL;
  *(_QWORD *)&v29 = 0x3F8000003F800000LL;
  *((_QWORD *)&v29 + 1) = 0x3F8000003F800000LL;
  *(_QWORD *)&v25 = 0x3F8000003F800000LL;
  *((_QWORD *)&v25 + 1) = 0x3F8000003F800000LL;
  v19 = 0uLL;
  v20 = 0uLL;
  sub_1800EA2D0(0.25, 0.25, 0.25, (__int64)&v19, (__int64)&v20);
  v43[2] = 0LL;
  v43[3] = 0LL;
  sub_18000F444(v43, (__int64)&qword_18025DF18);
  sub_180091460((__int64)v81, v43, 2);
  v44[2] = 0LL;
  v44[3] = 0LL;
  sub_18000F444(v44, (__int64)&qword_18025DF38);
  sub_18009185C((__int64)v82, v44, 2LL, 1.0);
  v45[2] = 0LL;
  v45[3] = 0LL;
  sub_18000F444(v45, (__int64)&qword_18025DF58);
  sub_180091460((__int64)v83, v45, 2);
  v46[2] = 0LL;
  v46[3] = 0LL;
  sub_18000F444(v46, (__int64)&qword_18025DF78);
  sub_180091460((__int64)v84, v46, 2);
  v47[2] = 0LL;
  v47[3] = 0LL;
  sub_18000F444(v47, (__int64)&qword_18025DF98);
  sub_180091608((__int64)v85, v47, 5LL, &v19);
  v48[2] = 0LL;
  v48[3] = 0LL;
  sub_18000F444(v48, (__int64)&qword_18025DFB8);
  sub_180091608((__int64)v86, v48, 5LL, &v20);
  v49[2] = 0LL;
  v49[3] = 0LL;
  sub_18000F444(v49, (__int64)&qword_18025DFD8);
  sub_180091510((__int64)v87, v49, 6LL, &v30);
  v50[2] = 0LL;
  v50[3] = 0LL;
  sub_18000F444(v50, (__int64)&qword_18025DFF8);
  sub_180091510((__int64)v88, v50, 6LL, &v31);
  v51[2] = 0LL;
  v51[3] = 0LL;
  sub_18000F444(v51, (__int64)&qword_18025E018);
  sub_180091510((__int64)v89, v51, 6LL, &v29);
  v52[2] = 0LL;
  v52[3] = 0LL;
  sub_18000F444(v52, (__int64)&qword_18025E038);
  sub_180091510((__int64)v90, v52, 6LL, &v25);
  v53[2] = 0LL;
  v53[3] = 0LL;
  sub_18000F444(v53, (__int64)&qword_18025E058);
  sub_180091460((__int64)v91, v53, 5);
  v54[2] = 0LL;
  v54[3] = 0LL;
  sub_18000F444(v54, (__int64)&qword_18025E078);
  sub_180091460((__int64)v92, v54, 5);
  v55[2] = 0LL;
  v55[3] = 0LL;
  sub_18000F444(v55, (__int64)&qword_18025E098);
  sub_180091460((__int64)v93, v55, 5);
  v56[2] = 0LL;
  v56[3] = 0LL;
  sub_18000F444(v56, (__int64)&qword_18025E0B8);
  sub_180091460((__int64)v94, v56, 5);
  v57[2] = 0LL;
  v57[3] = 0LL;
  sub_18000F444(v57, (__int64)&qword_18025E0F8);
  v26 = 0uLL;
  sub_180091608((__int64)v95, v57, 5LL, &v26);
  v58[2] = 0LL;
  v58[3] = 0LL;
  sub_18000F444(v58, (__int64)&qword_18025E118);
  *(_QWORD *)&v27 = 0x3F8000003F800000LL;
  *((_QWORD *)&v27 + 1) = 0x3F8000003F800000LL;
  sub_180091510((__int64)v96, v58, 6LL, &v27);
  v59[2] = 0LL;
  v59[3] = 0LL;
  sub_18000F444(v59, (__int64)&qword_18025E138);
  v28 = 0uLL;
  sub_180091510((__int64)v97, v59, 6LL, &v28);
  v60[2] = 0LL;
  v60[3] = 0LL;
  sub_18000F444(v60, (__int64)&qword_18025E158);
  v24 = 0uLL;
  sub_180091510((__int64)v98, v60, 6LL, &v24);
  sub_1800F239C(v73, v81, 18LL, 0LL);
  sub_1800F2BD4(v73);
  v21 = 0LL;
  if ( *((_QWORD *)&v73 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v73 + 1) + 8LL), 1u);
  v21 = v73;
  sub_1800A9BE4(*(_QWORD *)(a1 + 56), (__int64 *)&v21);
  `eh vector destructor iterator'(v81, 0x40uLL, 0x12uLL, (void (*)(void *))sub_180091A40);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v73 + 1);
  if ( *((_QWORD *)&v73 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v73 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v72 = 0uLL;
  sub_1800A3BB0(a2, &v72, 6u);
  v61[2] = 0LL;
  v61[3] = 0LL;
  sub_18000F444(v61, (__int64)&qword_18025CC98);
  sub_180091460((__int64)v77, v61, 2);
  v32[2] = 0LL;
  v32[3] = 0LL;
  sub_18000F444(v32, (__int64)&qword_18025CCB8);
  sub_180091460((__int64)v78, v32, 2);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18000F444(v33, (__int64)&qword_18025CCD8);
  sub_180091460((__int64)v79, v33, 2);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18000F444(v34, (__int64)&qword_18025CD38);
  sub_180091460((__int64)v80, v34, 2);
  sub_1800F239C(v72, v77, 4LL, 1LL);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18000F444(v35, (__int64)&qword_18025D018);
  sub_180091460((__int64)v69, v35, 8);
  v11 = sub_1800F2454(v72, v69, 1LL);
  sub_180091A40(v69);
  v36[2] = 0LL;
  v36[3] = 0LL;
  sub_18000F444(v36, (__int64)&qword_18025D038);
  sub_180091460((__int64)v70, v36, 8);
  v12 = sub_1800F2454(v72, v70, 1LL);
  sub_180091A40(v70);
  v37[2] = 0LL;
  v37[3] = 0LL;
  sub_18000F444(v37, (__int64)&qword_18025D058);
  sub_180091460((__int64)v71, v37, 8);
  v13 = sub_1800F2454(v72, v71, 1LL);
  sub_180091A40(v71);
  sub_1800F39C0(v72, v11, 5LL);
  sub_1800F39C0(v72, v12, 6LL);
  sub_1800F39C0(v72, v13, 7LL);
  sub_1800F2BD4(v72);
  v22 = 0LL;
  if ( *((_QWORD *)&v72 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v72 + 1) + 8LL));
  v22 = v72;
  sub_1800A9BE4(*(_QWORD *)(a1 + 56), (__int64 *)&v22);
  `eh vector destructor iterator'(v77, 0x40uLL, 4uLL, (void (*)(void *))sub_180091A40);
  v14 = (volatile signed __int32 *)*((_QWORD *)&v72 + 1);
  if ( *((_QWORD *)&v72 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v72 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v74 = 0uLL;
  sub_1800A3BB0(a2, &v74, 9u);
  sub_1800F1F44(v74, &qword_18025CA58, 7LL, 3LL);
  sub_1800F1F44(v74, &qword_18025CA78, 5LL, 3LL);
  sub_1800F1F44(v74, &qword_18025CAB8, 5LL, 3LL);
  sub_1800F1F44(v74, &qword_18025CA18, 5LL, 3LL);
  sub_1800F1F44(v74, &qword_18025CA38, 5LL, 3LL);
  sub_1800F2BD4(v74);
  v23 = 0LL;
  if ( *((_QWORD *)&v74 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v74 + 1) + 8LL));
  v23 = v74;
  result = sub_1800A9BE4(*(_QWORD *)(a1 + 56), (__int64 *)&v23);
  v16 = (volatile signed __int32 *)*((_QWORD *)&v74 + 1);
  if ( *((_QWORD *)&v74 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v74 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
