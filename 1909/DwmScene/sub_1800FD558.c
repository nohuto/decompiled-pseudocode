/*
 * XREFs of sub_1800FD558 @ 0x1800FD558
 * Callers:
 *     sub_1800FE9F0 @ 0x1800FE9F0 (sub_1800FE9F0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800FD558(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  signed __int32 v4; // eax
  volatile signed __int32 *v5; // rbx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
LABEL_13:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v4 = *(_DWORD *)(v3 + 8);
    if ( !v4 )
      goto LABEL_13;
  }
  while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
  v5 = *(volatile signed __int32 **)(a1 + 16);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v5 )
    _InterlockedIncrement(v5 + 2);
  a2[1] = v5;
  *a2 = a1 + 1876;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a2;
}
