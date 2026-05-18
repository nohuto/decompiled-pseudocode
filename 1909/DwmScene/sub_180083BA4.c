/*
 * XREFs of sub_180083BA4 @ 0x180083BA4
 * Callers:
 *     sub_18008B02C @ 0x18008B02C (sub_18008B02C.c)
 *     sub_180102AC0 @ 0x180102AC0 (sub_180102AC0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180083BA4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  signed __int32 v10; // eax
  __int64 v11; // rbx
  int v13; // [rsp+20h] [rbp-50h]
  _BYTE pExceptionObject[24]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  sub_180087450(a1);
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
  v13 = 3;
  while ( 1 )
  {
    v6 = *a2;
    sub_180087450(*a2);
    v15 = 0LL;
    v7 = *(_QWORD *)(v6 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v7 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v10 + 1, v10) )
        {
          *(_QWORD *)&v15 = *(_QWORD *)(v6 + 56);
          v8 = *(_QWORD *)(v6 + 64);
          *((_QWORD *)&v15 + 1) = v8;
          goto LABEL_9;
        }
      }
    }
    v8 = *((_QWORD *)&v15 + 1);
LABEL_9:
    v13 |= 4u;
    if ( !(_QWORD)v15 )
      break;
    std::shared_ptr<__ExceptionPtr>::operator=(a2, &v15);
    if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v11 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  return a2;
}
