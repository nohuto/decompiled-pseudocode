/*
 * XREFs of sub_1800FE640 @ 0x1800FE640
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800782CC @ 0x1800782CC (sub_1800782CC.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     sub_1800FC8A4 @ 0x1800FC8A4 (sub_1800FC8A4.c)
 *     sub_1800FD1F8 @ 0x1800FD1F8 (sub_1800FD1F8.c)
 *     sub_1801240B8 @ 0x1801240B8 (sub_1801240B8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800FE640(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rdi
  int v11; // xmm1_4
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rbx
  __int64 result; // rax
  volatile signed __int32 *v17; // rbx
  __int128 v18; // [rsp+40h] [rbp-C8h]
  __int128 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h]
  volatile signed __int32 *v21; // [rsp+68h] [rbp-A0h]
  _BYTE v22[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  _BYTE pExceptionObject[32]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v28; // [rsp+C8h] [rbp-40h]
  int v29; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+DCh] [rbp-2Ch]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+ECh] [rbp-1Ch]
  __int64 v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+168h] [rbp+60h]
  __int64 v36; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v37; // [rsp+180h] [rbp+78h]

  v25 = -2LL;
  v18 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v18 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v19 = 0LL;
  v4 = *(_QWORD *)(v18 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v19 = *(_OWORD *)(v18 + 72);
        break;
      }
    }
  }
  v6 = sub_1800F0EB4(a1);
  sub_1800782CC(v6, &v36, (__int64 *)&v19);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v19 + 1);
  if ( *((_QWORD *)&v19 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
    }
  }
  v20 = 0LL;
  v21 = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
  {
LABEL_47:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( !v9 )
      goto LABEL_47;
  }
  while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) );
  v10 = *(volatile signed __int32 **)(a1 + 16);
  if ( v10 )
    _InterlockedIncrement(v10 + 2);
  v20 = a1 + 1900;
  v21 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *(_DWORD *)(a1 + 1852);
  if ( v10 )
    _InterlockedIncrement(v10 + 2);
  v27[0] = v20;
  v27[1] = (__int64)v10;
  v28 = 0LL;
  v29 = v11;
  v30 = 0;
  v32 = 1;
  v33 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v31 = (unsigned int)(int)(float)(*(float *)(a1 + 1860) * 1000000000.0);
  v12 = v36;
  v13 = (_QWORD *)sub_1801240B8(v36 + 48, v22, 6LL);
  sub_1800FC8A4(v12, &v23, v27, v13);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1784), &v23);
  v15 = v24;
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  *(_BYTE *)(a1 + 1898) = 1;
  result = sub_1800FD1F8(v27, v14);
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v17 = v37;
  if ( v37 )
  {
    result = (unsigned int)_InterlockedDecrement(v37 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
