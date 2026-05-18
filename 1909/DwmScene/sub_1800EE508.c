/*
 * XREFs of sub_1800EE508 @ 0x1800EE508
 * Callers:
 *     sub_1800EE370 @ 0x1800EE370 (sub_1800EE370.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A6168 @ 0x1800A6168 (sub_1800A6168.c)
 *     sub_1800A641C @ 0x1800A641C (sub_1800A641C.c)
 *     sub_1800A8660 @ 0x1800A8660 (sub_1800A8660.c)
 *     sub_1800BCEE0 @ 0x1800BCEE0 (sub_1800BCEE0.c)
 *     sub_1800F88D0 @ 0x1800F88D0 (sub_1800F88D0.c)
 *     sub_1800F9530 @ 0x1800F9530 (sub_1800F9530.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=38
__int64 __fastcall sub_1800EE508(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  __m128i *v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rsi
  __int64 v17; // rax
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rax
  volatile signed __int32 *v22; // rsi
  __int64 v23; // rax
  __int64 *v24; // rax
  volatile signed __int32 *v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // rax
  volatile signed __int32 *v28; // rsi
  __int64 v29; // rax
  __int64 *v30; // rax
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD v35[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h]
  _QWORD *v41[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v42[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v43[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v44[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v45[2]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v46[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD *v47[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD *v48[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD *v49[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v50[2]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v51; // [rsp+128h] [rbp+20h]
  _QWORD v52[2]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v53; // [rsp+148h] [rbp+40h]
  _QWORD v54[2]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v55; // [rsp+168h] [rbp+60h]
  int v56; // [rsp+178h] [rbp+70h] BYREF
  __int64 v57; // [rsp+180h] [rbp+78h]
  __int128 v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  int v61; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  __int128 v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C8h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+C8h]
  int v66; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v67; // [rsp+1E0h] [rbp+D8h]
  __int128 v68; // [rsp+1E8h] [rbp+E0h]
  __int64 v69; // [rsp+1F8h] [rbp+F0h]
  __int64 v70; // [rsp+200h] [rbp+F8h]
  int v71; // [rsp+208h] [rbp+100h] BYREF
  __int64 v72; // [rsp+210h] [rbp+108h]
  __int128 v73; // [rsp+218h] [rbp+110h]
  __int64 v74; // [rsp+228h] [rbp+120h]
  __int64 v75; // [rsp+230h] [rbp+128h]
  int v76; // [rsp+238h] [rbp+130h] BYREF
  __int64 v77; // [rsp+240h] [rbp+138h]
  __int128 v78; // [rsp+248h] [rbp+140h]
  __int64 v79; // [rsp+258h] [rbp+150h]
  __int64 v80; // [rsp+260h] [rbp+158h]
  int v81; // [rsp+268h] [rbp+160h] BYREF
  __int64 v82; // [rsp+270h] [rbp+168h]
  __int128 v83; // [rsp+278h] [rbp+170h]
  __int64 v84; // [rsp+288h] [rbp+180h]
  __int64 v85; // [rsp+290h] [rbp+188h]
  int v86; // [rsp+298h] [rbp+190h] BYREF
  __int64 v87; // [rsp+2A0h] [rbp+198h]
  __int128 v88; // [rsp+2A8h] [rbp+1A0h]
  __int64 v89; // [rsp+2B8h] [rbp+1B0h]
  __int64 v90; // [rsp+2C0h] [rbp+1B8h]
  int v91; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v92; // [rsp+2D0h] [rbp+1C8h]
  __int128 v93; // [rsp+2D8h] [rbp+1D0h]
  __int64 v94; // [rsp+2E8h] [rbp+1E0h]
  __int64 v95; // [rsp+2F0h] [rbp+1E8h]
  __int64 *v96; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 *v97; // [rsp+300h] [rbp+1F8h] BYREF
  __int64 *v98; // [rsp+308h] [rbp+200h] BYREF
  __int64 *v99; // [rsp+310h] [rbp+208h] BYREF
  __m128i v100; // [rsp+318h] [rbp+210h] BYREF
  __m128i v101; // [rsp+328h] [rbp+220h] BYREF
  __m128i v102; // [rsp+338h] [rbp+230h] BYREF
  __m128i v103; // [rsp+348h] [rbp+240h] BYREF
  __m128i v104; // [rsp+358h] [rbp+250h] BYREF
  __m128i v105; // [rsp+368h] [rbp+260h] BYREF
  __m128i v106; // [rsp+378h] [rbp+270h] BYREF
  __m128i v107; // [rsp+388h] [rbp+280h] BYREF
  __m128i v108; // [rsp+398h] [rbp+290h] BYREF
  __int64 v109; // [rsp+3A8h] [rbp+2A0h] BYREF
  volatile signed __int32 *v110; // [rsp+3B0h] [rbp+2A8h]
  __int64 v111; // [rsp+3B8h] [rbp+2B0h] BYREF
  volatile signed __int32 *v112; // [rsp+3C0h] [rbp+2B8h]
  __int64 v113; // [rsp+3C8h] [rbp+2C0h] BYREF
  volatile signed __int32 *v114; // [rsp+3D0h] [rbp+2C8h]
  __int64 v115; // [rsp+3D8h] [rbp+2D0h] BYREF
  volatile signed __int32 *v116; // [rsp+3E0h] [rbp+2D8h]
  __int64 v117; // [rsp+3E8h] [rbp+2E0h] BYREF
  volatile signed __int32 *v118; // [rsp+3F0h] [rbp+2E8h]
  __int64 v119; // [rsp+3F8h] [rbp+2F0h] BYREF
  volatile signed __int32 *v120; // [rsp+400h] [rbp+2F8h]
  __int64 v121; // [rsp+408h] [rbp+300h] BYREF
  volatile signed __int32 *v122; // [rsp+410h] [rbp+308h]
  __int64 v123; // [rsp+418h] [rbp+310h]
  __int64 *v124; // [rsp+420h] [rbp+318h]
  __int64 *v125; // [rsp+428h] [rbp+320h] BYREF
  __int64 v126; // [rsp+430h] [rbp+328h] BYREF
  volatile signed __int32 *v127; // [rsp+438h] [rbp+330h]
  __int64 *v128; // [rsp+440h] [rbp+338h] BYREF
  __int64 *v129; // [rsp+448h] [rbp+340h] BYREF
  __int64 *v130; // [rsp+450h] [rbp+348h] BYREF
  __int64 *v131; // [rsp+458h] [rbp+350h] BYREF
  _QWORD v132[2]; // [rsp+468h] [rbp+360h] BYREF
  __int128 v133; // [rsp+478h] [rbp+370h]
  __int64 v134; // [rsp+488h] [rbp+380h] BYREF
  __int128 v135; // [rsp+498h] [rbp+390h]
  _QWORD v136[2]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int128 v137; // [rsp+4B8h] [rbp+3B0h]
  __int64 v138; // [rsp+4C8h] [rbp+3C0h] BYREF
  __int128 v139; // [rsp+4D8h] [rbp+3D0h]
  _QWORD v140[2]; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int128 v141; // [rsp+4F8h] [rbp+3F0h]
  __int64 v142; // [rsp+508h] [rbp+400h] BYREF
  __int128 v143; // [rsp+518h] [rbp+410h]
  _QWORD v144[2]; // [rsp+528h] [rbp+420h] BYREF
  __int128 v145; // [rsp+538h] [rbp+430h]
  __int64 v146; // [rsp+548h] [rbp+440h] BYREF
  __int128 v147; // [rsp+558h] [rbp+450h]
  __int64 v148; // [rsp+568h] [rbp+460h] BYREF
  __int128 v149; // [rsp+578h] [rbp+470h]
  _QWORD v150[2]; // [rsp+588h] [rbp+480h] BYREF
  __int128 v151; // [rsp+598h] [rbp+490h]
  __int64 v152; // [rsp+5A8h] [rbp+4A0h] BYREF
  __int128 v153; // [rsp+5B8h] [rbp+4B0h]
  __int64 v154; // [rsp+5C8h] [rbp+4C0h] BYREF
  __int128 v155; // [rsp+5D8h] [rbp+4D0h]
  _QWORD v156[2]; // [rsp+5E8h] [rbp+4E0h] BYREF
  __int128 v157; // [rsp+5F8h] [rbp+4F0h]
  __int64 v158; // [rsp+608h] [rbp+500h] BYREF
  __int128 v159; // [rsp+618h] [rbp+510h]
  __int64 v160; // [rsp+628h] [rbp+520h] BYREF
  __int128 v161; // [rsp+638h] [rbp+530h]
  __int64 v162; // [rsp+648h] [rbp+540h] BYREF
  __int128 v163; // [rsp+658h] [rbp+550h]
  __int64 *v164[2]; // [rsp+668h] [rbp+560h] BYREF
  __int64 *v165[2]; // [rsp+678h] [rbp+570h] BYREF
  __int64 *v166[2]; // [rsp+688h] [rbp+580h] BYREF
  __int64 *v167[2]; // [rsp+698h] [rbp+590h] BYREF
  __int64 *v168[2]; // [rsp+6A8h] [rbp+5A0h] BYREF
  __int64 *v169[2]; // [rsp+6B8h] [rbp+5B0h] BYREF
  __int64 *v170[2]; // [rsp+6C8h] [rbp+5C0h] BYREF
  __int64 *v171[2]; // [rsp+6D8h] [rbp+5D0h] BYREF
  __int64 *v172[2]; // [rsp+6E8h] [rbp+5E0h] BYREF
  __m128i v173; // [rsp+6F8h] [rbp+5F0h] BYREF
  __int64 v174; // [rsp+708h] [rbp+600h] BYREF

  v123 = -2LL;
  v169[0] = 0LL;
  v169[1] = 0LL;
  v51 = 0LL;
  sub_18000F444(v50, (__int64)&qword_18025D678);
  v173.m128i_i64[0] = (__int64)v50;
  v173.m128i_i64[1] = (__int64)v52;
  v101 = v173;
  sub_1800BCEE0(v169, &v101);
  `eh vector destructor iterator'(v50, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v170[0] = 0LL;
  v170[1] = 0LL;
  v133 = 0LL;
  sub_18000F444(v132, (__int64)&qword_18025D678);
  v135 = 0LL;
  sub_18000F444(&v134, (__int64)&qword_18025D6D8);
  v173.m128i_i64[0] = (__int64)v132;
  v173.m128i_i64[1] = (__int64)v136;
  v102 = v173;
  sub_1800BCEE0(v170, &v102);
  `eh vector destructor iterator'(v132, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v171[0] = 0LL;
  v171[1] = 0LL;
  v55 = 0LL;
  sub_18000F444(v54, (__int64)qword_18025D658);
  v173.m128i_i64[0] = (__int64)v54;
  v173.m128i_i64[1] = (__int64)&v56;
  v103 = v173;
  sub_1800BCEE0(v171, &v103);
  `eh vector destructor iterator'(v54, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v167[0] = 0LL;
  v167[1] = 0LL;
  v137 = 0LL;
  sub_18000F444(v136, (__int64)&qword_18025D678);
  v139 = 0LL;
  sub_18000F444(&v138, (__int64)qword_18025D658);
  v173.m128i_i64[0] = (__int64)v136;
  v173.m128i_i64[1] = (__int64)v140;
  v104 = v173;
  sub_1800BCEE0(v167, &v104);
  `eh vector destructor iterator'(v136, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v168[0] = 0LL;
  v168[1] = 0LL;
  v141 = 0LL;
  sub_18000F444(v140, (__int64)&qword_18025D678);
  v143 = 0LL;
  sub_18000F444(&v142, (__int64)&qword_18025D598);
  v173.m128i_i64[0] = (__int64)v140;
  v173.m128i_i64[1] = (__int64)v144;
  v100 = v173;
  sub_1800BCEE0(v168, &v100);
  `eh vector destructor iterator'(v140, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v166[0] = 0LL;
  v166[1] = 0LL;
  v145 = 0LL;
  sub_18000F444(v144, (__int64)&qword_18025D678);
  v147 = 0LL;
  sub_18000F444(&v146, (__int64)qword_18025D658);
  v149 = 0LL;
  sub_18000F444(&v148, (__int64)&qword_18025D5B8);
  v173.m128i_i64[0] = (__int64)v144;
  v173.m128i_i64[1] = (__int64)v150;
  v105 = v173;
  sub_1800BCEE0(v166, &v105);
  `eh vector destructor iterator'(v144, 0x20uLL, 3uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v172[0] = 0LL;
  v172[1] = 0LL;
  v157 = 0LL;
  sub_18000F444(v156, (__int64)&qword_18025D678);
  v159 = 0LL;
  sub_18000F444(&v158, (__int64)qword_18025D658);
  v161 = 0LL;
  sub_18000F444(&v160, (__int64)&qword_18025D598);
  v163 = 0LL;
  sub_18000F444(&v162, (__int64)&qword_18025D5B8);
  v173.m128i_i64[0] = (__int64)v156;
  v173.m128i_i64[1] = (__int64)v164;
  v106 = v173;
  sub_1800BCEE0(v172, &v106);
  `eh vector destructor iterator'(v156, 0x20uLL, 4uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v164[0] = 0LL;
  v164[1] = 0LL;
  v151 = 0LL;
  sub_18000F444(v150, (__int64)&qword_18025D678);
  v153 = 0LL;
  sub_18000F444(&v152, (__int64)qword_18025D658);
  v155 = 0LL;
  sub_18000F444(&v154, (__int64)&qword_18025D598);
  v173.m128i_i64[0] = (__int64)v150;
  v173.m128i_i64[1] = (__int64)v156;
  v107 = v173;
  sub_1800BCEE0(v164, &v107);
  `eh vector destructor iterator'(v150, 0x20uLL, 3uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A641C((__int64)v48);
  v4 = sub_1800A4298(a2, v48);
  sub_1800A641C((__int64)v49);
  v5 = sub_1800A4298(a2, v49);
  sub_1800A641C((__int64)v41);
  v36 = sub_1800A4298(a2, v41);
  sub_1800A641C((__int64)v42);
  v40 = sub_1800A4298(a2, v42);
  sub_1800A641C((__int64)v47);
  v38 = sub_1800A4298(a2, v47);
  sub_1800A641C((__int64)v46);
  v39 = sub_1800A4298(a2, v46);
  sub_1800A641C((__int64)v45);
  v6 = sub_1800A4298(a2, v45);
  sub_1800A641C((__int64)v44);
  v37 = sub_1800A4298(a2, v44);
  *(_OWORD *)&v35[1] = 0LL;
  v165[0] = 0LL;
  v165[1] = 0LL;
  v53 = 0LL;
  sub_18000F444(v52, (__int64)&qword_18025D6F8);
  v173.m128i_i64[0] = (__int64)v52;
  v173.m128i_i64[1] = (__int64)v54;
  v108 = v173;
  sub_1800BCEE0(v165, &v108);
  `eh vector destructor iterator'(v52, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A641C((__int64)v43);
  v173 = (__m128i)(unsigned __int64)sub_1800A4298(a2, v43);
  v7 = &v173;
  do
  {
    v8 = v7->m128i_i64[0];
    v9 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v109, v6 | v7->m128i_i64[0], 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v9);
    v10 = v110;
    if ( v110 )
    {
      if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    v11 = *(_QWORD *)(a1 + 112);
    v61 = 0;
    v62 = v11;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    sub_1800F9530(v35[1], &v61);
    sub_1800F88D0(v35[1], 15, 2, 1, 1);
    v12 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v111, v37 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v12);
    v13 = v112;
    if ( v112 )
    {
      if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v14 = *(_QWORD *)(a1 + 112);
    v66 = 0;
    v67 = v14;
    v68 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    sub_1800F9530(v35[1], &v66);
    sub_1800F88D0(v35[1], 15, 2, 1, 1);
    v15 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v113, v39 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v15);
    v16 = v114;
    if ( v114 )
    {
      if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v17 = *(_QWORD *)(a1 + 112);
    v71 = 0;
    v72 = v17;
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    sub_1800F9530(v35[1], &v71);
    sub_1800F88D0(v35[1], 15, 2, 1, 1);
    v18 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v115, v40 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v18);
    v19 = v116;
    if ( v116 )
    {
      if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    v20 = *(_QWORD *)(a1 + 112);
    v56 = 0;
    v57 = v20;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0LL;
    sub_1800F9530(v35[1], &v56);
    sub_1800F88D0(v35[1], 15, 2, 1, 1);
    v21 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v126, v38 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v21);
    v22 = v127;
    if ( v127 )
    {
      if ( _InterlockedExchangeAdd(v127 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    v23 = *(_QWORD *)(a1 + 112);
    v76 = 0;
    v77 = v23;
    v78 = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    sub_1800F9530(v35[1], &v76);
    sub_1800F88D0(v35[1], 15, 2, 3, 1);
    v24 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v117, v4 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v24);
    v25 = v118;
    if ( v118 )
    {
      if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
    v26 = *(_QWORD *)(a1 + 112);
    v81 = 0;
    v82 = v26;
    v83 = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    sub_1800F9530(v35[1], &v81);
    sub_1800F88D0(v35[1], 0, 2, 3, 1);
    v27 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v119, v36 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v27);
    v28 = v120;
    if ( v120 )
    {
      if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    v29 = *(_QWORD *)(a1 + 112);
    v86 = 0;
    v87 = v29;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    sub_1800F9530(v35[1], &v86);
    sub_1800F88D0(v35[1], 15, 2, 1, 1);
    v30 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v121, v5 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v35[1], v30);
    v31 = v122;
    if ( v122 )
    {
      if ( _InterlockedExchangeAdd(v122 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
    v32 = *(_QWORD *)(a1 + 112);
    v91 = 0;
    v92 = v32;
    v93 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    sub_1800F9530(v35[1], &v91);
    sub_1800F88D0(v35[1], 0, 2, 3, 1);
    v7 = (__m128i *)((char *)v7 + 8);
  }
  while ( v7 != (__m128i *)&v174 );
  v124 = (__int64 *)*v165[0];
  sub_1800A6168((__int64 ***)v165, &v125, v124, v165[0]);
  j_j__o_free(v165[0]);
  if ( v35[2] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35[2] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v33 = v35[2];
      (**(void (__fastcall ***)(_QWORD))v35[2])(v35[2]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35[2] + 8LL))(v35[2]);
    }
  }
  sub_1800A6168((__int64 ***)v164, &v128, *(__int64 **)v164[0], v164[0]);
  j_j__o_free(v164[0]);
  sub_1800A6168((__int64 ***)v172, &v129, *(__int64 **)v172[0], v172[0]);
  j_j__o_free(v172[0]);
  sub_1800A6168((__int64 ***)v166, &v130, *(__int64 **)v166[0], v166[0]);
  j_j__o_free(v166[0]);
  sub_1800A6168((__int64 ***)v168, &v131, *(__int64 **)v168[0], v168[0]);
  j_j__o_free(v168[0]);
  sub_1800A6168((__int64 ***)v167, &v96, *(__int64 **)v167[0], v167[0]);
  j_j__o_free(v167[0]);
  sub_1800A6168((__int64 ***)v171, &v97, *(__int64 **)v171[0], v171[0]);
  j_j__o_free(v171[0]);
  sub_1800A6168((__int64 ***)v170, &v98, *(__int64 **)v170[0], v170[0]);
  j_j__o_free(v170[0]);
  sub_1800A6168((__int64 ***)v169, &v99, *(__int64 **)v169[0], v169[0]);
  return j_j__o_free(v169[0]);
}
