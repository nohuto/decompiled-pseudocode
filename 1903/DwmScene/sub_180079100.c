/*
 * XREFs of sub_180079100 @ 0x180079100
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180075824 @ 0x180075824 (sub_180075824.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_180077B7C @ 0x180077B7C (sub_180077B7C.c)
 *     sub_18007E340 @ 0x18007E340 (sub_18007E340.c)
 *     sub_18007F54C @ 0x18007F54C (sub_18007F54C.c)
 *     sub_1800A4EA8 @ 0x1800A4EA8 (sub_1800A4EA8.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x180127544 (_Cnd_signal.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180079100(__int64 a1, __int64 a2)
{
  int i; // eax
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-40h]
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21[3]; // [rsp+58h] [rbp-18h] BYREF

  sub_1800634AC(a1 + 8, a2);
  for ( i = sub_180077B7C(a1); i; i = sub_180077B7C(a1) )
  {
    v4 = sub_180077B7C(a1);
    v17 = 0LL;
    v18 = 0LL;
    sub_180077A9C(a1, &v17, v4 - 1);
    sub_180076608(a1, &v17);
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v5 = v18;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  sub_1800A4EA8(*(_QWORD *)(a1 + 512));
  v19 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 512), (__int64 *)&v19);
  if ( *((_QWORD *)&v19 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  sub_180075824(a1);
  v7 = a1 + 728;
  v8 = *(_QWORD *)(a1 + 728);
  sub_18007E340(a1 + 728, *(_QWORD *)(v8 + 8));
  *(_QWORD *)(*(_QWORD *)v7 + 8LL) = v8;
  **(_QWORD **)v7 = v8;
  *(_QWORD *)(*(_QWORD *)v7 + 16LL) = v8;
  *(_QWORD *)(a1 + 736) = 0LL;
  v20 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 480), (__int64 *)&v20);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  *(_OWORD *)v21 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 496), v21);
  if ( v21[1] )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21[1] + 8));
    if ( !(_DWORD)result )
    {
      v11 = v21[1];
      (**(void (__fastcall ***)(__int64))v21[1])(v21[1]);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21[1] + 8LL))(v21[1]);
    }
  }
  v12 = *(_QWORD *)(a1 + 712);
  v13 = *(_QWORD *)(a1 + 704);
  if ( v13 != v12 )
  {
    do
    {
      result = unknown_libname_115(v13, 0);
      v13 += 16LL;
    }
    while ( v13 != v12 );
    v13 = *(_QWORD *)(a1 + 704);
  }
  *(_QWORD *)(a1 + 712) = v13;
  if ( *(_DWORD *)(a1 + 1192) )
  {
    v14 = Mtx_lock((_Mtx_t)(a1 + 1280));
    if ( v14 )
      std::_Throw_C_error(v14);
    *(_BYTE *)(a1 + 1360) = 1;
    v15 = Cnd_signal((_Cnd_t)(a1 + 1208));
    if ( v15 )
      std::_Throw_C_error(v15);
    v16 = Mtx_unlock((_Mtx_t)(a1 + 1280));
    if ( v16 )
      std::_Throw_C_error(v16);
    return sub_18007F54C(a1 + 1184);
  }
  return result;
}
