/*
 * XREFs of sub_1800A3CBC @ 0x1800A3CBC
 * Callers:
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_1801108E0 @ 0x1801108E0 (sub_1801108E0.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800A205C @ 0x1800A205C (sub_1800A205C.c)
 *     sub_1800A251C @ 0x1800A251C (sub_1800A251C.c)
 *     sub_1800A4F2C @ 0x1800A4F2C (sub_1800A4F2C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800A3CBC(__int128 *a1, _QWORD *a2, size_t *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  size_t v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  size_t v16; // rcx
  volatile signed __int32 *v17; // rbx
  const void **v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[7]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[24]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v27[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v28[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v29[4]; // [rsp+E8h] [rbp-18h] BYREF
  const void *Src; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v31[40]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v32[8]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+190h] [rbp+90h] BYREF

  v24[4] = -2LL;
  v24[5] = a2;
  pExceptionObject[8] = a3;
  v24[6] = a4;
  if ( !a3[2] )
  {
    sub_18000E4E8(v28);
    v22 = sub_18000E4E8(v27);
    sub_180027880(v32, v22, 719, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v32;
  }
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18000F444(v24, (__int64)a3);
  if ( (unsigned __int8)sub_1800A4F2C(a1, v24) )
    goto LABEL_23;
  *a2 = 0LL;
  a2[1] = 0LL;
  v23 = 0LL;
  v8 = *((_QWORD *)a1 + 1);
  if ( !v8 )
  {
LABEL_24:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v26);
    throw (std::bad_weak_ptr *)v26;
  }
  do
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( !v9 )
      goto LABEL_24;
  }
  while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) );
  v23 = *a1;
  sub_1800A251C(a2, (__int64)a3, (__int64 *)&v23, a4);
  if ( *((_QWORD *)&v23 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v23 + 1);
      (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
    }
  }
  sub_1800A205C((__int64 *)a1 + 2320, (__int64)&v25, a3);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v25 + 64), a2);
  v11 = a3[3];
  if ( v11 >= 0x10 )
  {
    v12 = *a3;
    v13 = v11 + 1;
    if ( v13 < 0x1000 )
    {
LABEL_16:
      j_j__o_free(v12);
      goto LABEL_17;
    }
    v14 = v13 + 39;
    v15 = *(_QWORD *)(v12 - 8);
    v16 = v12 - v15;
    if ( v16 - 8 <= 0x1F )
    {
      v12 = v15;
      goto LABEL_16;
    }
    o__invalid_parameter_noinfo_noreturn(v16, v14);
LABEL_23:
    v19 = sub_18009FC40(&Src, "ShaderManager::CreateShaderFamily() -- shader family with name '", a3);
    v20 = sub_18002C088((__int64)v31, v19, "' already exists");
    v21 = sub_18000E4E8(v29);
    sub_180027880(pExceptionObject, v21, 722, v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_17:
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  v17 = (volatile signed __int32 *)a4[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return a2;
}
