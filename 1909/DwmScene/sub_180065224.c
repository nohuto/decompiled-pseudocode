/*
 * XREFs of sub_180065224 @ 0x180065224
 * Callers:
 *     sub_180064BC0 @ 0x180064BC0 (sub_180064BC0.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 * Callees:
 *     sub_18000DA30 @ 0x18000DA30 (sub_18000DA30.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180032B64 @ 0x180032B64 (sub_180032B64.c)
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18009DA28 @ 0x18009DA28 (sub_18009DA28.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180065224(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r14d
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rax
  _QWORD *v21; // rcx
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rax
  _QWORD *v27; // rcx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int128 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+88h] [rbp-80h]
  volatile signed __int32 *v36; // [rsp+90h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-70h]
  volatile signed __int32 *v38; // [rsp+A0h] [rbp-68h]
  _BYTE pExceptionObject[24]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v40[4]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v41[4]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v42[4]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD *v43; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v44; // [rsp+128h] [rbp+20h]
  unsigned int v45; // [rsp+130h] [rbp+28h] BYREF

  v33 = -2LL;
  result = sub_18006CEC8(a2);
  v5 = result;
  if ( (_DWORD)result )
  {
    v30 = 0LL;
    v6 = *(_QWORD *)(a2 + 16);
    if ( !v6 )
    {
LABEL_46:
      std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
      throw (std::bad_weak_ptr *)pExceptionObject;
    }
    do
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        goto LABEL_46;
    }
    while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
    v30 = *(_OWORD *)(a2 + 8);
    sub_1800642C0(a1, &v30);
    v8 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
    if ( *((_QWORD *)&v30 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v43 = 0LL;
    v44 = 0LL;
    sub_18000DA30(a2, &v43);
    v9 = sub_180064408(a1, v40);
    sub_1800645F4((__int64)v43, v9);
    v10 = *(_QWORD *)(a1 + 136);
    if ( v10 && (v11 = *(_QWORD *)(v10 + 128)) != 0 )
      v12 = *(unsigned int *)(v11 + 16);
    else
      v12 = 0LL;
    if ( v10 && (v13 = *(_QWORD *)(v10 + 128)) != 0 )
      v14 = *(unsigned int *)(v13 + 4);
    else
      v14 = 0LL;
    if ( v10 && (v15 = *(unsigned int **)(v10 + 128)) != 0LL )
      v16 = *v15;
    else
      v16 = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _DWORD))(*v43 + 40LL))(
      v43,
      v16,
      v14,
      v12,
      *(_DWORD *)(a1 + 112));
    v45 = v5;
    sub_180032B64((__int64 **)(a1 + 120), (__int64)&v34, &v45);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v34 + 40), &v43);
    v17 = *(_QWORD *)(a1 + 136);
    if ( v17 )
    {
      v18 = v43;
      v31 = 0LL;
      v19 = v43[13];
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v17 = *(_QWORD *)(a1 + 136);
      }
      v31 = *((_OWORD *)v18 + 6);
      sub_18009DA28(v17, &v31);
      v20 = sub_180064408(*(_QWORD *)(a1 + 136), v41);
      v21 = v43;
      v22 = (volatile signed __int32 *)v43[13];
      if ( v22 )
      {
        _InterlockedIncrement(v22 + 2);
        v22 = (volatile signed __int32 *)v21[13];
      }
      v35 = v21[12];
      v36 = v22;
      sub_1800645F4(v35, v20);
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        }
      }
    }
    v23 = *(_QWORD *)(a1 + 152);
    if ( v23 )
    {
      v24 = v43;
      v32 = 0LL;
      v25 = v43[15];
      if ( v25 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
        v23 = *(_QWORD *)(a1 + 152);
      }
      v32 = *((_OWORD *)v24 + 7);
      sub_18009DA28(v23, &v32);
      v26 = sub_180064408(*(_QWORD *)(a1 + 152), v42);
      v27 = v43;
      v28 = (volatile signed __int32 *)v43[15];
      if ( v28 )
      {
        _InterlockedIncrement(v28 + 2);
        v28 = (volatile signed __int32 *)v27[15];
      }
      v37 = v27[14];
      v38 = v28;
      sub_1800645F4(v37, v26);
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
    }
    result = sub_1800644BC(a1, v5);
    v29 = v44;
    if ( v44 )
    {
      result = (unsigned int)_InterlockedDecrement(v44 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        result = (unsigned int)_InterlockedDecrement(v29 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
  }
  return result;
}
