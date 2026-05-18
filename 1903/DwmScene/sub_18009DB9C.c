/*
 * XREFs of sub_18009DB9C @ 0x18009DB9C
 * Callers:
 *     sub_18009D918 @ 0x18009D918 (sub_18009D918.c)
 *     sub_18009E7AC @ 0x18009E7AC (sub_18009E7AC.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18009CEBC @ 0x18009CEBC (sub_18009CEBC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009DB9C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v6; // eax
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-20h] BYREF

  v4 = *a2;
  v14 = *(_DWORD *)(*a2 + 88);
  sub_18009CEBC((__int64 **)(a1 + 112), (__int64)&v12, &v14);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v12 + 40), a2);
  v5 = *(_QWORD *)(a1 + 104);
  if ( !v5 )
  {
LABEL_20:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v6 = *(_DWORD *)(v5 + 8);
    if ( !v6 )
      goto LABEL_20;
  }
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6) );
  result = *(_QWORD *)(a1 + 96);
  v8 = *(volatile signed __int32 **)(a1 + 104);
  v9 = v8 + 3;
  if ( v8 )
    _InterlockedIncrement(v9);
  *(_QWORD *)(v4 + 96) = result;
  v10 = *(volatile signed __int32 **)(v4 + 104);
  *(_QWORD *)(v4 + 104) = v8;
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 3);
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v9);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v11 = (volatile signed __int32 *)a2[1];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
