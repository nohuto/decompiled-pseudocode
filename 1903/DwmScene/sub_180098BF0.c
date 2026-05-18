/*
 * XREFs of sub_180098BF0 @ 0x180098BF0
 * Callers:
 *     sub_18009BA20 @ 0x18009BA20 (sub_18009BA20.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_1800A9250 @ 0x1800A9250 (sub_1800A9250.c)
 *     sub_1800F09C8 @ 0x1800F09C8 (sub_1800F09C8.c)
 *     sub_1800F2944 @ 0x1800F2944 (sub_1800F2944.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180098BF0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // r15
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // r14
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rsi
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbx
  _QWORD *v14; // rax
  volatile signed __int32 *v15; // rdi
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  _QWORD *v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 *v20; // rax
  volatile signed __int32 *v21; // r15
  __int64 result; // rax
  volatile signed __int32 *v23; // rbx
  __int64 *v24; // rax
  _BYTE v25[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v26; // [rsp+90h] [rbp-78h]
  _BYTE v27[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v28; // [rsp+A0h] [rbp-68h]
  _BYTE v29[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v30; // [rsp+B0h] [rbp-58h]
  _BYTE v31[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v32; // [rsp+C0h] [rbp-48h]
  _QWORD v33[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v34[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+108h] [rbp+0h] BYREF

  if ( a2 >= (*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) / 88LL )
  {
    sub_18000E498(v34);
    v24 = sub_18000E498(v33);
    sub_18006575C(pExceptionObject, v24, 203LL, (__int64)v34, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 104) + 88 * a2);
  v6 = (_QWORD *)sub_1800A9250(*a3, 0LL);
  v7 = (volatile signed __int32 *)v6[1];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)v6[1];
  }
  v8 = (__int64 *)sub_1800F2944(*v6, v25);
  std::shared_ptr<__ExceptionPtr>::operator=(v5 + 3, v8);
  v9 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (_QWORD *)sub_1800A9250(*a3, 3LL);
  v11 = (volatile signed __int32 *)v10[1];
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = (volatile signed __int32 *)v10[1];
  }
  v12 = (__int64 *)sub_1800F2944(*v10, v27);
  std::shared_ptr<__ExceptionPtr>::operator=(v5 + 5, v12);
  v13 = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (_QWORD *)sub_1800A9250(*a3, 7LL);
  v15 = (volatile signed __int32 *)v14[1];
  if ( v15 )
  {
    _InterlockedIncrement(v15 + 2);
    v15 = (volatile signed __int32 *)v14[1];
  }
  v16 = (__int64 *)sub_1800F2944(*v14, v29);
  std::shared_ptr<__ExceptionPtr>::operator=(v5 + 7, v16);
  v17 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  v18 = (_QWORD *)sub_1800A9250(*a3, 8LL);
  v19 = (volatile signed __int32 *)v18[1];
  if ( v19 )
  {
    _InterlockedIncrement(v19 + 2);
    v19 = (volatile signed __int32 *)v18[1];
  }
  v20 = (__int64 *)sub_1800F2944(*v18, v31);
  std::shared_ptr<__ExceptionPtr>::operator=(v5 + 9, v20);
  v21 = v32;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  result = sub_1800F09C8(a1);
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v19 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  if ( v15 )
  {
    result = (unsigned int)_InterlockedDecrement(v15 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v23 = (volatile signed __int32 *)a3[1];
  if ( v23 )
  {
    result = (unsigned int)_InterlockedDecrement(v23 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      result = (unsigned int)_InterlockedDecrement(v23 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  return result;
}
