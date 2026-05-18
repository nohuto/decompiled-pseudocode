/*
 * XREFs of sub_180099730 @ 0x180099730
 * Callers:
 *     sub_18009BB30 @ 0x18009BB30 (sub_18009BB30.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180099730(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-91h] BYREF
  __int128 v11; // [rsp+48h] [rbp-79h] BYREF
  __int128 v12; // [rsp+58h] [rbp-69h] BYREF
  __int128 v13; // [rsp+68h] [rbp-59h] BYREF
  __int64 v14; // [rsp+78h] [rbp-49h]
  _QWORD v15[4]; // [rsp+80h] [rbp-41h] BYREF
  _QWORD v16[5]; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+C8h] [rbp+7h] BYREF

  v14 = -2LL;
  v2 = *(_QWORD *)(a1 + 104);
  if ( a2 >= (*(_QWORD *)(a1 + 112) - v2) / 88 )
  {
    sub_18000E4E8(v16);
    v9 = sub_18000E4E8(v15);
    sub_18006586C(pExceptionObject, v9, 229LL, (__int64)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = (_QWORD *)(v2 + 88 * a2);
  *(_OWORD *)&v10[1] = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(v3 + 3, &v10[1]);
  if ( v10[2] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10[2] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = v10[2];
      (**(void (__fastcall ***)(_QWORD))v10[2])(v10[2]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[2] + 8LL))(v10[2]);
    }
  }
  v11 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(v3 + 5, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  v12 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(v3 + 7, (__int64 *)&v12);
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v12 + 1);
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  v13 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v3 + 9, (__int64 *)&v13);
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v8 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  return result;
}
