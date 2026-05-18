/*
 * XREFs of sub_180113920 @ 0x180113920
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180067490 @ 0x180067490 (sub_180067490.c)
 *     sub_18006751C @ 0x18006751C (sub_18006751C.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_1800A51B0 @ 0x1800A51B0 (sub_1800A51B0.c)
 *     sub_1800F2C78 @ 0x1800F2C78 (sub_1800F2C78.c)
 *     sub_1800F57F4 @ 0x1800F57F4 (sub_1800F57F4.c)
 *     sub_1800F62EC @ 0x1800F62EC (sub_1800F62EC.c)
 *     sub_1801130B8 @ 0x1801130B8 (sub_1801130B8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
_QWORD *__fastcall sub_180113920(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  _QWORD *v6; // r12
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  int *v17; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rdi
  _QWORD *v21; // r14
  _QWORD *v22; // r13
  __int64 v23; // r12
  int *v24; // rax
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // edx
  int *v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  char v35; // al
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  signed __int32 v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  int *v42; // rcx
  int v43; // edx
  __int64 *v44; // rax
  unsigned __int16 v45; // r14
  volatile signed __int32 *v46; // rdi
  __int64 v47; // rcx
  int *v48; // rax
  int v49; // edx
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  int *v54; // rax
  int v55; // eax
  __int64 v56; // r13
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  signed __int32 v60; // eax
  volatile signed __int32 *v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // edx
  int *v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // edx
  int *v70; // rax
  int v71; // eax
  _DWORD *v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  signed __int32 v78; // eax
  volatile signed __int32 *v79; // rdi
  __int64 v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int128 v85; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v86; // [rsp+60h] [rbp-A0h]
  __int64 v87; // [rsp+68h] [rbp-98h]
  unsigned __int64 v88; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v89; // [rsp+78h] [rbp-88h] BYREF
  __int128 *v90; // [rsp+80h] [rbp-80h]
  unsigned __int64 v91; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v92; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v93; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v94; // [rsp+A0h] [rbp-60h] BYREF
  __int128 *v95; // [rsp+A8h] [rbp-58h]
  __int128 v96; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v97; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v98; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v99; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v100; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v101; // [rsp+100h] [rbp+0h] BYREF
  __int128 v102; // [rsp+110h] [rbp+10h] BYREF
  __int128 v103; // [rsp+120h] [rbp+20h] BYREF
  __int128 v104; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v105; // [rsp+140h] [rbp+40h]
  __int128 v106; // [rsp+150h] [rbp+50h] BYREF
  __int64 v107; // [rsp+160h] [rbp+60h] BYREF
  char v108; // [rsp+16Fh] [rbp+6Fh]
  __int64 v109; // [rsp+170h] [rbp+70h]
  unsigned __int64 v110; // [rsp+178h] [rbp+78h]
  __int64 v111; // [rsp+180h] [rbp+80h]
  __int64 v112; // [rsp+188h] [rbp+88h]
  __int64 v113; // [rsp+190h] [rbp+90h]
  __int64 v114; // [rsp+198h] [rbp+98h]
  __int128 v115; // [rsp+1A0h] [rbp+A0h]
  __int64 v116; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v117; // [rsp+1B8h] [rbp+B8h]
  __int64 v118; // [rsp+1C0h] [rbp+C0h]
  int v119; // [rsp+1C8h] [rbp+C8h] BYREF
  int v120; // [rsp+1D0h] [rbp+D0h] BYREF
  int v121; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v122; // [rsp+1E0h] [rbp+E0h] BYREF
  volatile signed __int32 *v123; // [rsp+1E8h] [rbp+E8h]
  _BYTE pExceptionObject[24]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v125[24]; // [rsp+208h] [rbp+108h] BYREF
  _BYTE v126[24]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v127[24]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v128; // [rsp+250h] [rbp+150h] BYREF
  __int64 v129; // [rsp+258h] [rbp+158h] BYREF
  unsigned __int64 v130; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 v131; // [rsp+268h] [rbp+168h] BYREF
  unsigned __int64 v132; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v133; // [rsp+278h] [rbp+178h] BYREF
  unsigned __int64 v134; // [rsp+280h] [rbp+180h] BYREF
  __int64 v135; // [rsp+288h] [rbp+188h] BYREF
  volatile signed __int32 *v136; // [rsp+290h] [rbp+190h]
  unsigned __int64 v137; // [rsp+298h] [rbp+198h] BYREF
  char v138[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v139; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v140[8]; // [rsp+3A0h] [rbp+2A0h] BYREF
  char v141; // [rsp+3A8h] [rbp+2A8h] BYREF

  v118 = -2LL;
  v87 = a4;
  v6 = (_QWORD *)a2;
  v105 = (_QWORD *)a2;
  v134 = a2;
  v8 = 16LL;
  v9 = &v139;
  do
  {
    *((_QWORD *)v9 - 1) = 0LL;
    *(_QWORD *)v9 = 0LL;
    v9 += 16;
    --v8;
  }
  while ( v8 );
  v10 = 16LL;
  v11 = &v141;
  do
  {
    *((_QWORD *)v11 - 1) = 0LL;
    *(_QWORD *)v11 = 0LL;
    v11 += 16;
    --v10;
  }
  while ( v10 );
  v12 = a1[3];
  v100 = 0LL;
  v13 = *(_QWORD *)(a3 + 16);
  if ( !v13 )
  {
LABEL_138:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v127);
    throw (std::bad_weak_ptr *)v127;
  }
  do
  {
    v14 = *(_DWORD *)(v13 + 8);
    if ( !v14 )
      goto LABEL_138;
  }
  while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) );
  v100 = *(_OWORD *)(a3 + 8);
  (*(void (__fastcall **)(unsigned __int64, __int128 *))(*(_QWORD *)v12 + 88LL))(v12, &v100);
  v85 = 0uLL;
  v15 = a5[1];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = a5[1];
  }
  v16 = *a5;
  *(_QWORD *)&v85 = v16;
  *((_QWORD *)&v85 + 1) = v15;
  v17 = *(int **)(v16 + 128);
  if ( v17 )
    v18 = v17[1];
  else
    v18 = 0;
  if ( v17 )
    v19 = *v17;
  else
    v19 = 0;
  *(float *)&v130 = (float)v19;
  *((float *)&v130 + 1) = (float)v18;
  v20 = sub_18006CD84(a3);
  v86 = v20;
  v21 = (_QWORD *)a1[27];
  v22 = (_QWORD *)a1[28];
  if ( v21 != v22 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v133 = *(_QWORD *)(v23 + a1[30]);
      v24 = *(int **)(v16 + 128);
      if ( v24 )
        v25 = v24[1];
      else
        v25 = 0;
      if ( v24 )
        v26 = *v24;
      else
        v26 = 0;
      *(float *)&v93 = (float)v26;
      *((float *)&v93 + 1) = (float)v25;
      sub_18006751C(&v134, &v130, &v93);
      v27 = *(_QWORD *)(*v21 + 136LL);
      if ( v27 && (v28 = *(_QWORD *)(v27 + 128)) != 0 )
        v29 = *(_DWORD *)(v28 + 4);
      else
        v29 = 0;
      if ( v27 && (v30 = *(int **)(v27 + 128)) != 0LL )
        v31 = *v30;
      else
        v31 = 0;
      *(float *)&v94 = (float)v31;
      *((float *)&v94 + 1) = (float)v29;
      sub_18006751C(&v137, &v94, &v133);
      sub_180067490(&v129, &v134, &v137);
      v111 = v129;
      v112 = 0LL;
      v32 = sub_180078118(v20);
      sub_1800A51B0(v32);
      v135 = 0LL;
      v136 = 0LL;
      v90 = &v101;
      v95 = &v104;
      v101 = 0LL;
      v33 = v21[1];
      if ( v33 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
        v33 = v21[1];
      }
      *(_QWORD *)&v101 = *v21;
      *((_QWORD *)&v101 + 1) = v33;
      v104 = 0LL;
      if ( *((_QWORD *)&v85 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v85 + 1) + 8LL));
      v104 = v85;
      v102 = 0LL;
      v34 = *(_QWORD *)(a3 + 16);
      if ( v34 )
      {
        while ( 1 )
        {
          v38 = *(_DWORD *)(v34 + 8);
          if ( !v38 )
            break;
          if ( v38 == _InterlockedCompareExchange((volatile signed __int32 *)(v34 + 8), v38 + 1, v38) )
          {
            v102 = *(_OWORD *)(a3 + 8);
            v35 = 1;
            goto LABEL_40;
          }
        }
      }
      v35 = 0;
LABEL_40:
      if ( !v35 )
      {
        std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
        throw (std::bad_weak_ptr *)pExceptionObject;
      }
      (*(void (__fastcall **)(unsigned __int64 *, __int64 *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 56))(
        a1,
        &v135,
        &v102,
        v87,
        &v104,
        &v101);
      v36 = (volatile signed __int32 *)*((_QWORD *)&v102 + 1);
      if ( *((_QWORD *)&v102 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v102 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        }
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v85, &v135);
      v130 = v133;
      v23 += 8LL;
      v37 = v136;
      if ( v136 )
      {
        if ( _InterlockedExchangeAdd(v136 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
      }
      v21 += 2;
      v16 = v85;
      if ( v21 == v22 )
        break;
      v20 = v86;
    }
    v6 = v105;
  }
  if ( v16 )
  {
    v39 = *(_QWORD *)(a1[23] + 136);
    if ( v39 && (v40 = *(_QWORD *)(v39 + 128)) != 0 )
      v41 = *(_DWORD *)(v40 + 4);
    else
      v41 = 0;
    v42 = *(int **)(v16 + 128);
    if ( v42 )
      v43 = *v42;
    else
      v43 = 0;
    sub_1801130B8((__int64)a1, (__int64)v138, (__int64)v140, (float)v43, (float)v41);
    v110 = 15LL;
    LOBYTE(v107) = 0;
    v109 = 15LL;
    memmove(&v107, "BlurSampleArray", 0xFuLL);
    v108 = 0;
    v44 = sub_1800F57F4(a1[36], &v122);
    v45 = sub_1800F2C78(*v44, (__int64)&v107);
    v46 = v123;
    if ( v123 )
    {
      if ( _InterlockedExchangeAdd(v123 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
        if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      }
    }
    if ( v110 >= 0x10 )
    {
      v47 = v107;
      if ( v110 + 1 >= 0x1000 )
      {
        v47 = *(_QWORD *)(v107 - 8);
        if ( (unsigned __int64)(v107 - v47 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v47, v110 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v47);
    }
    sub_1800F62EC(a1[36], v45, v138, 0x10u);
    v48 = *(int **)(v16 + 128);
    if ( v48 )
      v49 = v48[1];
    else
      v49 = 0;
    if ( v48 )
      v50 = *v48;
    else
      v50 = 0;
    *(float *)&v88 = (float)v50;
    *((float *)&v88 + 1) = (float)v49;
    sub_18006751C(&v132, &v130, &v88);
    v51 = *(_QWORD *)(a1[23] + 136);
    if ( v51 && (v52 = *(_QWORD *)(v51 + 128)) != 0 )
      v53 = *(_DWORD *)(v52 + 4);
    else
      v53 = 0;
    if ( v51 && (v54 = *(int **)(v51 + 128)) != 0LL )
      v55 = *v54;
    else
      v55 = 0;
    *(float *)&v89 = (float)v55;
    *((float *)&v89 + 1) = (float)v53;
    sub_18006751C(&v131, &v89, a1 + 33);
    sub_180067490(&v128, &v132, &v131);
    v113 = v128;
    v114 = 0LL;
    v56 = v86;
    v57 = sub_180078118(v86);
    sub_1800A51B0(v57);
    v95 = &v97;
    v90 = &v106;
    v97 = 0LL;
    v58 = a1[24];
    if ( v58 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
      v58 = a1[24];
    }
    *(_QWORD *)&v97 = a1[23];
    *((_QWORD *)&v97 + 1) = v58;
    v106 = 0LL;
    if ( *((_QWORD *)&v85 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v85 + 1) + 8LL));
    v106 = v85;
    v96 = 0LL;
    v59 = *(_QWORD *)(a3 + 16);
    if ( !v59 )
    {
LABEL_139:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v126);
      throw (std::bad_weak_ptr *)v126;
    }
    do
    {
      v60 = *(_DWORD *)(v59 + 8);
      if ( !v60 )
        goto LABEL_139;
    }
    while ( v60 != _InterlockedCompareExchange((volatile signed __int32 *)(v59 + 8), v60 + 1, v60) );
    v96 = *(_OWORD *)(a3 + 8);
    (*(void (__fastcall **)(unsigned __int64 *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 48))(
      a1,
      &v96,
      v87,
      &v106,
      &v97);
    v61 = (volatile signed __int32 *)*((_QWORD *)&v96 + 1);
    if ( *((_QWORD *)&v96 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v96 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v61)(v61);
        if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
      }
    }
    sub_1800F62EC(a1[36], v45, v140, 0x10u);
    v62 = *(_QWORD *)(a1[23] + 136);
    if ( v62 && (v63 = *(_QWORD *)(v62 + 128)) != 0 )
      v64 = *(_DWORD *)(v63 + 4);
    else
      v64 = 0;
    if ( v62 && (v65 = *(int **)(v62 + 128)) != 0LL )
      v66 = *v65;
    else
      v66 = 0;
    *(float *)&v92 = (float)v66;
    *((float *)&v92 + 1) = (float)v64;
    v132 = *(_QWORD *)sub_18006751C(&v119, a1 + 33, &v92);
    v67 = *(_QWORD *)(a1[25] + 136);
    if ( v67 && (v68 = *(_QWORD *)(v67 + 128)) != 0 )
      v69 = *(_DWORD *)(v68 + 4);
    else
      v69 = 0;
    if ( v67 && (v70 = *(int **)(v67 + 128)) != 0LL )
      v71 = *v70;
    else
      v71 = 0;
    *(float *)&v91 = (float)v71;
    *((float *)&v91 + 1) = (float)v69;
    v131 = *(_QWORD *)sub_18006751C(&v120, &v91, a1 + 33);
    v72 = sub_180067490(&v121, &v132, &v131);
    LODWORD(v128) = *v72;
    v115 = __PAIR64__(v72[1], v128);
    v73 = sub_180078118(v56);
    sub_1800A51B0(v73);
    v95 = &v103;
    v90 = &v99;
    v103 = 0LL;
    v74 = a1[26];
    if ( v74 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v74 + 8));
      v74 = a1[26];
    }
    *(_QWORD *)&v103 = a1[25];
    *((_QWORD *)&v103 + 1) = v74;
    v75 = a1[23];
    v99 = 0LL;
    v76 = *(_QWORD *)(v75 + 144);
    if ( v76 )
      _InterlockedIncrement((volatile signed __int32 *)(v76 + 8));
    v99 = *(_OWORD *)(v75 + 136);
    v98 = 0LL;
    v77 = *(_QWORD *)(a3 + 16);
    if ( !v77 )
    {
LABEL_140:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v125);
      throw (std::bad_weak_ptr *)v125;
    }
    do
    {
      v78 = *(_DWORD *)(v77 + 8);
      if ( !v78 )
        goto LABEL_140;
    }
    while ( v78 != _InterlockedCompareExchange((volatile signed __int32 *)(v77 + 8), v78 + 1, v78) );
    v98 = *(_OWORD *)(a3 + 8);
    (*(void (__fastcall **)(unsigned __int64 *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 48))(
      a1,
      &v98,
      v87,
      &v99,
      &v103);
    v79 = (volatile signed __int32 *)*((_QWORD *)&v98 + 1);
    if ( *((_QWORD *)&v98 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v98 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v79)(v79);
        if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
      }
    }
  }
  else
  {
    v56 = v86;
  }
  v116 = 0x3F8000003F800000LL;
  v117 = _mm_srli_si128((__m128i)xmmword_1802086D0, 8).m128i_u64[0];
  v80 = sub_180078118(v56);
  sub_1800A51B0(v80);
  v81 = a1[25];
  *v6 = 0LL;
  v6[1] = 0LL;
  v82 = *(_QWORD *)(v81 + 144);
  if ( v82 )
    _InterlockedIncrement((volatile signed __int32 *)(v82 + 8));
  *v6 = *(_QWORD *)(v81 + 136);
  v6[1] = *(_QWORD *)(v81 + 144);
  if ( *((_QWORD *)&v85 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v85 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v83 = *((_QWORD *)&v85 + 1);
      (***((void (__fastcall ****)(_QWORD))&v85 + 1))(*((_QWORD *)&v85 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v83 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v85 + 1) + 8LL))(*((_QWORD *)&v85 + 1));
    }
  }
  return v6;
}
