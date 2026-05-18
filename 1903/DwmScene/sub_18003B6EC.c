/*
 * XREFs of sub_18003B6EC @ 0x18003B6EC
 * Callers:
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180015EA4 @ 0x180015EA4 (sub_180015EA4.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_180039B58 @ 0x180039B58 (sub_180039B58.c)
 *     sub_18009EB64 @ 0x18009EB64 (sub_18009EB64.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003B6EC(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r12
  _QWORD *v5; // r14
  volatile signed __int32 *v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 *v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int128 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  _BYTE v35[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v36; // [rsp+B8h] [rbp-50h]
  _QWORD v37[4]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v38[4]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v39[4]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v40[5]; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v41[8]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v43; // [rsp+1C8h] [rbp+C0h]

  v33 = -2LL;
  v34 = a2;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_180015EA4(v4, &v27, 1u);
  v5 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v27);
  v6 = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = 69;
  if ( *(_BYTE *)(a2 + 6) )
  {
    v7 = 325;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 176), (_QWORD *)(a1 + 128));
  }
  v24 = 0LL;
  v8 = *(_QWORD *)(a1 + 136);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 136);
  }
  *(_QWORD *)&v24 = *v5;
  *((_QWORD *)&v24 + 1) = v8;
  v9 = a2 + 8;
  sub_180039B58(a2 + 8, (__int64)&v24, *(_DWORD *)a2, v7);
  v10 = (__int64 *)sub_18009EB64(*v5, v35, *(unsigned int *)(a1 + 88));
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v10);
  v13 = v36;
  if ( v36 )
  {
    result = (unsigned int)_InterlockedDecrement(v36 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( *(_BYTE *)(a2 + 5) )
  {
    sub_18000E498(v38);
    v23 = sub_18000E498(v37);
    sub_180027770(v41, v23, 411, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v41;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      sub_18000E498(v40);
      v22 = sub_18000E498(v39);
      sub_180027770(pExceptionObject, v22, 418, (__int64)v40, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v43 = 0LL;
    v14 = *(_QWORD *)(a1 + 80);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
        {
          v43 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_180015EA4(v4, &v29, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 160), &v29);
    v16 = v30;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v25 = 0LL;
    v17 = *(_QWORD *)(a1 + 168);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v17 = *(_QWORD *)(a1 + 168);
    }
    *(_QWORD *)&v25 = *(_QWORD *)(a1 + 160);
    *((_QWORD *)&v25 + 1) = v17;
    sub_180039B58(v9, (__int64)&v25, 3, 64);
    sub_180015EA4(v4, &v31, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 144), &v31);
    v18 = v32;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    v26 = 0LL;
    v19 = *(_QWORD *)(a1 + 152);
    if ( v19 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
      v19 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)&v26 = *(_QWORD *)(a1 + 144);
    *((_QWORD *)&v26 + 1) = v19;
    result = sub_180039B58(v9, (__int64)&v26, 3, 1);
    if ( *((_QWORD *)&v43 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v20 = *((_QWORD *)&v43 + 1);
        (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
      }
    }
  }
  v21 = *(_QWORD *)(a2 + 64);
  if ( v21 )
  {
    LOBYTE(v12) = v21 != v9;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v12);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  return result;
}
