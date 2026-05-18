/*
 * XREFs of sub_1800FE9F0 @ 0x1800FE9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180026024 @ 0x180026024 (sub_180026024.c)
 *     sub_1800782CC @ 0x1800782CC (sub_1800782CC.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     sub_1800FC8A4 @ 0x1800FC8A4 (sub_1800FC8A4.c)
 *     sub_1800FD1F8 @ 0x1800FD1F8 (sub_1800FD1F8.c)
 *     sub_1800FD558 @ 0x1800FD558 (sub_1800FD558.c)
 *     sub_1801240B8 @ 0x1801240B8 (sub_1801240B8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800FE9F0(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // xmm1_4
  volatile signed __int32 *v9; // rdi
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-C0h]
  __int128 v20; // [rsp+50h] [rbp-B8h]
  __int128 v21; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  _QWORD v26[7]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+D0h] [rbp-38h]
  __int64 v28; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v29; // [rsp+E0h] [rbp-28h]
  _OWORD v30[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v31; // [rsp+108h] [rbp+0h]
  int v32; // [rsp+10Ch] [rbp+4h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  int v34; // [rsp+118h] [rbp+10h]
  int v35; // [rsp+11Ch] [rbp+14h]
  __int64 v36; // [rsp+158h] [rbp+50h]
  _BYTE v37[56]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v38; // [rsp+198h] [rbp+90h]

  v25 = -2LL;
  v20 = 0LL;
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
        v20 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v21 = 0LL;
  v4 = *(_QWORD *)(v20 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v21 = *(_OWORD *)(v20 + 72);
        break;
      }
    }
  }
  v6 = sub_1800F0EB4(a1);
  sub_1800782CC(v6, &v28, (__int64 *)&v21);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  v18 = 0LL;
  v19 = 0LL;
  sub_1800FD558(a1, &v18);
  v8 = *(_DWORD *)(a1 + 1840);
  v30[0] = 0LL;
  v9 = v19;
  if ( v19 )
  {
    _InterlockedIncrement(v19 + 2);
    v9 = v19;
  }
  *(_QWORD *)&v30[0] = v18;
  *((_QWORD *)&v30[0] + 1) = v9;
  v30[1] = 0LL;
  v31 = v8;
  v32 = 0;
  v34 = 1;
  v35 = 0;
  v36 = 0LL;
  v38 = 0LL;
  v33 = (unsigned int)(int)(float)(*(float *)(a1 + 1848) * 1000000000.0);
  v26[0] = &std::_Func_impl_no_alloc<_lambda_d9a257dcbb16f59f5aa8ab562660455b_,void,>::`vftable';
  v26[1] = a1;
  v27 = v26;
  sub_180026024((__int64)v26, (__int64)v37);
  if ( v27 )
  {
    v10 = v26;
    LOBYTE(v10) = v27 != v26;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v27 + 32LL))(v27, v10);
  }
  v11 = v28;
  v12 = (_QWORD *)sub_1801240B8(v28 + 48, v22, 6LL);
  sub_1800FC8A4(v11, &v23, (__int64 *)v30, v12);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1768), &v23);
  v14 = v24;
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    v9 = v19;
  }
  *(_WORD *)(a1 + 1896) = 1;
  result = sub_1800FD1F8(v30, v13);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement(v9 + 2);
    if ( !(_DWORD)result )
    {
      v16 = v19;
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v17 = v29;
  if ( v29 )
  {
    result = (unsigned int)_InterlockedDecrement(v29 + 2);
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
