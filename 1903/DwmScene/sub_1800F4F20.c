/*
 * XREFs of sub_1800F4F20 @ 0x1800F4F20
 * Callers:
 *     sub_180090190 @ 0x180090190 (sub_180090190.c)
 *     sub_1800989B0 @ 0x1800989B0 (sub_1800989B0.c)
 *     sub_1800F4A60 @ 0x1800F4A60 (sub_1800F4A60.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     get_srw_lock @ 0x1800F2F18 (get_srw_lock.c)
 *     sub_1800F3CD4 @ 0x1800F3CD4 (sub_1800F3CD4.c)
 *     sub_1800F3DF4 @ 0x1800F3DF4 (sub_1800F3DF4.c)
 *     sub_1800F44C4 @ 0x1800F44C4 (sub_1800F44C4.c)
 *     sub_1800F51F4 @ 0x1800F51F4 (sub_1800F51F4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F4F20(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 *v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 srw_lock; // rax
  volatile signed __int32 *v18; // rbx
  __int64 *v19; // rax
  unsigned int v20; // [rsp+38h] [rbp-D0h]
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B8h]
  __int64 *v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v26[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v27[5]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD *v30; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v31; // [rsp+108h] [rbp+0h]

  v23 = -2LL;
  v24 = a2;
  result = sub_18006CDB8(*a2);
  if ( !(_DWORD)result || (result = *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 32) == result) )
  {
    v6 = (volatile signed __int32 *)a2[1];
    if ( !v6 )
      return result;
    goto LABEL_25;
  }
  sub_1800634AC(*a2 + 24, v5);
  v7 = a1 + 128;
  if ( !*(_QWORD *)(a1 + 128) )
  {
    v8 = (_QWORD *)sub_18006CD84(*a2);
    sub_1800F3CD4(v8, &v21, 1);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v21);
    v9 = v22;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  result = sub_18006CDB8(*a2);
  v20 = result;
  v10 = *(__int64 **)(*(_QWORD *)v7 + 112LL);
  v11 = v10;
  v12 = (__int64 *)v10[1];
  if ( *((_BYTE *)v12 + 25) )
    goto LABEL_17;
  do
  {
    if ( *((_DWORD *)v12 + 8) >= (unsigned int)result )
    {
      v11 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  while ( !*((_BYTE *)v12 + 25) );
  if ( v11 == v10 || (unsigned int)result < *((_DWORD *)v11 + 8) )
LABEL_17:
    v11 = *(__int64 **)(*(_QWORD *)v7 + 112LL);
  if ( v11 == v10 )
  {
    v30 = 0LL;
    v31 = 0LL;
    sub_1800F3DF4(*a2, (__int64 *)&v30);
    v13 = v30;
    v14 = *(_QWORD *)(a1 + 32);
    v15 = (*(_QWORD *)(a1 + 40) - v14) >> 2;
    v16 = *v30;
    srw_lock = get_srw_lock(*(_QWORD *)(a1 + 16));
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64))(v16 + 40))(
            v13,
            v14,
            (unsigned int)(4 * v15),
            2LL,
            srw_lock) )
    {
      sub_18000E498(v27);
      v19 = sub_18000E498(v26);
      sub_180027770(pExceptionObject, v19, 189, (__int64)v27, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    sub_1800F51F4(*(_QWORD *)(a1 + 128), &v30);
    v29 = v20;
    sub_1800F44C4((__int64 **)(a1 + 88), (__int64)&v25, &v29);
    result = v25;
    *(_DWORD *)(v25 + 32) = 0;
    v18 = v31;
    if ( v31 )
    {
      result = (unsigned int)_InterlockedDecrement(v31 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        result = (unsigned int)_InterlockedDecrement(v18 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
LABEL_25:
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
