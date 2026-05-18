/*
 * XREFs of sub_180091020 @ 0x180091020
 * Callers:
 *     sub_180090F64 @ 0x180090F64 (sub_180090F64.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18008F780 @ 0x18008F780 (sub_18008F780.c)
 *     sub_18008F828 @ 0x18008F828 (sub_18008F828.c)
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180091020(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  _QWORD *v8; // rax
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-49h] BYREF
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-31h] BYREF
  __int64 v16; // [rsp+48h] [rbp-21h]
  __int64 v17; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-9h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+7h] BYREF
  volatile signed __int32 *v21; // [rsp+78h] [rbp+Fh]
  _BYTE pExceptionObject[24]; // [rsp+80h] [rbp+17h] BYREF
  __int16 v23; // [rsp+98h] [rbp+2Fh] BYREF

  v16 = -2LL;
  v23 = a2;
  v14 = a3;
  sub_18008F780((__int64 **)(a1 + 200), (__int64)&v17, (unsigned __int16 *)&v23);
  *(_DWORD *)(v17 + 32) = 1;
  v13 = 0LL;
  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
LABEL_19:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_19;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v13 = *(_OWORD *)(a1 + 96);
  v8 = sub_18008F828(&v20, (__int64 *)&v13, &v23, &v14);
  v15 = 0LL;
  v15 = *(_OWORD *)v8;
  *v8 = 0LL;
  v8[1] = 0LL;
  result = sub_1800E286C(a4, v18, v14, &v15, v13);
  v10 = v19;
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = v21;
  if ( v21 )
  {
    result = (unsigned int)_InterlockedDecrement(v21 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v12 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  return result;
}
