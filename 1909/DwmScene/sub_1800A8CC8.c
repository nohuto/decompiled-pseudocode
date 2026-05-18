/*
 * XREFs of sub_1800A8CC8 @ 0x1800A8CC8
 * Callers:
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_1801108E0 @ 0x1801108E0 (sub_1801108E0.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800A3BB0 @ 0x1800A3BB0 (sub_1800A3BB0.c)
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 *     sub_1800F2A54 @ 0x1800F2A54 (sub_1800F2A54.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A8CC8(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rbx
  unsigned int v8; // esi
  _QWORD *v9; // r14
  __int64 *v10; // rax
  __int64 result; // rax
  volatile signed __int32 *v12; // rbx
  __int64 *v13; // rax
  __int128 v14; // [rsp+38h] [rbp-89h] BYREF
  __int128 v15; // [rsp+48h] [rbp-79h] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h]
  __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  volatile signed __int32 *v18; // [rsp+68h] [rbp-59h]
  _BYTE v19[8]; // [rsp+70h] [rbp-51h] BYREF
  volatile signed __int32 *v20; // [rsp+78h] [rbp-49h]
  _QWORD v21[4]; // [rsp+80h] [rbp-41h] BYREF
  _QWORD v22[5]; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C8h] [rbp+7h] BYREF

  v16 = -2LL;
  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_18000E4E8(v22);
    v13 = sub_18000E4E8(v21);
    sub_180027880(pExceptionObject, v13, 457, (__int64)v22, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v2 = 0;
  v3 = (__int64 *)(a1 + 104);
  do
  {
    v14 = 0uLL;
    v4 = *v3;
    if ( *v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = *v3;
    }
    *(_QWORD *)&v14 = *(v3 - 1);
    *((_QWORD *)&v14 + 1) = v4;
    if ( !(_QWORD)v14 )
    {
      v5 = sub_1800A3BB0(*(__int128 **)(a1 + 440), &v17, v2);
      std::shared_ptr<__ExceptionPtr>::operator=(&v14, v5);
      v6 = v18;
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
          if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
      sub_1800F2BD4(v14);
      v15 = 0LL;
      v4 = *((_QWORD *)&v14 + 1);
      if ( *((_QWORD *)&v14 + 1) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
        v4 = *((_QWORD *)&v14 + 1);
      }
      v15 = v14;
      sub_1800A9BE4(a1, &v15);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      {
        v7 = *((_QWORD *)&v14 + 1);
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    ++v2;
    v3 += 2;
  }
  while ( v2 < 0xA );
  *(_DWORD *)(a1 + 432) = 1;
  v8 = 0;
  v9 = (_QWORD *)(a1 + 96);
  do
  {
    v10 = (__int64 *)sub_1800F2A54(*v9, v19);
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * ((int)v8 + 16LL)), v10);
    v12 = v20;
    if ( v20 )
    {
      result = (unsigned int)_InterlockedDecrement(v20 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        result = (unsigned int)_InterlockedDecrement(v12 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    ++v8;
    v9 += 2;
  }
  while ( v8 < 0xA );
  return result;
}
