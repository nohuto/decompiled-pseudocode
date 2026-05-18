/*
 * XREFs of sub_18009020C @ 0x18009020C
 * Callers:
 *     sub_1800A817C @ 0x1800A817C (sub_1800A817C.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800A8EF0 @ 0x1800A8EF0 (sub_1800A8EF0.c)
 *     sub_1800A9250 @ 0x1800A9250 (sub_1800A9250.c)
 *     sub_1800F2944 @ 0x1800F2944 (sub_1800F2944.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009020C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rdi
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rdx
  signed __int32 v12; // eax
  __int64 result; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // rbx
  _BYTE v18[8]; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int32 *v19; // [rsp+40h] [rbp-48h]
  _BYTE v20[8]; // [rsp+48h] [rbp-40h] BYREF
  volatile signed __int32 *v21; // [rsp+50h] [rbp-38h]
  _BYTE pExceptionObject[24]; // [rsp+58h] [rbp-30h] BYREF

  v4 = a1 + 17;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 17, a2);
  v5 = (_QWORD *)sub_1800A9250(*a2, 2LL);
  v6 = (volatile signed __int32 *)v5[1];
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = (volatile signed __int32 *)v5[1];
  }
  v7 = (__int64 *)sub_1800F2944(*v5, v18);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 15, v7);
  v8 = v19;
  if ( v19 )
  {
    if ( !_InterlockedDecrement(v19 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (_QWORD *)sub_1800A8EF0(*v4, v20);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v9 + 16LL))(*v9, a1);
  v10 = v21;
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = a1[13];
  if ( !v11 )
  {
LABEL_34:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v12 = *(_DWORD *)(v11 + 8);
    if ( !v12 )
      goto LABEL_34;
  }
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12) );
  result = a1[12];
  v14 = (volatile signed __int32 *)a1[13];
  v15 = v14 + 3;
  if ( v14 )
    _InterlockedIncrement(v15);
  a1[27] = result;
  v16 = (volatile signed __int32 *)a1[28];
  a1[28] = v14;
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 3);
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v15);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
