/*
 * XREFs of sub_18008A6D0 @ 0x18008A6D0
 * Callers:
 *     sub_180089C5C @ 0x180089C5C (sub_180089C5C.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_180081594 @ 0x180081594 (sub_180081594.c)
 *     ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_2 @ 0x180088EE4 (--$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_2.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18008A6D0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rsi
  void *v10; // rax
  __int64 v11; // r14
  __int128 v13; // [rsp+30h] [rbp-40h]
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+50h] [rbp-20h] BYREF

  sub_1800635BC((__int64)(a1 + 2), (__int64)a2);
  v6 = a1[1];
  if ( !v6 )
  {
LABEL_15:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_15;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  *(_QWORD *)&v13 = *a1;
  v8 = (volatile signed __int32 *)a1[1];
  v9 = v8;
  *((_QWORD *)&v13 + 1) = v8;
  v10 = operator new(0x250uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset(v10, 0, 0x250uLL);
    v14 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v9 = v8;
    }
    v14 = v13;
    v10 = (void *)sub_180081594(v11, &v14, *a3);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(a2, (void (__fastcall ***)(_QWORD, __int64))v10);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
