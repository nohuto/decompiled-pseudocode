/*
 * XREFs of sub_180010500 @ 0x180010500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FB0C @ 0x18000FB0C (sub_18000FB0C.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_180018C08 @ 0x180018C08 (sub_180018C08.c)
 *     sub_18001BEAC @ 0x18001BEAC (sub_18001BEAC.c)
 *     sub_18001C004 @ 0x18001C004 (sub_18001C004.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800779F0 @ 0x1800779F0 (sub_1800779F0.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_18008BF48 @ 0x18008BF48 (sub_18008BF48.c)
 *     sub_18008C500 @ 0x18008C500 (sub_18008C500.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180010500(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  _QWORD *v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // rax
  char v14; // si
  __int64 v15; // rcx
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rsi
  __int64 *v22; // rax
  volatile signed __int32 *v23; // rbx
  char v24; // bl
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 v27; // rbx
  _QWORD *j; // rdx
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rbx
  _QWORD *i; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rbx
  __int128 v41; // [rsp+28h] [rbp-E0h] BYREF
  int v42; // [rsp+38h] [rbp-D0h]
  __int128 v43; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v46; // [rsp+68h] [rbp-A0h]
  __int128 v47; // [rsp+70h] [rbp-98h] BYREF
  __int128 v48; // [rsp+80h] [rbp-88h] BYREF
  __int128 v49; // [rsp+90h] [rbp-78h] BYREF
  __int128 v50; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v53; // [rsp+D0h] [rbp-38h]
  _BYTE v54[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  __int64 v57; // [rsp+F8h] [rbp-10h]
  _BYTE v58[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v59; // [rsp+108h] [rbp+0h]
  __int128 v60; // [rsp+110h] [rbp+8h]
  __int128 v61; // [rsp+120h] [rbp+18h]
  _QWORD *v62; // [rsp+130h] [rbp+28h] BYREF
  _QWORD *v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  _QWORD *v65; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v66; // [rsp+150h] [rbp+48h]
  __int64 v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+58h] BYREF
  __int64 v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h] BYREF
  volatile signed __int32 *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h] BYREF
  __int64 v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h] BYREF
  __int64 v75; // [rsp+198h] [rbp+90h]

  v57 = -2LL;
  v42 = 0;
  v4 = qword_180268E48;
  v5 = (_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 16);
  v60 = 0LL;
  v7 = *(_QWORD *)(v6 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v60 = *(_OWORD *)(v6 + 72);
        break;
      }
    }
  }
  v74 = 0LL;
  v75 = 0LL;
  sub_1800631C0(v60 + 16, &v74);
  v9 = *v5;
  sub_180087340(*v5);
  v61 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v61 = *(_OWORD *)(v9 + 56);
        break;
      }
    }
  }
  v41 = 0uLL;
  if ( a2 )
  {
    v12 = *(volatile signed __int32 **)(a2 + 40);
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = *(volatile signed __int32 **)(a2 + 40);
    }
    v45 = *(_QWORD *)(a2 + 32);
    v46 = v12;
    v13 = &v45;
    v14 = 5;
  }
  else
  {
    v47 = 0LL;
    v13 = (__int64 *)&v47;
    v14 = 6;
  }
  v15 = v13[1];
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  *(_QWORD *)&v41 = *v13;
  *((_QWORD *)&v41 + 1) = v15;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( *((_QWORD *)&v47 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v16 = *((_QWORD *)&v47 + 1);
        (***((void (__fastcall ****)(_QWORD))&v47 + 1))(*((_QWORD *)&v47 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
      }
    }
  }
  if ( (v14 & 1) != 0 )
  {
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        v17 = v46;
        (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      }
    }
  }
  if ( (_QWORD)v61 != (_QWORD)v41 )
  {
    v43 = 0LL;
    if ( (_QWORD)v41 )
    {
      v44 = 0LL;
      v25 = *(_QWORD *)(v41 + 80);
      if ( v25 )
      {
        while ( 1 )
        {
          v26 = *(_DWORD *)(v25 + 8);
          if ( !v26 )
            break;
          if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) )
          {
            v44 = *(_OWORD *)(v41 + 72);
            break;
          }
        }
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v43, (__int64 *)&v44);
      if ( *((_QWORD *)&v44 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v27 = *((_QWORD *)&v44 + 1);
          (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
        }
      }
      v24 = 0;
      v21 = v43;
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 184);
      if ( v18 )
      {
        *(_DWORD *)(v18 + 104) = *(_DWORD *)(a1 + 200);
        *(_QWORD *)(a1 + 184) = 0LL;
        v19 = *(volatile signed __int32 **)(a1 + 192);
        *(_QWORD *)(a1 + 192) = 0LL;
        if ( v19 )
        {
          if ( !_InterlockedDecrement(v19 + 2) )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
            if ( !_InterlockedDecrement(v19 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          }
        }
      }
      sub_1800779F0(*(_QWORD *)(v4 + 56), &v52);
      std::shared_ptr<__ExceptionPtr>::operator=(&v43, &v52);
      v20 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      v68 = 0LL;
      v69 = 0LL;
      v21 = v43;
      sub_1800631C0(v43 + 16, &v68);
      v55 = 0LL;
      v56 = 0LL;
      sub_18001110C(v54, &qword_180258808);
      v22 = (__int64 *)sub_18008B2A0(v21, v58, v54);
      std::shared_ptr<__ExceptionPtr>::operator=(&v41, v22);
      v23 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        v21 = v43;
      }
      v24 = 1;
      if ( (_BYTE)v69 )
        sub_180063668(v68);
    }
    if ( (_QWORD)v60 == v21 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v24 )
      {
        v65 = 0LL;
        v66 = 0LL;
        v67 = 0LL;
        sub_18000FB0C(v60, &v65);
        for ( i = v65; i != v66; i += 2 )
        {
          if ( *(float *)(*i + 104LL) > 0.000001 )
          {
            std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 184), i);
            break;
          }
        }
        sub_180011388(&v65);
      }
      v51 = 0LL;
      if ( *((_QWORD *)&v41 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
      v51 = v41;
      v49 = 0LL;
      v32 = v5[1];
      if ( v32 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
        v32 = v5[1];
      }
      *(_QWORD *)&v49 = *v5;
      *((_QWORD *)&v49 + 1) = v32;
      sub_18008C500(v60, &v49, &v51);
    }
    else
    {
      v72 = 0LL;
      v73 = 0LL;
      sub_1800631C0(v21 + 16, &v72);
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v24 )
      {
        v62 = 0LL;
        v63 = 0LL;
        v64 = 0LL;
        sub_18000FB0C(v21, &v62);
        for ( j = v62; j != v63; j += 2 )
        {
          if ( *(float *)(*j + 104LL) > 0.000001 )
          {
            std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 184), j);
            break;
          }
        }
        sub_180011388(&v62);
      }
      v70 = 0LL;
      v71 = 0LL;
      v50 = 0LL;
      if ( *((_QWORD *)&v41 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
      v50 = v41;
      sub_180082838(*v5, &v70, 131075LL, &v50);
      v48 = 0LL;
      v29 = v5[1];
      if ( v29 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
        v29 = v5[1];
      }
      *(_QWORD *)&v48 = *v5;
      *((_QWORD *)&v48 + 1) = v29;
      sub_18008BF48(v60, &v48);
      std::shared_ptr<__ExceptionPtr>::operator=(v5, &v70);
      v30 = v71;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        }
      }
      if ( (_BYTE)v73 )
        sub_180063668(v72);
    }
    v33 = *(_QWORD *)(a1 + 184);
    if ( v33 )
      *(_DWORD *)(v33 + 104) = 0;
    if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) == 0 )
    {
      if ( (_QWORD)v61 )
      {
        v34 = sub_180018C08(v4);
        if ( v34 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001C004(v34, a1 + 72);
          else
            sub_18001BEAC(v34, a1 + 52);
        }
      }
      if ( (_QWORD)v41 )
      {
        v35 = sub_180018C08(v4);
        if ( v35 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001C004(v35, a1 + 72);
          else
            sub_18001BEAC(v35, a1 + 52);
        }
      }
    }
    if ( *((_QWORD *)&v43 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v36 = *((_QWORD *)&v43 + 1);
        (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v41 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v37 = *((_QWORD *)&v41 + 1);
      (***((void (__fastcall ****)(_QWORD))&v41 + 1))(*((_QWORD *)&v41 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v41 + 1) + 8LL))(*((_QWORD *)&v41 + 1));
    }
  }
  if ( *((_QWORD *)&v61 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v38 = *((_QWORD *)&v61 + 1);
      (***((void (__fastcall ****)(_QWORD))&v61 + 1))(*((_QWORD *)&v61 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v61 + 1) + 8LL))(*((_QWORD *)&v61 + 1));
    }
  }
  if ( (_BYTE)v75 )
    sub_180063668(v74);
  if ( *((_QWORD *)&v60 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v39 = *((_QWORD *)&v60 + 1);
      (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v60 + 1) + 8LL))(*((_QWORD *)&v60 + 1));
    }
  }
  return 0LL;
}
