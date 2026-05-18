/*
 * XREFs of sub_18010A740 @ 0x18010A740
 * Callers:
 *     sub_1800DE4D8 @ 0x1800DE4D8 (sub_1800DE4D8.c)
 *     sub_18010A740 @ 0x18010A740 (sub_18010A740.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180012430 @ 0x180012430 (sub_180012430.c)
 *     sub_18009B98C @ 0x18009B98C (sub_18009B98C.c)
 *     sub_1800DB274 @ 0x1800DB274 (sub_1800DB274.c)
 *     sub_18010A740 @ 0x18010A740 (sub_18010A740.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18010A740(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 *a6)
{
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rax
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rbx
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  __int64 result; // rax
  __int64 v26; // rdx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rbx
  __int128 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+68h] [rbp-98h] BYREF
  __int128 v38; // [rsp+78h] [rbp-88h] BYREF
  __int128 v39; // [rsp+88h] [rbp-78h] BYREF
  __int128 v40; // [rsp+98h] [rbp-68h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v42; // [rsp+B8h] [rbp-48h]
  __int128 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-30h]
  __int64 *v45; // [rsp+D8h] [rbp-28h]
  __int64 *v46; // [rsp+E0h] [rbp-20h]
  __int64 *v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  __int64 *v49; // [rsp+F8h] [rbp-8h]
  __int128 *v50; // [rsp+100h] [rbp+0h]
  _BYTE *v51; // [rsp+108h] [rbp+8h]
  _BYTE v52[56]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v53; // [rsp+148h] [rbp+48h]
  __int64 v54; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v55; // [rsp+158h] [rbp+58h]
  __int64 v56; // [rsp+160h] [rbp+60h]
  volatile signed __int32 *v57; // [rsp+168h] [rbp+68h]

  v44 = -2LL;
  v42 = a1;
  v45 = a2;
  v46 = a3;
  v47 = a4;
  v48 = a5;
  v49 = a6;
  v9 = (_QWORD *)a1[19];
  v10 = (_QWORD *)a1[20];
  while ( v9 != v10 )
  {
    v50 = &v37;
    v51 = v52;
    v37 = 0LL;
    v11 = a6[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = a6[1];
    }
    *(_QWORD *)&v37 = *a6;
    *((_QWORD *)&v37 + 1) = v11;
    v53 = 0LL;
    v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
    if ( v12 )
      v53 = (**v12)(v12, v52);
    v38 = 0LL;
    v13 = a4[1];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = a4[1];
    }
    *(_QWORD *)&v38 = *a4;
    *((_QWORD *)&v38 + 1) = v13;
    v39 = 0LL;
    v14 = a3[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = a3[1];
    }
    *(_QWORD *)&v39 = *a3;
    *((_QWORD *)&v39 + 1) = v14;
    v40 = 0LL;
    v15 = a2[1];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = a2[1];
    }
    *(_QWORD *)&v40 = *a2;
    *((_QWORD *)&v40 + 1) = v15;
    sub_18010A740(*v9, (unsigned int)&v40, (unsigned int)&v39, (unsigned int)&v38, (__int64)v52, (__int64)&v37);
    v9 += 2;
  }
  v16 = *(_QWORD *)(a5 + 56);
  if ( !v16 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x18010AC77LL);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 16LL))(v16, &v54);
  v35 = 0LL;
  v36 = 0LL;
  v17 = v55;
  if ( v55 )
  {
    _InterlockedIncrement(v55 + 2);
    v17 = v55;
  }
  v18 = v54;
  v35 = v54;
  v36 = v17;
  v19 = v57;
  if ( v57 )
  {
    _InterlockedIncrement(v57 + 2);
    v19 = v57;
    v18 = v35;
  }
  *(_QWORD *)&v32 = v56;
  *((_QWORD *)&v32 + 1) = v19;
  v33 = 0LL;
  v34 = 0LL;
  sub_180012430(v18, &v33);
  if ( v19 )
    _InterlockedIncrement(v19 + 2);
  v43 = v32;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v33 + 88), &v43);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v41 = 0LL;
  v20 = a6[1];
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = a6[1];
  }
  *(_QWORD *)&v41 = *a6;
  *((_QWORD *)&v41 + 1) = v20;
  v21 = v33;
  sub_18009B98C(v33, &v41);
  *(_BYTE *)(v21 + 72) = 0;
  v22 = v42;
  std::shared_ptr<__ExceptionPtr>::operator=(v42 + 3, a2);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 5, a3);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 1, a4);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 7, &v35);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 9, &v33);
  std::shared_ptr<__ExceptionPtr>::operator=(v22 + 11, a6);
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      v23 = v34;
      (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
    }
  }
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      v24 = v36;
      (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
    }
  }
  result = sub_1800DB274((__int64)&v54);
  v27 = (volatile signed __int32 *)a2[1];
  if ( v27 )
  {
    result = (unsigned int)_InterlockedDecrement(v27 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      result = (unsigned int)_InterlockedDecrement(v27 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = (volatile signed __int32 *)a3[1];
  if ( v28 )
  {
    result = (unsigned int)_InterlockedDecrement(v28 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      result = (unsigned int)_InterlockedDecrement(v28 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)a4[1];
  if ( v29 )
  {
    result = (unsigned int)_InterlockedDecrement(v29 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      result = (unsigned int)_InterlockedDecrement(v29 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v30 = *(_QWORD *)(a5 + 56);
  if ( v30 )
  {
    LOBYTE(v26) = v30 != a5;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v26);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  v31 = (volatile signed __int32 *)a6[1];
  if ( v31 )
  {
    result = (unsigned int)_InterlockedDecrement(v31 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  return result;
}
