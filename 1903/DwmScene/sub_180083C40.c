/*
 * XREFs of sub_180083C40 @ 0x180083C40
 * Callers:
 *     sub_180102010 @ 0x180102010 (sub_180102010.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180083C40(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  signed __int32 v10; // eax
  int v12; // [rsp+20h] [rbp-50h]
  _BYTE pExceptionObject[24]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp-18h]

  sub_180087340(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_23:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_23;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  *a2 = *(_QWORD *)(a1 + 8);
  a2[1] = *(_QWORD *)(a1 + 16);
  v12 = 3;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v6 = *a2;
    sub_180087340(*a2);
    v7 = 0LL;
    v8 = 0LL;
    v9 = *(_QWORD *)(v6 + 64);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          v7 = *(_QWORD *)(v6 + 56);
          v8 = *(volatile signed __int32 **)(v6 + 64);
          break;
        }
      }
    }
    v12 |= 4u;
    v14 = v7;
    v15 = v8;
    if ( !v7 )
      break;
    std::shared_ptr<__ExceptionPtr>::operator=(a2, &v14);
    if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
