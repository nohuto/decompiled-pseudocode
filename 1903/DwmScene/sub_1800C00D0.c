/*
 * XREFs of sub_1800C00D0 @ 0x1800C00D0
 * Callers:
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 * Callees:
 *     unknown_libname_110 @ 0x18000D740 (unknown_libname_110.c)
 *     sub_18000E00C @ 0x18000E00C (sub_18000E00C.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_113 @ 0x18000F6D4 (unknown_libname_113.c)
 *     sub_18000F7B8 @ 0x18000F7B8 (sub_18000F7B8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180010D4C @ 0x180010D4C (sub_180010D4C.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_180018CC8 @ 0x180018CC8 (sub_180018CC8.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_1800835B4 @ 0x1800835B4 (sub_1800835B4.c)
 *     sub_1800847E4 @ 0x1800847E4 (sub_1800847E4.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     sub_180089A38 @ 0x180089A38 (sub_180089A38.c)
 *     sub_18008E1D4 @ 0x18008E1D4 (sub_18008E1D4.c)
 *     sub_18008F2F0 @ 0x18008F2F0 (sub_18008F2F0.c)
 *     sub_1800AC4BC @ 0x1800AC4BC (sub_1800AC4BC.c)
 *     sub_1800B10E4 @ 0x1800B10E4 (sub_1800B10E4.c)
 *     sub_1800B72A0 @ 0x1800B72A0 (sub_1800B72A0.c)
 *     sub_1800B8950 @ 0x1800B8950 (sub_1800B8950.c)
 *     sub_1800B8D84 @ 0x1800B8D84 (sub_1800B8D84.c)
 *     sub_1800B8F84 @ 0x1800B8F84 (sub_1800B8F84.c)
 *     sub_1800B9180 @ 0x1800B9180 (sub_1800B9180.c)
 *     sub_1800B937C @ 0x1800B937C (sub_1800B937C.c)
 *     sub_1800BB0EC @ 0x1800BB0EC (sub_1800BB0EC.c)
 *     sub_1800BC664 @ 0x1800BC664 (sub_1800BC664.c)
 *     sub_180101698 @ 0x180101698 (sub_180101698.c)
 *     sub_1801016D0 @ 0x1801016D0 (sub_1801016D0.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=51
__int64 __fastcall sub_1800C00D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // r14d
  int v15; // r13d
  __int64 *v16; // rbx
  unsigned __int64 v17; // r12
  __int64 *v18; // rax
  __int64 v19; // r15
  volatile signed __int32 *v20; // rsi
  __int64 *v21; // rax
  volatile signed __int32 *v22; // rsi
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rsi
  const void **v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  const void **v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  const void **v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // rax
  _DWORD *v55; // rbx
  _DWORD *v56; // rax
  __int64 *v57; // rax
  __int64 *v58; // rax
  _DWORD *v59; // rbx
  _DWORD *v60; // rax
  __int64 *v61; // rax
  __int64 *v62; // rax
  __int64 *v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // r8
  __int64 v66; // rbx
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 v69; // r8
  __m128 v70; // xmm6
  __int64 v71; // rbx
  __int64 v72; // r8
  __int64 *v73; // rax
  signed __int32 v75; // eax
  signed __int32 v76; // eax
  __int64 *v77; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v78; // [rsp+30h] [rbp-D8h]
  __int64 *v79; // [rsp+40h] [rbp-C8h]
  __int128 v80; // [rsp+48h] [rbp-C0h]
  int v81; // [rsp+58h] [rbp-B0h] BYREF
  int v82; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v83; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+68h] [rbp-A0h]
  __int64 v85; // [rsp+78h] [rbp-90h]
  int v86; // [rsp+80h] [rbp-88h]
  __m128 *v87[2]; // [rsp+88h] [rbp-80h] BYREF
  __m128 *v88[2]; // [rsp+98h] [rbp-70h] BYREF
  __m128 *v89[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-48h]
  __int64 v92; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v94; // [rsp+D8h] [rbp-30h] BYREF
  int v95; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v96; // [rsp+E4h] [rbp-24h] BYREF
  int v97; // [rsp+ECh] [rbp-1Ch]
  unsigned __int64 v98; // [rsp+F0h] [rbp-18h] BYREF
  int v99; // [rsp+F8h] [rbp-10h]
  __int64 v100; // [rsp+108h] [rbp+0h] BYREF
  int v101; // [rsp+110h] [rbp+8h]
  __int64 v102; // [rsp+118h] [rbp+10h] BYREF
  int v103; // [rsp+120h] [rbp+18h]
  __int64 v104; // [rsp+128h] [rbp+20h] BYREF
  int v105; // [rsp+130h] [rbp+28h]
  __int64 v106; // [rsp+138h] [rbp+30h] BYREF
  int v107; // [rsp+140h] [rbp+38h]
  __int64 v108; // [rsp+148h] [rbp+40h] BYREF
  int v109; // [rsp+150h] [rbp+48h]
  __int64 v110; // [rsp+158h] [rbp+50h] BYREF
  int v111; // [rsp+160h] [rbp+58h]
  __int64 v112; // [rsp+168h] [rbp+60h] BYREF
  int v113; // [rsp+170h] [rbp+68h]
  __int64 v114; // [rsp+178h] [rbp+70h] BYREF
  int v115; // [rsp+180h] [rbp+78h]
  __int64 v116[3]; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v117; // [rsp+1A0h] [rbp+98h]
  _QWORD v118[3]; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned __int64 v119; // [rsp+1C0h] [rbp+B8h]
  _QWORD v120[3]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned __int64 v121; // [rsp+1E0h] [rbp+D8h]
  _QWORD v122[3]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v123; // [rsp+200h] [rbp+F8h]
  _QWORD v124[3]; // [rsp+208h] [rbp+100h] BYREF
  unsigned __int64 v125; // [rsp+220h] [rbp+118h]
  __int64 v126[4]; // [rsp+228h] [rbp+120h] BYREF
  _QWORD v127[3]; // [rsp+248h] [rbp+140h] BYREF
  unsigned __int64 v128; // [rsp+260h] [rbp+158h]
  __int64 v129[2]; // [rsp+268h] [rbp+160h] BYREF
  __m128i v130; // [rsp+278h] [rbp+170h]
  __int64 v131[4]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v132[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __m128i v133; // [rsp+2B8h] [rbp+1B0h]
  __int64 v134[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v135[2]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __m128i v136; // [rsp+2F8h] [rbp+1F0h]
  __int64 v137[4]; // [rsp+308h] [rbp+200h] BYREF
  __int64 v138[4]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v139[4]; // [rsp+348h] [rbp+240h] BYREF
  __int64 v140[4]; // [rsp+368h] [rbp+260h] BYREF
  __int128 Src; // [rsp+388h] [rbp+280h] BYREF
  __int128 v142; // [rsp+398h] [rbp+290h]
  __int64 v143[2]; // [rsp+3A8h] [rbp+2A0h] BYREF
  __m128i si128; // [rsp+3B8h] [rbp+2B0h]
  __int64 v145[2]; // [rsp+3C8h] [rbp+2C0h] BYREF
  __m128i v146; // [rsp+3D8h] [rbp+2D0h]
  __int64 v147[5]; // [rsp+3E8h] [rbp+2E0h] BYREF
  __int64 v148; // [rsp+410h] [rbp+308h] BYREF
  volatile signed __int32 *v149; // [rsp+418h] [rbp+310h]
  __int64 v150; // [rsp+420h] [rbp+318h] BYREF
  volatile signed __int32 *v151; // [rsp+428h] [rbp+320h]
  _QWORD v152[2]; // [rsp+430h] [rbp+328h] BYREF
  _QWORD v153[2]; // [rsp+440h] [rbp+338h] BYREF
  _QWORD v154[3]; // [rsp+450h] [rbp+348h] BYREF
  __int128 v155; // [rsp+468h] [rbp+360h] BYREF
  __m128 v156; // [rsp+478h] [rbp+370h] BYREF
  _QWORD v157[2]; // [rsp+488h] [rbp+380h] BYREF
  __m128 v158; // [rsp+498h] [rbp+390h] BYREF
  __int64 v159; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v160; // [rsp+4B8h] [rbp+3B0h] BYREF
  __int64 v161; // [rsp+4C8h] [rbp+3C0h] BYREF
  _QWORD v162[2]; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int64 v163; // [rsp+4E8h] [rbp+3E0h] BYREF
  volatile signed __int32 *v164; // [rsp+4F0h] [rbp+3E8h]
  _QWORD v165[3]; // [rsp+4F8h] [rbp+3F0h] BYREF
  unsigned __int64 v166; // [rsp+510h] [rbp+408h]
  int v167[3]; // [rsp+518h] [rbp+410h] BYREF
  int v168[3]; // [rsp+524h] [rbp+41Ch] BYREF
  int v169[4]; // [rsp+530h] [rbp+428h] BYREF
  __int64 v170[2]; // [rsp+540h] [rbp+438h] BYREF
  __int64 v171[2]; // [rsp+550h] [rbp+448h] BYREF
  __int64 v172[2]; // [rsp+560h] [rbp+458h] BYREF
  __int64 v173[2]; // [rsp+570h] [rbp+468h] BYREF
  __int128 v174; // [rsp+580h] [rbp+478h] BYREF
  __int128 v175; // [rsp+590h] [rbp+488h]
  __int128 v176; // [rsp+5A0h] [rbp+498h] BYREF
  __int128 v177; // [rsp+5B0h] [rbp+4A8h]
  __int128 v178; // [rsp+5C0h] [rbp+4B8h] BYREF
  __int64 v179[2]; // [rsp+5D0h] [rbp+4C8h] BYREF
  __int128 v180; // [rsp+5E0h] [rbp+4D8h]
  _BYTE v181[16]; // [rsp+5F0h] [rbp+4E8h] BYREF
  char v182[16]; // [rsp+600h] [rbp+4F8h] BYREF
  char v183[16]; // [rsp+610h] [rbp+508h] BYREF

  v147[4] = -2LL;
  v79 = a2;
  v180 = 0LL;
  sub_18001110C(v179, (__int64)&qword_180258808);
  v77 = v138;
  v123 = 15LL;
  LOBYTE(v122[0]) = 0;
  v122[2] = 3LL;
  memmove(v122, &unk_1801F482C, 3uLL);
  BYTE3(v122[0]) = 0;
  v138[2] = 0LL;
  v138[3] = 0LL;
  sub_18001110C(v138, (__int64)v179);
  v3 = *a2;
  v4 = sub_1800835B4(v122);
  sub_180089A38(v3, (__int64)v181, v4, v138);
  if ( v123 >= 0x10 )
  {
    v5 = v122[0];
    if ( v123 + 1 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v122[0] - 8LL);
      if ( (unsigned __int64)(v122[0] - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v123 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v5);
  }
  v77 = v139;
  v121 = 15LL;
  LOBYTE(v120[0]) = 0;
  v120[2] = 4LL;
  memmove(v120, "Fill", 4uLL);
  BYTE4(v120[0]) = 0;
  v139[2] = 0LL;
  v139[3] = 0LL;
  sub_18001110C(v139, (__int64)v179);
  v6 = *a2;
  v7 = sub_1800835B4(v120);
  sub_180089A38(v6, (__int64)v182, v7, v139);
  if ( v121 >= 0x10 )
  {
    v8 = v120[0];
    if ( v121 + 1 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v120[0] - 8LL);
      if ( (unsigned __int64)(v120[0] - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v121 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  v77 = v140;
  v119 = 15LL;
  LOBYTE(v118[0]) = 0;
  v118[2] = 4LL;
  memmove(v118, "Back", 4uLL);
  BYTE4(v118[0]) = 0;
  v140[2] = 0LL;
  v140[3] = 0LL;
  sub_18001110C(v140, (__int64)v179);
  v9 = *a2;
  v10 = sub_1800835B4(v118);
  sub_180089A38(v9, (__int64)v183, v10, v140);
  v11 = v119;
  if ( v119 >= 0x10 )
  {
    v12 = v118[0];
    if ( v119 + 1 >= 0x1000 )
    {
      v12 = *(_QWORD *)(v118[0] - 8LL);
      if ( (unsigned __int64)(v118[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v119 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  v13 = sub_1800BB0EC(*a2, v11);
  v14 = 0;
  v15 = 3;
  v16 = (__int64 *)(v13 + 136);
  v17 = (unsigned __int64)&v181[-v13];
  do
  {
    v18 = sub_18000F7B8(*(__int64 *)((char *)v16 + v17 - 136), &v150);
    v19 = 16LL * v14;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v19 + v13 + 8), v18);
    v20 = v151;
    if ( v151 )
    {
      if ( _InterlockedExchangeAdd(v151 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    v21 = sub_1800B8D84(*(__int64 *)((char *)v16 + v17 - 136), &v148);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v19 + v13 + 56), v21);
    v22 = v149;
    if ( v149 )
    {
      if ( _InterlockedExchangeAdd(v149 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    v23 = sub_1800B937C(*(__int64 *)((char *)v16 + v17 - 136), &v163);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v19 + v13 + 136), v23);
    v24 = v164;
    if ( v164 )
    {
      if ( _InterlockedExchangeAdd(v164 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    sub_1801016D0(*v16, 1LL);
    sub_18000E00C(v165, v14);
    v25 = sub_180056944(v165, 0LL, "ShadowMap", 9uLL);
    Src = *(_OWORD *)v25;
    v142 = *((_OWORD *)v25 + 1);
    v25[2] = 0LL;
    v25[3] = (const void *)15;
    *(_BYTE *)v25 = 0;
    sub_180011714((__int64 *)(*v16 + 24), (__int64 *)&Src);
    v26 = 4096LL;
    if ( *((_QWORD *)&v142 + 1) >= 0x10uLL )
    {
      v27 = Src;
      if ( (unsigned __int64)(*((_QWORD *)&v142 + 1) + 1LL) >= 0x1000 )
      {
        v28 = *((_QWORD *)&v142 + 1) + 40LL;
        v27 = *(_QWORD *)(Src - 8);
        if ( (unsigned __int64)(Src - v27 - 8) > 0x1F )
          goto LABEL_64;
      }
      j_j__o_free(v27);
    }
    if ( v166 >= 0x10 )
    {
      v29 = v165[0];
      if ( v166 + 1 >= 0x1000 )
      {
        v30 = v166 + 40;
        v29 = *(_QWORD *)(v165[0] - 8LL);
        if ( (unsigned __int64)(v165[0] - v29 - 8) > 0x1F )
          goto LABEL_65;
      }
      j_j__o_free(v29);
    }
    sub_1800AC4BC(*v16, (__int64)&unk_1802587A8);
    sub_1800B10E4(*v16, v15);
    sub_18000E00C(v124, v14);
    v31 = sub_180056944(v124, 0LL, "Global/ShadowBuffer", 0x13uLL);
    v177 = 0uLL;
    v176 = *(_OWORD *)v31;
    v177 = *((_OWORD *)v31 + 1);
    v31[2] = 0LL;
    v31[3] = (const void *)15;
    *(_BYTE *)v31 = 0;
    if ( v125 >= 0x10 )
    {
      v32 = v124[0];
      if ( v125 + 1 >= 0x1000 )
      {
        v33 = v125 + 40;
        v32 = *(_QWORD *)(v124[0] - 8LL);
        if ( (unsigned __int64)(v124[0] - v32 - 8) > 0x1F )
          goto LABEL_66;
      }
      j_j__o_free(v32);
    }
    v124[2] = 0LL;
    v125 = 15LL;
    LOBYTE(v124[0]) = 0;
    sub_18000E00C(v127, v14);
    v34 = sub_180056944(v127, 0LL, "Global/ColoredShadowBuffer", 0x1AuLL);
    v175 = 0uLL;
    v174 = *(_OWORD *)v34;
    v175 = *((_OWORD *)v34 + 1);
    v34[2] = 0LL;
    v34[3] = (const void *)15;
    *(_BYTE *)v34 = 0;
    if ( v128 >= 0x10 )
    {
      v35 = v127[0];
      if ( v128 + 1 >= 0x1000 )
      {
        v36 = v128 + 40;
        v35 = *(_QWORD *)(v127[0] - 8LL);
        if ( (unsigned __int64)(v127[0] - v35 - 8) > 0x1F )
          goto LABEL_67;
      }
      j_j__o_free(v35);
    }
    v127[2] = 0LL;
    v128 = 15LL;
    LOBYTE(v127[0]) = 0;
    sub_180101698(*v16, &v176, &v174);
    if ( *((_QWORD *)&v175 + 1) >= 0x10uLL )
    {
      v37 = v174;
      if ( (unsigned __int64)(*((_QWORD *)&v175 + 1) + 1LL) >= 0x1000 )
      {
        v38 = *((_QWORD *)&v175 + 1) + 40LL;
        v37 = *(_QWORD *)(v174 - 8);
        if ( (unsigned __int64)(v174 - v37 - 8) > 0x1F )
          goto LABEL_68;
      }
      j_j__o_free(v37);
    }
    *(_QWORD *)&v175 = 0LL;
    *((_QWORD *)&v175 + 1) = 15LL;
    LOBYTE(v174) = 0;
    if ( *((_QWORD *)&v177 + 1) >= 0x10uLL )
    {
      v39 = v176;
      if ( (unsigned __int64)(*((_QWORD *)&v177 + 1) + 1LL) >= 0x1000 )
      {
        v40 = *((_QWORD *)&v177 + 1) + 40LL;
        v39 = *(_QWORD *)(v176 - 8);
        if ( (unsigned __int64)(v176 - v39 - 8) > 0x1F )
          goto LABEL_69;
      }
      j_j__o_free(v39);
    }
    ++v14;
    --v15;
    v16 += 2;
  }
  while ( v15 > 0 );
  v83 = 0LL;
  v84 = 0LL;
  v41 = *(_QWORD *)(v13 + 16);
  if ( v41 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
    v41 = *(_QWORD *)(v13 + 16);
  }
  v42 = *(_QWORD *)(v13 + 8);
  v26 = v42;
  v83 = v42;
  v84 = v41;
  v92 = 0LL;
  v93 = 0LL;
  v43 = *(_QWORD *)(v13 + 32);
  if ( v43 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
    v43 = *(_QWORD *)(v13 + 32);
    v26 = v83;
  }
  v92 = *(_QWORD *)(v13 + 24);
  v93 = v43;
  v90 = 0LL;
  v91 = 0LL;
  v44 = *(_QWORD *)(v13 + 48);
  if ( v44 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
    v44 = *(_QWORD *)(v13 + 48);
    v26 = v83;
  }
  v90 = *(_QWORD *)(v13 + 40);
  v91 = v44;
  v117 = 15LL;
  LOBYTE(v116[0]) = 0;
  v17 = 3LL;
  v116[2] = 3LL;
  memmove(v116, &unk_1801F4984, 3uLL);
  BYTE3(v116[0]) = 0;
  sub_180011714((__int64 *)(v42 + 24), v116);
  if ( v117 >= 0x10 )
  {
    v45 = v116[0];
    if ( v117 + 1 >= 0x1000 )
    {
      v45 = *(_QWORD *)(v116[0] - 8);
      if ( (unsigned __int64)(v116[0] - v45 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v45, v117 + 40);
LABEL_64:
        o__invalid_parameter_noinfo_noreturn(v27, v28);
LABEL_65:
        o__invalid_parameter_noinfo_noreturn(v29, v30);
LABEL_66:
        o__invalid_parameter_noinfo_noreturn(v32, v33);
LABEL_67:
        o__invalid_parameter_noinfo_noreturn(v35, v36);
LABEL_68:
        o__invalid_parameter_noinfo_noreturn(v37, v38);
LABEL_69:
        o__invalid_parameter_noinfo_noreturn(v39, v40);
      }
    }
    j_j__o_free(v45);
  }
  *(_BYTE *)(v26 + 72) = 1;
  sub_18008F2F0(v26, 1);
  v94 = 0x40153B12BFDE17FALL;
  v95 = -1074818325;
  v46 = sub_18008E1D4(v167, COERCE_DOUBLE(1059061760LL), &v94);
  v85 = *(_QWORD *)v46;
  v86 = v46[2];
  v78 = 0LL;
  v47 = *(_QWORD *)(v26 + 64);
  if ( v47 )
  {
    while ( 1 )
    {
      v75 = *(_DWORD *)(v47 + 8);
      if ( !v75 )
        break;
      if ( v75 == _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 8), v75 + 1, v75) )
      {
        v48 = *(_QWORD *)(v26 + 56);
        *(_QWORD *)&v78 = v48;
        *((_QWORD *)&v78 + 1) = *(_QWORD *)(v26 + 64);
        goto LABEL_73;
      }
    }
  }
  v48 = v78;
LABEL_73:
  sub_180087414(v48);
  *(_QWORD *)(v48 + 144) = v85;
  *(_DWORD *)(v48 + 152) = v86;
  v49 = _InterlockedIncrement64(&qword_180258748);
  v50 = v78;
  *(_QWORD *)(v78 + 208) = v49;
  v51 = *(_QWORD *)(v50 + 216);
  if ( v49 >= v51 )
    v51 = v49;
  *(_QWORD *)(v50 + 216) = v51;
  if ( *((_QWORD *)&v78 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v78 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v78 + 1))(*((_QWORD *)&v78 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v78 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v78 + 1) + 8LL))(*((_QWORD *)&v78 + 1));
    }
  }
  v100 = qword_18025DF28;
  v101 = dword_18025DF30;
  v102 = qword_18026B298;
  v103 = dword_18026B2A0;
  v80 = 0LL;
  v52 = *(_QWORD *)(v26 + 64);
  if ( v52 )
  {
    while ( 1 )
    {
      v76 = *(_DWORD *)(v52 + 8);
      if ( !v76 )
        break;
      if ( v76 == _InterlockedCompareExchange((volatile signed __int32 *)(v52 + 8), v76 + 1, v76) )
      {
        *(_QWORD *)&v80 = *(_QWORD *)(v26 + 56);
        v53 = *(_QWORD *)(v26 + 64);
        *((_QWORD *)&v80 + 1) = v53;
        goto LABEL_81;
      }
    }
  }
  v53 = *((_QWORD *)&v80 + 1);
LABEL_81:
  sub_1800847E4(v80, (unsigned __int64 *)&v102, (__int64)&v100);
  if ( v53 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v80 + 1))(*((_QWORD *)&v80 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v80 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v80 + 1) + 8LL))(*((_QWORD *)&v80 + 1));
    }
  }
  v54 = v83;
  *(_DWORD *)(v83 + 104) = 1092370432;
  *(_DWORD *)(v54 + 116) = 1028443341;
  v126[3] = 15LL;
  LOBYTE(v126[0]) = 0;
  v126[2] = 4LL;
  memmove(v126, "Fill", 4uLL);
  BYTE4(v126[0]) = 0;
  v55 = (_DWORD *)v92;
  sub_180011714((__int64 *)(v92 + 24), v126);
  std::string::_Tidy_deallocate(v126);
  *(_BYTE *)(v92 + 72) = 1;
  sub_18008F2F0((__int64)v55, 1);
  v55[22] = 1060487823;
  v55[23] = 1061997773;
  v55[24] = 1065151889;
  v55[25] = 1065353216;
  v96 = 0x4011700C3FE02A60LL;
  v97 = -1071387053;
  v56 = sub_18008E1D4(v168, COERCE_DOUBLE(1059061760LL), &v96);
  v104 = *(_QWORD *)v56;
  v105 = v56[2];
  v57 = sub_180018CC8((__int64)v55, v157);
  sub_180010D4C(*v57, &v104);
  unknown_libname_110(v157);
  v106 = qword_18025DF28;
  v107 = dword_18025DF30;
  v108 = qword_18026B298;
  v109 = dword_18026B2A0;
  v58 = sub_180018CC8((__int64)v55, v152);
  sub_1800847E4(*v58, (unsigned __int64 *)&v108, (__int64)&v106);
  unknown_libname_110(v152);
  v55[26] = 1086849024;
  v55[29] = 1036831949;
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v143[0]) = 0;
  unknown_libname_113(v143, "Back");
  v59 = (_DWORD *)v90;
  sub_180011714((__int64 *)(v90 + 24), v143);
  std::string::_Tidy_deallocate(v143);
  *(_BYTE *)(v90 + 72) = 1;
  sub_18008F2F0((__int64)v59, 1);
  v59[22] = 1063144775;
  v59[23] = 1060773036;
  v59[24] = 1065353216;
  v59[25] = 1065353216;
  v98 = 0x4025238B3FD6B197LL;
  v99 = 1069927670;
  v60 = sub_18008E1D4(v169, COERCE_DOUBLE(1059061760LL), &v98);
  v110 = *(_QWORD *)v60;
  v111 = v60[2];
  v61 = sub_180018CC8((__int64)v59, v153);
  sub_180010D4C(*v61, &v110);
  unknown_libname_110(v153);
  v112 = qword_18025DF28;
  v113 = dword_18025DF30;
  v114 = qword_18026B298;
  v115 = dword_18026B2A0;
  v62 = sub_180018CC8((__int64)v59, v154);
  sub_1800847E4(*v62, (unsigned __int64 *)&v114, (__int64)&v112);
  unknown_libname_110(v154);
  v59[26] = 1078460416;
  v59[29] = 1045220557;
  v171[0] = 0LL;
  v171[1] = 0LL;
  v77 = v137;
  v146 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v145[0]) = 0;
  unknown_libname_113(v145, "LightProbe0");
  v137[2] = 0LL;
  v137[3] = 0LL;
  sub_18001110C(v137, (__int64)&qword_180258808);
  v63 = v79;
  v64 = *v79;
  v65 = sub_1800835B4(v145);
  sub_180089A38(v64, (__int64)v171, v65, v137);
  std::string::_Tidy_deallocate(v145);
  v172[0] = 0LL;
  v172[1] = 0LL;
  v79 = v147;
  v130 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v129[0]) = 0;
  unknown_libname_113(v129, "LightProbe1");
  v147[2] = 0LL;
  v147[3] = 0LL;
  sub_18001110C(v147, (__int64)&qword_180258808);
  v66 = *v63;
  v67 = sub_1800835B4(v129);
  sub_180089A38(v66, (__int64)v172, v67, v147);
  std::string::_Tidy_deallocate(v129);
  v173[0] = 0LL;
  v173[1] = 0LL;
  v79 = v131;
  v133 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v132[0]) = 0;
  unknown_libname_113(v132, "LightProbe2");
  v131[2] = 0LL;
  v131[3] = 0LL;
  sub_18001110C(v131, (__int64)&qword_180258808);
  v68 = *v63;
  v69 = sub_1800835B4(v132);
  sub_180089A38(v68, (__int64)v173, v69, v131);
  std::string::_Tidy_deallocate(v132);
  v89[0] = 0LL;
  v89[1] = 0LL;
  sub_1800B9180(v171[0], v89);
  v88[0] = 0LL;
  v88[1] = 0LL;
  sub_1800B9180(v172[0], v88);
  v87[0] = 0LL;
  v87[1] = 0LL;
  sub_1800B9180(v173[0], v87);
  v178 = xmmword_1801F5E30;
  sub_1800B72A0((__m128 *)&v178, COERCE_DOUBLE(1061997773LL));
  v70 = (__m128)v178;
  v155 = v178;
  sub_1800B8950(v89[0], (__m128 *)&v155);
  v156 = v70;
  sub_1800B8950(v88[0], &v156);
  v158 = v70;
  sub_1800B8950(v87[0], &v158);
  v81 = 0;
  sub_1800BC664((__int64 **)(v13 + 104), (__int64)&v159, &v81);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v159 + 40), v89);
  v82 = 1;
  sub_1800BC664((__int64 **)(v13 + 104), (__int64)&v160, &v82);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v160 + 40), v88);
  LODWORD(v77) = 2;
  sub_1800BC664((__int64 **)(v13 + 104), (__int64)&v161, &v77);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v161 + 40), v87);
  v170[0] = 0LL;
  v170[1] = 0LL;
  v79 = v134;
  v136 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v135[0]) = 0;
  unknown_libname_113(v135, "ColorTransform");
  v134[2] = 0LL;
  v134[3] = 0LL;
  sub_18001110C(v134, (__int64)&qword_180258808);
  v71 = *v63;
  v72 = sub_1800835B4(v135);
  sub_180089A38(v71, (__int64)v170, v72, v134);
  std::string::_Tidy_deallocate(v135);
  v73 = sub_1800B8F84(v170[0], v162);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v13 + 120), v73);
  unknown_libname_110(v162);
  sub_180105E5C(*(_QWORD *)(v13 + 120), 8LL);
  unknown_libname_110(v170);
  unknown_libname_110(v87);
  unknown_libname_110(v88);
  unknown_libname_110(v89);
  unknown_libname_110(v173);
  unknown_libname_110(v172);
  unknown_libname_110(v171);
  unknown_libname_110(&v90);
  unknown_libname_110(&v92);
  unknown_libname_110(&v83);
  `eh vector destructor iterator'(v181, 0x10uLL, v17, (void (*)(void *))unknown_libname_110);
  return unknown_libname_116(v179);
}
