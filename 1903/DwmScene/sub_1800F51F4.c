/*
 * XREFs of sub_1800F51F4 @ 0x1800F51F4
 * Callers:
 *     sub_1800F4F20 @ 0x1800F4F20 (sub_1800F4F20.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800F4568 @ 0x1800F4568 (sub_1800F4568.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F51F4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 result; // rax
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13[4]; // [rsp+48h] [rbp-10h] BYREF

  v13[0] = *(_DWORD *)(*a2 + 88);
  sub_1800F4568((__int64 **)(a1 + 112), (__int64)&v11, v13);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v11 + 40), a2);
  v4 = *(_QWORD *)(a1 + 104);
  if ( !v4 )
  {
LABEL_16:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_16;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(volatile signed __int32 **)(a1 + 104);
  result = *a2;
  v9 = v7 + 3;
  if ( v7 )
    _InterlockedIncrement(v9);
  *(_QWORD *)(result + 104) = v6;
  v10 = *(volatile signed __int32 **)(result + 112);
  *(_QWORD *)(result + 112) = v7;
  if ( v10 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedExchangeAdd(v9, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
