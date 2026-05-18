/*
 * XREFs of sub_1800199B8 @ 0x1800199B8
 * Callers:
 *     sub_18000D570 @ 0x18000D570 (sub_18000D570.c)
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800151D4 @ 0x1800151D4 (sub_1800151D4.c)
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 *     sub_1800161C4 @ 0x1800161C4 (sub_1800161C4.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800761D4 @ 0x1800761D4 (sub_1800761D4.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_1800B3DF8 @ 0x1800B3DF8 (sub_1800B3DF8.c)
 *     sub_1800B4C30 @ 0x1800B4C30 (sub_1800B4C30.c)
 *     sub_1800B4C90 @ 0x1800B4C90 (sub_1800B4C90.c)
 *     sub_1801155FC @ 0x1801155FC (sub_1801155FC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800199B8(_QWORD *a1, _QWORD **a2)
{
  __int64 (__fastcall **v4)(_QWORD, void *, __int64 *); // rbx
  __int64 *v5; // r8
  signed int v6; // eax
  unsigned int v7; // edi
  signed int v8; // eax
  const char *v9; // r8
  int v10; // edx
  _QWORD *v11; // rbx
  __int64 (__fastcall **v12)(_QWORD, void *, __int64 *); // rdi
  __int64 *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  _QWORD *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rdx
  void (__fastcall ***v28)(_QWORD, __int64); // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r8
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // r8
  __int64 v125; // r8
  __int64 v126; // r8
  __int64 v127; // r8
  __int64 v128; // r8
  __int64 v129; // r8
  __int64 v130; // r8
  __int64 v131; // r8
  __int64 v132; // r8
  __int64 v133; // r8
  __int64 *v134; // rax
  _QWORD *v135; // r15
  __int64 v136; // rdx
  volatile signed __int32 *v137; // rbx
  __int64 v138; // rbx
  __int64 *v139; // rax
  _QWORD *v140; // rdi
  volatile signed __int32 *v141; // rbx
  __int64 v142; // rcx
  volatile signed __int32 *v143; // rbx
  volatile signed __int32 *v144; // rbx
  volatile signed __int32 *v145; // rbx
  void (__fastcall ***v146)(_QWORD, __int64); // [rsp+58h] [rbp-B0h] BYREF
  __int128 v147; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v148; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v149; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v150; // [rsp+88h] [rbp-80h]
  __int128 v151; // [rsp+90h] [rbp-78h]
  __int128 v152; // [rsp+A8h] [rbp-60h] BYREF
  __int64 (__fastcall ***v153)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp-50h]
  __int64 v154; // [rsp+C0h] [rbp-48h]
  int v155; // [rsp+C8h] [rbp-40h]
  int v156; // [rsp+CCh] [rbp-3Ch]
  int v157; // [rsp+D0h] [rbp-38h]
  __int16 v158; // [rsp+D4h] [rbp-34h]
  __int64 v159; // [rsp+D8h] [rbp-30h]
  __int64 v160; // [rsp+E0h] [rbp-28h]
  int v161; // [rsp+E8h] [rbp-20h]
  int v162; // [rsp+ECh] [rbp-1Ch]
  int v163; // [rsp+F0h] [rbp-18h]
  int v164; // [rsp+F4h] [rbp-14h]
  __int64 v165; // [rsp+F8h] [rbp-10h]
  int v166; // [rsp+100h] [rbp-8h]
  char v167; // [rsp+104h] [rbp-4h]
  __int128 v168; // [rsp+108h] [rbp+0h] BYREF
  __int64 v169; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v170; // [rsp+120h] [rbp+18h]
  __int64 v171; // [rsp+128h] [rbp+20h]
  _BYTE v172[16]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v173; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v174; // [rsp+148h] [rbp+40h]
  _OWORD v175[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v176; // [rsp+178h] [rbp+70h] BYREF
  __int64 v177; // [rsp+180h] [rbp+78h] BYREF
  int v178; // [rsp+188h] [rbp+80h] BYREF
  _QWORD *v179; // [rsp+190h] [rbp+88h] BYREF
  volatile signed __int32 *v180; // [rsp+198h] [rbp+90h]
  __int64 v181; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v182; // [rsp+1A8h] [rbp+A0h]
  __int64 v183; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v184; // [rsp+1B8h] [rbp+B0h]
  _BYTE v185[296]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v186; // [rsp+2F0h] [rbp+1E8h]
  __int64 retaddr; // [rsp+370h] [rbp+268h]

  v171 = -2LL;
  v177 = 0LL;
  v4 = (__int64 (__fastcall **)(_QWORD, void *, __int64 *))**a2;
  v5 = sub_1800161C4(&v177);
  v6 = (*v4)(*a2, &unk_180147460, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18000C338(retaddr, 46, (__int64)"SpectreRenderer.cpp", v6);
LABEL_17:
    v20 = v177;
    if ( v177 )
    {
      v177 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v7;
  }
  v176 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v177 + 56LL))(v177, &v176);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = "SpectreRenderer.cpp";
    v10 = 49;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v176 + 64LL))(v176, v185);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = "SpectreRenderer.cpp";
    v10 = 52;
    goto LABEL_15;
  }
  a1[3] = v186;
  v11 = a1 + 4;
  v12 = (__int64 (__fastcall **)(_QWORD, void *, __int64 *))**a2;
  v13 = sub_1800161C4(a1 + 4);
  v8 = (*v12)(*a2, &unk_180147470, v13);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = "SpectreRenderer.cpp";
    v10 = 56;
    goto LABEL_15;
  }
  v14 = *v11;
  v15 = a1[5];
  if ( v15 )
  {
    a1[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 344LL))(v14, a1 + 5);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 304LL))(*v11) & 1;
  v178 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 296LL))(*v11);
  v17 = *v11;
  v18 = a1[6];
  if ( v18 )
  {
    a1[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, _QWORD *))(*(_QWORD *)v17 + 376LL))(
         v17,
         (unsigned int)v16,
         &v178,
         1LL,
         7,
         &unk_180147470,
         0LL,
         a1 + 6);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = "SpectreRenderer.cpp";
    v10 = 69;
LABEL_15:
    sub_18000C338(retaddr, v10, (__int64)v9, v8);
    v19 = v176;
    if ( v176 )
    {
      v176 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_17;
  }
  v22 = v176;
  if ( v176 )
  {
    v176 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v177;
  if ( v177 )
  {
    v177 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( *((_DWORD *)a2 + 6) >= 4u )
    v24 = 1;
  else
    v24 = dword_180147480[*((unsigned int *)a2 + 6)];
  v159 = 0LL;
  v160 = 0LL;
  v163 = 0;
  v164 = 1;
  v165 = 1LL;
  v166 = 0;
  v167 = 1;
  v152 = 0x100000004uLL;
  v153 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*a2;
  v154 = 0LL;
  v155 = 1;
  v156 = v24;
  v157 = 0;
  v158 = 0;
  v161 = 37120;
  v162 = 49408;
  v25 = (_QWORD *)sub_1801155FC(v172);
  v168 = 0LL;
  v26 = sub_1800151D4((__int64 *)&v146, &v152, &v168, v25);
  v27 = *v26;
  *v26 = 0LL;
  v28 = (void (__fastcall ***)(_QWORD, __int64))a1[7];
  a1[7] = v27;
  if ( v28 )
    (**v28)(v28, 1LL);
  if ( v146 )
    (**v146)(v146, 1LL);
  v183 = 0LL;
  v184 = 0LL;
  sub_1800631C0(a1[7] + 8LL, &v183);
  v29 = sub_18007797C(a1[7], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180258EB8, 0LL, 1LL);
  if ( *((_BYTE *)a2 + 30) )
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_180258998, 1LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_18025A218, 0LL, 1LL);
  LOBYTE(v30) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_18025A198, v30, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_18025AED8, 1LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AEB8, v31, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AF38, v32, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AF78, v33, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AF18, v34, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AEF8, v35, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AF58, v36, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AE58, v37, 1LL);
  LOBYTE(v38) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_18025AE78, v38, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025ADD8, v39, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_18025B0D8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AE18, v40, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025B038, v41, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AE38, v42, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025ADF8, v43, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AF98, v44, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AFD8, v45, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AFB8, v46, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025B0B8, v47, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025B098, v48, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025ACF8, v49, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AD18, v50, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AD38, v51, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025ADB8, v52, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AD58, v53, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AD78, v54, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_18025AD98, v55, 1LL);
  LOBYTE(v56) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_18025AE98, v56, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_18025B058, 0LL, 1LL);
  LOBYTE(v57) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259E98, v57, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259EB8, v58, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259ED8, v59, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259FB8, v60, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259F98, v61, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259F78, v62, 1LL);
  LOBYTE(v63) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259F38, v63, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_18025A038, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259F58, v64, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259FD8, v65, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_1802595D8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259478, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802593B8, v66, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259398, v67, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259378, v68, 1LL);
  LOBYTE(v69) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259298, v69, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259578, v70, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802593D8, v71, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_1802593F8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802592B8, v72, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802592D8, v73, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802592F8, v74, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259438, v75, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802594B8, v76, 1LL);
  LOBYTE(v77) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259498, v77, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259538, v78, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802594F8, v79, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802594D8, v80, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259518, v81, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259458, v82, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259318, v83, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259338, v84, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259358, v85, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_180259418, 2LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_180259998, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259838, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259778, v86, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259758, v87, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259738, v88, 1LL);
  LOBYTE(v89) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259658, v89, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259938, v90, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259798, v91, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_1802597B8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259678, v92, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259698, v93, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802596B8, v94, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802597F8, v95, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259878, v96, 1LL);
  LOBYTE(v97) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259858, v97, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802598F8, v98, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802598B8, v99, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259898, v100, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802598D8, v101, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259818, v102, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802596D8, v103, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_1802596F8, v104, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259718, v105, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_1802597D8, 2LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_180259D58, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259BF8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259B38, v106, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259B18, v107, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259AF8, v108, 1LL);
  LOBYTE(v109) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259A18, v109, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259CF8, v110, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259B58, v111, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_180259B78, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259A38, v112, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259A58, v113, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259A78, v114, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259BB8, v115, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259C38, v116, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259C18, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259CB8, v117, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259C78, v118, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259C58, v119, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259C98, v120, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259BD8, v121, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259A98, v122, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259AB8, v123, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(v29, &unk_180259AD8, v124, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, &unk_180259B98, 2LL, 1LL);
  LOBYTE(v125) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259E78, v125, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v29 + 144LL))(v29, &unk_180259198, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_1802591B8,
    v126,
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_1802591D8,
    v127,
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_1802591F8,
    v128,
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_180259158,
    v129,
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_180259278,
    v130,
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_180259218,
    v131,
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_180259238,
    v132,
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 168LL))(
    v29,
    &qword_180259258,
    v133,
    1LL);
  v179 = 0LL;
  v180 = 0LL;
  sub_180077A9C(a1[7], &v179, 1LL);
  v181 = 0LL;
  v182 = 0LL;
  sub_1800631C0(v179 + 3, &v181);
  v150 = 0LL;
  *(_QWORD *)&v151 = 0LL;
  DWORD2(v151) = 0;
  LODWORD(v149) = 3;
  v147 = 0LL;
  v175[0] = v149;
  v175[1] = v151;
  v134 = sub_18001575C(
           v179,
           &v173,
           (__int64)v175,
           (int)&v179,
           (__int64)&v147,
           (__int64)(a2 + 1),
           (__int64)a2 + 12,
           (__int64)(a2 + 2),
           (__int64)a2 + 20);
  v135 = a1 + 10;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 10, v134);
  v137 = v174;
  if ( v174 )
  {
    if ( _InterlockedExchangeAdd(v174 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v137)(v137);
      if ( _InterlockedExchangeAdd(v137 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v137 + 8LL))(v137);
    }
  }
  if ( *((_QWORD *)&v147 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v147 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v138 = *((_QWORD *)&v147 + 1);
      (***((void (__fastcall ****)(_QWORD))&v147 + 1))(*((_QWORD *)&v147 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v138 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v147 + 1) + 8LL))(*((_QWORD *)&v147 + 1));
    }
  }
  LOBYTE(v136) = *((_BYTE *)a2 + 29);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v135 + 272LL))(*v135, v136);
  v139 = (__int64 *)sub_1800761D4(a1[7], &v149, 1LL, 1LL);
  v140 = a1 + 8;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 8, v139);
  v141 = v150;
  if ( v150 )
  {
    if ( _InterlockedExchangeAdd(v150 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v141)(v141);
      if ( _InterlockedExchangeAdd(v141 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v141 + 8LL))(v141);
    }
  }
  v148 = 0LL;
  v142 = a1[11];
  if ( v142 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v142 + 8), 1u);
    v142 = a1[11];
  }
  *(_QWORD *)&v148 = *v135;
  *((_QWORD *)&v148 + 1) = v142;
  sub_1800B3DF8(*v140, &v148);
  v143 = (volatile signed __int32 *)*((_QWORD *)&v148 + 1);
  if ( *((_QWORD *)&v148 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v148 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v143)(v143);
      if ( !_InterlockedDecrement(v143 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v143 + 8LL))(v143);
    }
  }
  sub_1800B4C30(*v140, 0LL);
  sub_1800B4C90(*v140, 0LL);
  if ( (_BYTE)v182 )
    sub_180063668(v181);
  v144 = v180;
  if ( v180 )
  {
    if ( _InterlockedExchangeAdd(v180 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v144)(v144);
      if ( _InterlockedExchangeAdd(v144 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v144 + 8LL))(v144);
    }
  }
  sub_180015C64((_QWORD *)a1[7], &v169, 1u);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, &v169);
  v145 = v170;
  if ( v170 )
  {
    if ( _InterlockedExchangeAdd(v170 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v145)(v145);
      if ( _InterlockedExchangeAdd(v145 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v145 + 8LL))(v145);
    }
  }
  qword_180268E48 = (__int64)a1;
  if ( (_BYTE)v184 )
    sub_180063668(v183);
  return 0LL;
}
