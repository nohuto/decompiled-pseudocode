/*
 * XREFs of sub_1800C3744 @ 0x1800C3744
 * Callers:
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     sub_1800906CC @ 0x1800906CC (sub_1800906CC.c)
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 *     sub_180090B14 @ 0x180090B14 (sub_180090B14.c)
 *     sub_180090EAC @ 0x180090EAC (sub_180090EAC.c)
 *     sub_180090EE4 @ 0x180090EE4 (sub_180090EE4.c)
 *     sub_180091230 @ 0x180091230 (sub_180091230.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800B1948 @ 0x1800B1948 (sub_1800B1948.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     sub_1800C1D70 @ 0x1800C1D70 (sub_1800C1D70.c)
 *     sub_1800C6A88 @ 0x1800C6A88 (sub_1800C6A88.c)
 *     sub_1800C6BB0 @ 0x1800C6BB0 (sub_1800C6BB0.c)
 *     sub_1800C6BF0 @ 0x1800C6BF0 (sub_1800C6BF0.c)
 *     sub_1800EA2D0 @ 0x1800EA2D0 (sub_1800EA2D0.c)
 *     sub_1800F5E1C @ 0x1800F5E1C (sub_1800F5E1C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800C3744(__int64 a1, __int64 *a2, char a3, float a4)
{
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 result; // rax
  double v13; // xmm0_8
  int v14; // xmm8_4
  double v15; // xmm0_8
  int v16; // xmm7_4
  double v17; // xmm0_8
  int v18; // xmm6_4
  double v19; // xmm0_8
  double v20; // xmm0_8
  int v21; // xmm8_4
  double v22; // xmm0_8
  int v23; // xmm7_4
  double v24; // xmm0_8
  int v25; // xmm6_4
  double v26; // xmm0_8
  double v27; // xmm0_8
  int v28; // xmm8_4
  double v29; // xmm0_8
  int v30; // xmm7_4
  double v31; // xmm0_8
  int v32; // xmm6_4
  double v33; // xmm0_8
  double v34; // xmm0_8
  int v35; // xmm8_4
  double v36; // xmm0_8
  int v37; // xmm7_4
  double v38; // xmm0_8
  int v39; // xmm6_4
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rbx
  char v45; // al
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rcx
  __int64 *v49; // rbx
  __int64 v50; // rcx
  _QWORD *v51; // rdi
  int v52; // esi
  __int64 v53; // rbx
  int v54; // xmm15_4
  int v55; // xmm14_4
  double v56; // xmm0_8
  int v57; // xmm13_4
  double v58; // xmm0_8
  int v59; // xmm12_4
  double v60; // xmm0_8
  int v61; // xmm11_4
  double v62; // xmm0_8
  int v63; // xmm10_4
  double v64; // xmm0_8
  int v65; // xmm9_4
  double v66; // xmm0_8
  int v67; // xmm8_4
  int v68; // edx
  int v69; // r8d
  int v70; // r9d
  volatile signed __int32 *v71; // rbx
  volatile signed __int32 *v72; // rbx
  double v73; // xmm0_8
  float X; // xmm8_4
  double v75; // xmm0_8
  float v76; // xmm7_4
  double v77; // xmm0_8
  float v78; // xmm6_4
  double v79; // xmm0_8
  double v80; // xmm0_8
  float v81; // xmm8_4
  double v82; // xmm0_8
  float v83; // xmm7_4
  double v84; // xmm0_8
  float v85; // xmm6_4
  double v86; // xmm0_8
  double v87; // xmm0_8
  float v88; // xmm8_4
  double v89; // xmm0_8
  float v90; // xmm7_4
  double v91; // xmm0_8
  float v92; // xmm6_4
  double v93; // xmm0_8
  double v94; // xmm0_8
  float v95; // xmm7_4
  double v96; // xmm0_8
  float v97; // xmm6_4
  double v98; // xmm0_8
  __int64 v99; // r8
  char v100; // bl
  volatile signed __int32 *v101; // rbx
  volatile signed __int32 *v102; // rbx
  __int128 v103; // [rsp+A8h] [rbp-80h] BYREF
  int v104; // [rsp+B8h] [rbp-70h]
  int v105; // [rsp+BCh] [rbp-6Ch]
  int v106; // [rsp+C0h] [rbp-68h]
  float v107; // [rsp+C4h] [rbp-64h]
  __int128 v108; // [rsp+C8h] [rbp-60h] BYREF
  __int128 *v109; // [rsp+D8h] [rbp-50h]
  __int128 v110; // [rsp+E8h] [rbp-40h] BYREF
  size_t v111[5]; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v112; // [rsp+120h] [rbp-8h] BYREF
  volatile signed __int32 *v113; // [rsp+128h] [rbp+0h]
  __int64 v114; // [rsp+130h] [rbp+8h] BYREF
  volatile signed __int32 *v115; // [rsp+138h] [rbp+10h]
  __m128 v116; // [rsp+148h] [rbp+20h] BYREF
  __m128 v117; // [rsp+158h] [rbp+30h] BYREF
  __m128 v118; // [rsp+168h] [rbp+40h] BYREF
  __m128 v119; // [rsp+178h] [rbp+50h] BYREF
  __m128 v120; // [rsp+188h] [rbp+60h] BYREF
  __m128 v121; // [rsp+198h] [rbp+70h] BYREF
  __m128 v122; // [rsp+1A8h] [rbp+80h] BYREF
  __m128 v123; // [rsp+1B8h] [rbp+90h] BYREF
  __int64 v124; // [rsp+1C8h] [rbp+A0h] BYREF
  volatile signed __int32 *v125; // [rsp+1D0h] [rbp+A8h]
  __int128 v126; // [rsp+1D8h] [rbp+B0h] BYREF
  int v127; // [rsp+1E8h] [rbp+C0h]
  int v128; // [rsp+1ECh] [rbp+C4h]
  int v129; // [rsp+1F0h] [rbp+C8h]
  int v130; // [rsp+1F4h] [rbp+CCh]
  int v131; // [rsp+1F8h] [rbp+D0h]
  int v132; // [rsp+1FCh] [rbp+D4h]
  int v133; // [rsp+200h] [rbp+D8h]
  int v134; // [rsp+204h] [rbp+DCh]
  int v135; // [rsp+208h] [rbp+E0h]
  int v136; // [rsp+20Ch] [rbp+E4h]
  int v137; // [rsp+210h] [rbp+E8h]
  int v138; // [rsp+214h] [rbp+ECh]
  int v139; // [rsp+218h] [rbp+F0h]
  int v140; // [rsp+21Ch] [rbp+F4h]
  int v141; // [rsp+220h] [rbp+F8h]
  int v142; // [rsp+224h] [rbp+FCh]
  _QWORD v143[2]; // [rsp+228h] [rbp+100h] BYREF
  _QWORD v144[2]; // [rsp+238h] [rbp+110h] BYREF

  v111[4] = -2LL;
  v7 = sub_1800BB1FC(*a2, (__int64)a2);
  v8 = (_QWORD *)v7;
  v9 = *(_QWORD *)(v7 + 200);
  if ( v9 )
  {
    sub_180087524(*(_QWORD *)(v7 + 200));
    if ( a3 )
      *(_QWORD *)(v9 + 448) |= 2uLL;
    else
      *(_QWORD *)(v9 + 448) &= ~2uLL;
  }
  v10 = v8[27];
  if ( v10 )
  {
    v104 = 1065353216;
    v105 = 1065353216;
    v106 = 1065353216;
    v107 = a4;
    sub_180090AFC(v10);
  }
  v11 = sub_180077A8C(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &unk_18025B8D8, 0LL);
  if ( (_BYTE)result )
  {
    if ( v8[39] )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B658);
      sub_180090EAC(v8[39]);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B6F8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B798);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B838);
      v13 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B678);
      v14 = LODWORD(v13);
      v15 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B698);
      v16 = LODWORD(v15);
      v17 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B6B8);
      v18 = LODWORD(v17);
      v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B6D8);
      v127 = v14;
      v128 = v16;
      v129 = v18;
      v130 = LODWORD(v19);
      v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B718);
      v21 = LODWORD(v20);
      v22 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B738);
      v23 = LODWORD(v22);
      v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B758);
      v25 = LODWORD(v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B778);
      v131 = v21;
      v132 = v23;
      v133 = v25;
      v134 = LODWORD(v26);
      v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B7B8);
      v28 = LODWORD(v27);
      v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B7D8);
      v30 = LODWORD(v29);
      v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B7F8);
      v32 = LODWORD(v31);
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B818);
      v135 = v28;
      v136 = v30;
      v137 = v32;
      v138 = LODWORD(v33);
      v34 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B858);
      v35 = LODWORD(v34);
      v36 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B878);
      v37 = LODWORD(v36);
      v38 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B898);
      v39 = LODWORD(v38);
      *(float *)&v38 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B8B8);
      v139 = v35;
      v140 = v37;
      v141 = v39;
      v142 = LODWORD(v38);
      v143[0] = 0LL;
      v143[1] = 0LL;
      v144[0] = 0LL;
      v144[1] = 0LL;
      sub_1800EA2D0(v41, v40, v42, (unsigned int)v143, (__int64)v144);
      sub_180091230(v8[39]);
      sub_180091230(v8[39]);
      sub_180090AFC(v8[39]);
      sub_180090AFC(v8[39]);
      sub_180090AFC(v8[39]);
      result = sub_180090AFC(v8[39]);
    }
    v43 = v8[37];
    if ( v43 )
    {
      sub_180090EE4(v43, (__int64)&qword_18025DEF8, v8 + 33);
      v44 = sub_180078228(a1);
      v126 = 0uLL;
      v111[2] = 0LL;
      v111[3] = 0LL;
      sub_18000F444(v111, (__int64)&qword_18025DDF8);
      sub_1800A4B48(v44, &v126, v111);
      v124 = 0LL;
      v125 = 0LL;
      sub_1800906CC(v8[37], &v124);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &unk_18025B938, 0LL);
      LOBYTE(v44) = v45;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B918);
      LOBYTE(v46) = v44;
      sub_1800C6BB0(a1, v47, v46, (unsigned int)&v124, (__int64)&qword_18025DF18);
      v109 = &v110;
      v110 = 0LL;
      if ( *((_QWORD *)&v126 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v126 + 1) + 8LL));
      v110 = v126;
      v103 = 0LL;
      v48 = a2[1];
      if ( v48 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v48 + 8));
        v48 = a2[1];
      }
      *(_QWORD *)&v103 = *a2;
      *((_QWORD *)&v103 + 1) = v48;
      v49 = sub_180077710(a1, &v114, 0LL, &v103);
      v108 = 0LL;
      v50 = a2[1];
      if ( v50 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v50 + 8));
        v50 = a2[1];
      }
      *(_QWORD *)&v108 = *a2;
      *((_QWORD *)&v108 + 1) = v50;
      v51 = sub_180077710(a1, &v112, 0LL, &v108);
      v52 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, &unk_18025BA98, 0LL);
      v53 = *v49;
      sub_1800B1948(v53);
      v54 = *(_DWORD *)(v53 + 332);
      v55 = *(_DWORD *)(*v51 + 328LL);
      v56 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BA58);
      v57 = LODWORD(v56);
      v58 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BA38);
      v59 = LODWORD(v58);
      v60 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BA18);
      v61 = LODWORD(v60);
      v62 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B9F8);
      v63 = LODWORD(v62);
      v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B9D8);
      v65 = LODWORD(v64);
      v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B9B8);
      v67 = LODWORD(v66);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B998);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_180259C78);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_180259C58);
      sub_1800C6BF0(
        a1,
        v68,
        v69,
        v70,
        v67,
        v65,
        v63,
        v61,
        v59,
        v57,
        v55,
        v54,
        v52,
        (__int64)&v110,
        (__int64)&v124,
        (__int64)&qword_18025E058,
        (__int64)&qword_18025E078,
        (__int64)&qword_18025E098,
        (__int64)&qword_18025E0B8);
      v71 = v113;
      if ( v113 )
      {
        if ( _InterlockedExchangeAdd(v113 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v71)(v71);
          if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
        }
      }
      v72 = v115;
      if ( v115 )
      {
        if ( _InterlockedExchangeAdd(v115 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v72)(v72);
          if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
        }
      }
      v73 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BC98);
      X = *(float *)&v73;
      v75 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BC38);
      v76 = *(float *)&v75;
      v77 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BBB8);
      v78 = *(float *)&v77;
      v79 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BB38);
      v116 = *sub_1800C1D70(&v120, *(float *)&v79, v78, v76, X);
      v80 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BCB8);
      v81 = *(float *)&v80;
      v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BC58);
      v83 = *(float *)&v82;
      v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BBD8);
      v85 = *(float *)&v84;
      v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BB58);
      v117 = *sub_1800C1D70(&v121, *(float *)&v86, v85, v83, v81);
      v87 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BCD8);
      v88 = *(float *)&v87;
      v89 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BC78);
      v90 = *(float *)&v89;
      v91 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BBF8);
      v92 = *(float *)&v91;
      v93 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BB78);
      v118 = *sub_1800C1D70(&v122, *(float *)&v93, v92, v90, v88);
      v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BC18);
      v95 = *(float *)&v94;
      v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BB98);
      v97 = *(float *)&v96;
      v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025BB18);
      v119 = *sub_1800C1D70(&v123, *(float *)&v98, v97, v95, 0.0);
      sub_1800C6A88(
        a1,
        (unsigned int)&v119,
        (unsigned int)&v118,
        (unsigned int)&v117,
        (__int64)&v116,
        (__int64)&v124,
        (__int64)&qword_18025E118,
        (__int64)&qword_18025E138,
        (__int64)&qword_18025E158);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, &unk_18025B958, 0LL);
      sub_1800F5E1C(v124);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v11 + 88LL))(v11, &unk_18025B978);
      sub_1800F5E1C(v124);
      LOBYTE(v99) = 1;
      v100 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v11 + 64LL))(v11, &unk_18025B8F8, v99);
      sub_180090B14(v8[37], (__int64)&qword_18025DE18, v100);
      sub_180090B14(v8[37], (__int64)&qword_18025DE38, v100);
      sub_180090B14(v8[37], (__int64)&qword_18025DE58, v100);
      result = sub_180090B14(v8[37], (__int64)&qword_18025DE78, v100);
      v101 = v125;
      if ( v125 )
      {
        result = (unsigned int)_InterlockedDecrement(v125 + 2);
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v101)(v101);
          result = (unsigned int)_InterlockedDecrement(v101 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v101 + 8LL))(v101);
        }
      }
      v102 = (volatile signed __int32 *)*((_QWORD *)&v126 + 1);
      if ( *((_QWORD *)&v126 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v126 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v102)(v102);
          result = (unsigned int)_InterlockedDecrement(v102 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v102 + 8LL))(v102);
        }
      }
    }
  }
  return result;
}
