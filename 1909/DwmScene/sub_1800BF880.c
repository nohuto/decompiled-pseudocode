/*
 * XREFs of sub_1800BF880 @ 0x1800BF880
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800B99A8 @ 0x1800B99A8 (sub_1800B99A8.c)
 *     sub_1800B9CB0 @ 0x1800B9CB0 (sub_1800B9CB0.c)
 *     sub_1800B9FB8 @ 0x1800B9FB8 (sub_1800B9FB8.c)
 *     sub_1800BA2C0 @ 0x1800BA2C0 (sub_1800BA2C0.c)
 *     sub_1800BA5C8 @ 0x1800BA5C8 (sub_1800BA5C8.c)
 *     sub_1800BA8D0 @ 0x1800BA8D0 (sub_1800BA8D0.c)
 *     sub_1800BC774 @ 0x1800BC774 (sub_1800BC774.c)
 *     sub_1800BCA34 @ 0x1800BCA34 (sub_1800BCA34.c)
 *     sub_1800C1C08 @ 0x1800C1C08 (sub_1800C1C08.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800BF880(__int64 a1, _QWORD *a2, __int64 a3, __int128 *a4)
{
  __int64 v7; // rdx
  signed __int32 v8; // eax
  _QWORD *v9; // r14
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 **v21; // r14
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  __int64 v31; // rcx
  __int64 *v32; // rax
  volatile signed __int32 *v33; // rbx
  _QWORD *v34; // r14
  __int64 *v35; // rdi
  __int64 v36; // r15
  __int64 v37; // rcx
  __int64 *v38; // rax
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rcx
  __int64 *v41; // rax
  _QWORD *v42; // rbx
  volatile signed __int32 *v43; // rdi
  __int64 v44; // rcx
  __int64 *v45; // rax
  volatile signed __int32 *v46; // rdi
  _QWORD *v47; // rdi
  __int128 v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  int v52; // [rsp+48h] [rbp-B8h] BYREF
  int v53; // [rsp+4Ch] [rbp-B4h] BYREF
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v55; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+70h] [rbp-90h] BYREF
  __int128 v58; // [rsp+80h] [rbp-80h] BYREF
  __int128 v59; // [rsp+90h] [rbp-70h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v62; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v64; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v65; // [rsp+F0h] [rbp-10h]
  __int128 v66; // [rsp+100h] [rbp+0h] BYREF
  __int128 v67; // [rsp+110h] [rbp+10h] BYREF
  __int128 v68; // [rsp+120h] [rbp+20h] BYREF
  __int128 v69; // [rsp+130h] [rbp+30h] BYREF
  __int128 v70; // [rsp+140h] [rbp+40h] BYREF
  __int128 v71; // [rsp+150h] [rbp+50h] BYREF
  __int128 v72; // [rsp+160h] [rbp+60h] BYREF
  __int128 v73; // [rsp+170h] [rbp+70h] BYREF
  __int128 v74; // [rsp+180h] [rbp+80h] BYREF
  __int64 v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h] BYREF
  volatile signed __int32 *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h] BYREF
  volatile signed __int32 *v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v81; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v82; // [rsp+1D8h] [rbp+D8h] BYREF
  volatile signed __int32 *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v85; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v86; // [rsp+208h] [rbp+108h] BYREF
  volatile signed __int32 *v87; // [rsp+210h] [rbp+110h]
  __int64 v88; // [rsp+218h] [rbp+118h] BYREF
  __int64 v89; // [rsp+228h] [rbp+128h] BYREF
  __int64 v90; // [rsp+238h] [rbp+138h] BYREF
  volatile signed __int32 *v91; // [rsp+240h] [rbp+140h]
  __int64 v92; // [rsp+248h] [rbp+148h] BYREF
  volatile signed __int32 *v93; // [rsp+250h] [rbp+150h]
  __int64 v94; // [rsp+258h] [rbp+158h] BYREF
  volatile signed __int32 *v95; // [rsp+260h] [rbp+160h]
  __int64 v96; // [rsp+268h] [rbp+168h] BYREF
  volatile signed __int32 *v97; // [rsp+270h] [rbp+170h]
  char v98[8]; // [rsp+278h] [rbp+178h] BYREF
  volatile signed __int32 *v99; // [rsp+280h] [rbp+180h]
  _BYTE pExceptionObject[24]; // [rsp+288h] [rbp+188h] BYREF
  __int64 v101; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v102; // [rsp+2A8h] [rbp+1A8h]

  v75 = -2LL;
  v65 = a2;
  v55 = a2;
  v101 = 0LL;
  v102 = 0LL;
  sub_1800BCA34(&v101);
  v7 = *((_QWORD *)a4 + 1);
  if ( !v7 )
  {
LABEL_89:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v8 = *(_DWORD *)(v7 + 8);
    if ( !v8 )
      goto LABEL_89;
  }
  while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) );
  v49 = *a4;
  v9 = (_QWORD *)(v101 + 56);
  v10 = (__int64 *)(a1 + 64);
  v11 = 3LL;
  do
  {
    v59 = 0LL;
    v12 = *(v10 - 6);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = *(v10 - 6);
    }
    *(_QWORD *)&v59 = *(v10 - 7);
    *((_QWORD *)&v59 + 1) = v12;
    v68 = 0LL;
    if ( *((_QWORD *)&v49 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
    v68 = v49;
    v13 = sub_1800B9FB8(a3, &v76, &v68, &v59);
    std::shared_ptr<__ExceptionPtr>::operator=(v9 - 6, v13);
    v14 = v77;
    if ( v77 )
    {
      if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v60 = 0LL;
    v15 = *v10;
    if ( *v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = *v10;
    }
    *(_QWORD *)&v60 = *(v10 - 1);
    *((_QWORD *)&v60 + 1) = v15;
    v69 = 0LL;
    if ( *((_QWORD *)&v49 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
    v69 = v49;
    v16 = sub_1800B99A8(a3, &v78, &v69, &v60);
    std::shared_ptr<__ExceptionPtr>::operator=(v9, v16);
    v17 = v79;
    if ( v79 )
    {
      if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    v9 += 2;
    v10 += 2;
    --v11;
  }
  while ( v11 );
  v50 = 0;
  v51 = 0;
  sub_1800BC774((__int64 **)(a1 + 104), (__int64)&v80, &v50);
  v18 = v80;
  v61 = 0LL;
  v19 = *(_QWORD *)(v80 + 48);
  if ( v19 )
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  v61 = *(_OWORD *)(v18 + 40);
  v70 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
  v70 = v49;
  v20 = sub_1800BA2C0(a3, &v82, &v70, &v61);
  v21 = (__int64 **)(v101 + 104);
  sub_1800BC774((__int64 **)(v101 + 104), (__int64)&v81, &v51);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v81 + 40), v20);
  v22 = v83;
  if ( v83 )
  {
    if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  v52 = 1;
  v53 = 1;
  sub_1800BC774((__int64 **)(a1 + 104), (__int64)&v84, &v52);
  v23 = v84;
  v62 = 0LL;
  v24 = *(_QWORD *)(v84 + 48);
  if ( v24 )
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
  v62 = *(_OWORD *)(v23 + 40);
  v71 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
  v71 = v49;
  v25 = sub_1800BA2C0(a3, &v86, &v71, &v62);
  sub_1800BC774(v21, (__int64)&v85, &v53);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v85 + 40), v25);
  v26 = v87;
  if ( v87 )
  {
    if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  v54 = 2;
  LODWORD(v55) = 2;
  sub_1800BC774((__int64 **)(a1 + 104), (__int64)&v88, &v54);
  v27 = v88;
  v63 = 0LL;
  v28 = *(_QWORD *)(v88 + 48);
  if ( v28 )
    _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
  v63 = *(_OWORD *)(v27 + 40);
  v72 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
  v72 = v49;
  v29 = sub_1800BA2C0(a3, &v90, &v72, &v63);
  sub_1800BC774(v21, (__int64)&v89, &v55);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v89 + 40), v29);
  v30 = v91;
  if ( v91 )
  {
    if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v64 = 0LL;
  v31 = *(_QWORD *)(a1 + 128);
  if ( v31 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
    v31 = *(_QWORD *)(a1 + 128);
  }
  *(_QWORD *)&v64 = *(_QWORD *)(a1 + 120);
  *((_QWORD *)&v64 + 1) = v31;
  v73 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
  v73 = v49;
  v32 = sub_1800B9CB0(a3, &v92, &v73, &v64);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v101 + 120), v32);
  v33 = v93;
  if ( v93 )
  {
    if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    }
  }
  v34 = (_QWORD *)(v101 + 136);
  v35 = (__int64 *)(a1 + 144);
  v36 = 3LL;
  do
  {
    v56 = 0LL;
    v37 = *v35;
    if ( *v35 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
      v37 = *v35;
    }
    *(_QWORD *)&v56 = *(v35 - 1);
    *((_QWORD *)&v56 + 1) = v37;
    v74 = 0LL;
    if ( *((_QWORD *)&v49 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
    v74 = v49;
    v38 = sub_1800BA5C8(a3, &v94, &v74, &v56);
    std::shared_ptr<__ExceptionPtr>::operator=(v34, v38);
    v39 = v95;
    if ( v95 )
    {
      if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      }
    }
    v34 += 2;
    v35 += 2;
    --v36;
  }
  while ( v36 );
  v57 = 0LL;
  v40 = *(_QWORD *)(a1 + 192);
  if ( v40 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
    v40 = *(_QWORD *)(a1 + 192);
  }
  *(_QWORD *)&v57 = *(_QWORD *)(a1 + 184);
  *((_QWORD *)&v57 + 1) = v40;
  v66 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
  v66 = v49;
  v41 = sub_1800BA8D0(a3, &v96, &v66, &v57);
  v42 = (_QWORD *)v101;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v101 + 184), v41);
  v43 = v97;
  if ( v97 )
  {
    if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
    }
    v42 = (_QWORD *)v101;
  }
  v58 = 0LL;
  v44 = *(_QWORD *)(a1 + 208);
  if ( v44 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
    v44 = *(_QWORD *)(a1 + 208);
    v42 = (_QWORD *)v101;
  }
  *(_QWORD *)&v58 = *(_QWORD *)(a1 + 200);
  *((_QWORD *)&v58 + 1) = v44;
  v67 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
    v42 = (_QWORD *)v101;
  }
  v67 = v49;
  v45 = (__int64 *)sub_1800C1C08(a3, v98, &v67, &v58);
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 25, v45);
  v46 = v99;
  if ( v99 )
  {
    if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
      if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
    }
    v42 = (_QWORD *)v101;
  }
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 27, (_QWORD *)(a1 + 216));
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 29, (_QWORD *)(a1 + 232));
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 31, (_QWORD *)(a1 + 248));
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 33, (_QWORD *)(a1 + 264));
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 35, (_QWORD *)(a1 + 280));
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 37, (_QWORD *)(a1 + 296));
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 39, (_QWORD *)(a1 + 312));
  v47 = v65;
  *v65 = v42;
  v47[1] = v102;
  if ( *((_QWORD *)&v49 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
    }
  }
  return v47;
}
