/*
 * XREFs of sub_180082838 @ 0x180082838
 * Callers:
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_1800141C0 @ 0x1800141C0 (sub_1800141C0.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800114EC @ 0x1800114EC (sub_1800114EC.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_18006591C @ 0x18006591C (sub_18006591C.c)
 *     sub_180078030 @ 0x180078030 (sub_180078030.c)
 *     sub_18007E7C0 @ 0x18007E7C0 (sub_18007E7C0.c)
 *     sub_1800805DC @ 0x1800805DC (sub_1800805DC.c)
 *     sub_180082530 @ 0x180082530 (sub_180082530.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_1800863AC @ 0x1800863AC (sub_1800863AC.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180088228 @ 0x180088228 (sub_180088228.c)
 *     sub_180089824 @ 0x180089824 (sub_180089824.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __RTtypeid @ 0x180125AAE (__RTtypeid.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_180082838(__int64 a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // r9
  __int64 *v23; // r15
  __int64 *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rdx
  volatile signed __int32 *v27; // rbx
  _QWORD *v28; // r15
  _QWORD *v29; // rdi
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rbx
  __int64 v41; // rax
  unsigned __int64 *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 *v46; // rax
  char v47; // [rsp+30h] [rbp-D0h]
  __int128 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v49; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  int v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 *v58; // [rsp+B8h] [rbp-48h]
  _QWORD *v59; // [rsp+C0h] [rbp-40h]
  __int128 v60; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v61[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v62[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v63[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v64[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v65[32]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v66[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v67[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v68[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v69[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v71; // [rsp+260h] [rbp+160h] BYREF
  __int128 v72; // [rsp+270h] [rbp+170h]
  unsigned int v73; // [rsp+280h] [rbp+180h] BYREF
  _QWORD *v74; // [rsp+288h] [rbp+188h] BYREF
  volatile signed __int32 *v75; // [rsp+290h] [rbp+190h]
  __int64 v76; // [rsp+298h] [rbp+198h] BYREF
  volatile signed __int32 *v77; // [rsp+2A0h] [rbp+1A0h]

  v57 = -2LL;
  v58 = a2;
  v59 = a4;
  sub_180087340(a1);
  if ( !*a4 )
  {
    sub_180087340(a1);
    v48 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v48 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    std::shared_ptr<__ExceptionPtr>::operator=(a4, (__int64 *)&v48);
    if ( *((_QWORD *)&v48 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *((_QWORD *)&v48 + 1);
        (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
      }
    }
  }
  v72 = 0LL;
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      if ( !v12 )
        break;
      if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12) )
      {
        v72 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v13 = *a4;
  v71 = 0LL;
  v14 = *(_QWORD *)(v13 + 80);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      if ( !v15 )
        break;
      if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
      {
        v71 = *(_OWORD *)(v13 + 72);
        break;
      }
    }
  }
  if ( !(_QWORD)v71 )
  {
    v49 = 0LL;
    v16 = *(_QWORD *)(a1 + 80);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( !v17 )
          break;
        if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
        {
          v49 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    std::shared_ptr<__ExceptionPtr>::operator=(&v71, (__int64 *)&v49);
    if ( *((_QWORD *)&v49 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v18 = *((_QWORD *)&v49 + 1);
        (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
      }
    }
  }
  if ( *(_QWORD *)(v71 + 104) != *(_QWORD *)(v72 + 104) )
  {
    sub_18000E498(v62);
    v46 = sub_18000E498(v61);
    sub_180027770(v69, v46, 717, (__int64)v62, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v69;
  }
  if ( (a3 & 0x20000) != 0 || (_QWORD)v71 == (_QWORD)v72 )
    v19 = -1LL;
  else
    v19 = *(_QWORD *)(a1 + 368);
  *a2 = 0LL;
  a2[1] = 0LL;
  v50 = 0LL;
  v20 = a4[1];
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = a4[1];
  }
  *(_QWORD *)&v50 = *a4;
  *((_QWORD *)&v50 + 1) = v20;
  sub_180089824(v71, a2, v19, &v50);
  *(_QWORD *)(*a2 + 448) = *(_QWORD *)(a1 + 448);
  v21 = (_QWORD *)(*a2 + 432);
  if ( v21 != (_QWORD *)(a1 + 432) )
  {
    sub_18007E7C0((_QWORD *)(*a2 + 432));
    sub_1800805DC(v21, (_QWORD *)(a1 + 432), v47, v22);
  }
  sub_180011714((__int64 *)(*a2 + 400), (__int64 *)(a1 + 400));
  v53 = *(_QWORD *)(a1 + 172);
  v54 = *(_DWORD *)(a1 + 180);
  v60 = *(_OWORD *)(a1 + 156);
  v55 = *(_QWORD *)(a1 + 144);
  v56 = *(_DWORD *)(a1 + 152);
  sub_1800863AC(*a2, &v55, &v60, &v53);
  if ( (a3 & 2) != 0 )
  {
    v73 = a3;
    sub_180087340(a1);
    v23 = *(__int64 **)(a1 + 376);
    v24 = *(__int64 **)(a1 + 384);
    while ( v23 != v24 )
    {
      v74 = 0LL;
      v75 = 0LL;
      v25 = *v23;
      v51 = 0LL;
      v26 = a2[1];
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
        v26 = a2[1];
      }
      *(_QWORD *)&v51 = *a2;
      *((_QWORD *)&v51 + 1) = v26;
      (*(void (__fastcall **)(__int64, _QWORD **, unsigned int *, __int128 *))(*(_QWORD *)v25 + 80LL))(
        v25,
        &v74,
        &v73,
        &v51);
      if ( v74 )
      {
        sub_180082530(*a2, &v74);
      }
      else if ( (a3 & 0x10000) == 0 )
      {
        v36 = sub_1800114EC((__int64)v23);
        v37 = _RTtypeid(v36);
        sub_180088228(v37);
        v38 = sub_18000E498(v64);
        v39 = (_QWORD *)sub_1800453AC((__int64)v65, (__int64)"SceneNode::Clone() -- component type ", (__int64)v38);
        v40 = (_QWORD *)sub_18002BF78((__int64)v66, v39, " with name ");
        v41 = sub_1800114EC((__int64)v23);
        v42 = (unsigned __int64 *)sub_180078030(v41);
        v43 = (_QWORD *)sub_18006591C((__int64)v67, v40, v42);
        v44 = sub_18002BF78((__int64)v68, v43, " could not be cloned");
        v45 = sub_18000E498(v63);
        sub_180027770(pExceptionObject, v45, 751, v44, 1);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      v27 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        }
      }
      v23 += 2;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    sub_180087340(a1);
    v28 = *(_QWORD **)(a1 + 32);
    v29 = *(_QWORD **)(a1 + 40);
    while ( v28 != v29 )
    {
      v76 = 0LL;
      v77 = 0LL;
      v52 = 0LL;
      v30 = a2[1];
      if ( v30 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
        v30 = a2[1];
      }
      *(_QWORD *)&v52 = *a2;
      *((_QWORD *)&v52 + 1) = v30;
      sub_180082838(*v28, &v76, a3, &v52);
      v31 = v77;
      if ( v77 )
      {
        if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        }
      }
      v28 += 2;
    }
  }
  if ( *((_QWORD *)&v71 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v71 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v32 = *((_QWORD *)&v71 + 1);
      (***((void (__fastcall ****)(_QWORD))&v71 + 1))(*((_QWORD *)&v71 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v71 + 1) + 8LL))(*((_QWORD *)&v71 + 1));
    }
  }
  if ( *((_QWORD *)&v72 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v72 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v33 = *((_QWORD *)&v72 + 1);
      (***((void (__fastcall ****)(_QWORD))&v72 + 1))(*((_QWORD *)&v72 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v72 + 1) + 8LL))(*((_QWORD *)&v72 + 1));
    }
  }
  v34 = (volatile signed __int32 *)a4[1];
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
      if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
    }
  }
  return a2;
}
