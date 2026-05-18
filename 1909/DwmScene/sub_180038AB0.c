/*
 * XREFs of sub_180038AB0 @ 0x180038AB0
 * Callers:
 *     sub_180037470 @ 0x180037470 (sub_180037470.c)
 *     sub_180037620 @ 0x180037620 (sub_180037620.c)
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180032E24 @ 0x180032E24 (sub_180032E24.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180038AB0(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r12
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  signed __int32 v14; // eax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  unsigned int v19; // eax
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int64 v24[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v25[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v26[5]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+D0h] [rbp-30h] BYREF
  void *v28; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v29[4]; // [rsp+120h] [rbp+20h] BYREF

  v23 = -2LL;
  v4 = a4;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(a1 + 144) + 112LL))(
         *(_QWORD *)(a1 + 144),
         a2,
         0LL,
         4LL,
         0,
         &v28);
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v9 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v14 + 1, v14) )
      {
        *(_QWORD *)&v20 = *(_QWORD *)(a1 + 72);
        v10 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v20 + 1) = v10;
        goto LABEL_3;
      }
    }
  }
  v10 = *((_QWORD *)&v20 + 1);
LABEL_3:
  sub_180032E24(&v21, &v20);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
    {
      v11 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  sub_1800254C0(v21, v8);
  if ( v8 < 0 )
  {
    sub_18000E4E8(v29);
    v15 = (void *)unknown_libname_174(v29, (__int64)" File=");
    unknown_libname_174(v15, (__int64)"..\\Source\\CommandListD3D11.cpp");
    v16 = (void *)unknown_libname_174(v29, (__int64)" Line=");
    unknown_libname_174(v16, (__int64)"432");
    v17 = (void *)unknown_libname_174(v29, (__int64)" Message=");
    unknown_libname_174(v17, (__int64)"\"m_deviceContext->Map() failure when attempting to update buffer\"");
    sub_18000F7E4(v24, v8);
    v18 = (void *)unknown_libname_174(v29, (__int64)" HRESULT=");
    unknown_libname_112(v18);
    std::string::_Tidy_deallocate(v24);
    unknown_libname_3(v29);
    sub_18000E4E8(v26);
    v19 = (unsigned int)sub_18000E4E8(v25);
    sub_180065920((unsigned int)pExceptionObject, v19, 432, v8, (__int64)v26, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18000D458(v28, v4, a3, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 120LL))(
             *(_QWORD *)(a1 + 144),
             a2,
             0LL);
  if ( v22 )
  {
    result = (unsigned int)_InterlockedDecrement(v22 + 2);
    if ( !(_DWORD)result )
    {
      v13 = v22;
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  return result;
}
