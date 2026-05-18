/*
 * XREFs of sub_1801107D0 @ 0x1801107D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800168B0 @ 0x1800168B0 (sub_1800168B0.c)
 *     sub_1800A3BAC @ 0x1800A3BAC (sub_1800A3BAC.c)
 *     sub_1800A8174 @ 0x1800A8174 (sub_1800A8174.c)
 *     sub_1800A8BB8 @ 0x1800A8BB8 (sub_1800A8BB8.c)
 *     sub_1800A8E0C @ 0x1800A8E0C (sub_1800A8E0C.c)
 *     sub_1800EBED8 @ 0x1800EBED8 (sub_1800EBED8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801107D0(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  signed __int32 v8; // eax
  __int64 *v9; // rax
  __int64 *v10; // r14
  volatile signed __int32 *v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  unsigned __int64 v15; // r12
  __int64 result; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-91h] BYREF
  size_t v19[6]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v20; // [rsp+70h] [rbp-51h] BYREF
  volatile signed __int32 *v21; // [rsp+78h] [rbp-49h]
  _BYTE pExceptionObject[24]; // [rsp+80h] [rbp-41h] BYREF
  _BYTE v23[32]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v24[3]; // [rsp+B8h] [rbp-9h] BYREF
  unsigned __int64 v25; // [rsp+D0h] [rbp+Fh]

  v19[4] = -2LL;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 184LL))(a1, v24);
  v19[5] = (size_t)&v18;
  v18 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  if ( !v6 )
  {
LABEL_22:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v8 = *(_DWORD *)(v6 + 8);
    if ( !v8 )
      goto LABEL_22;
  }
  while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v8 + 1, v8) );
  v18 = *(_OWORD *)(a1 + 8);
  v19[2] = 0LL;
  v19[3] = 0LL;
  sub_18000F3F4(v19, (__int64)v24);
  v9 = sub_1800A3BAC(a2, &v20, v19, &v18);
  v10 = (__int64 *)(a1 + 56);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 56), v9);
  v11 = v21;
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 176LL))(a1, v23);
  sub_1800EBED8(*v10, v12);
  v13 = *v10 + 528;
  if ( v13 != a3 )
    sub_1800168B0(v13, *(char **)a3, *(_QWORD *)(a3 + 8));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  v14 = *(char **)a3;
  v15 = (unsigned __int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3 + 3LL) >> 2;
  if ( *(_QWORD *)a3 > *(_QWORD *)(a3 + 8) )
    v15 = 0LL;
  if ( v15 )
  {
    do
    {
      sub_1800A8174(*v10, *(_DWORD *)v14);
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 152LL))(a1, a2);
      sub_1800A8E0C(*v10);
      v14 += 4;
      ++v7;
    }
    while ( v7 != v15 );
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 144LL))(a1, a2);
  result = sub_1800A8BB8(*v10);
  if ( v25 >= 0x10 )
  {
    v17 = v24[0];
    if ( v25 + 1 >= 0x1000 )
    {
      v17 = *(_QWORD *)(v24[0] - 8LL);
      if ( (unsigned __int64)(v24[0] - v17 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v17, v25 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v17);
  }
  return result;
}
