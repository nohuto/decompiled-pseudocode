/*
 * XREFs of sub_1800B8E94 @ 0x1800B8E94
 * Callers:
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180082640 @ 0x180082640 (sub_180082640.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     sub_1800BABD8 @ 0x1800BABD8 (sub_1800BABD8.c)
 *     sub_1800BCABC @ 0x1800BCABC (sub_1800BCABC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800B8E94(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  volatile signed __int32 *v5; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int128 v11; // [rsp+28h] [rbp-39h] BYREF
  __int128 v12; // [rsp+38h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h]
  _BYTE v14[8]; // [rsp+50h] [rbp-11h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp-9h]
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-1h] BYREF
  __int128 v17; // [rsp+78h] [rbp+17h] BYREF

  v13 = -2LL;
  *(_QWORD *)&v11 = a2;
  sub_180087524(a1);
  v4 = *(_QWORD *)sub_1800BABD8(a1, v14);
  v5 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v17 = 0uLL;
    v11 = 0LL;
    v7 = *(_QWORD *)(a1 + 16);
    if ( !v7 )
    {
LABEL_24:
      std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
      throw (std::bad_weak_ptr *)pExceptionObject;
    }
    do
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        goto LABEL_24;
    }
    while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) );
    v11 = *(_OWORD *)(a1 + 8);
    sub_1800BCABC(&v17, &v11);
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *((_QWORD *)&v11 + 1);
        (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
      }
    }
    v12 = 0LL;
    if ( *((_QWORD *)&v17 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
    v12 = v17;
    sub_180082640(a1, (_QWORD **)&v12);
    v10 = (volatile signed __int32 *)*((_QWORD *)&v12 + 1);
    if ( *((_QWORD *)&v12 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    *(_OWORD *)a2 = v17;
  }
  return a2;
}
