/*
 * XREFs of sub_1800296C0 @ 0x1800296C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     sub_180067BD0 @ 0x180067BD0 (sub_180067BD0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800296C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  int v10; // edi
  __int64 (__fastcall *v11)(_QWORD, __int64); // rdi
  __int64 v12; // rax
  signed __int32 v13; // eax
  bool v14; // zf
  volatile signed __int32 *v15; // rbx
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  void *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v22; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[4]; // [rsp+110h] [rbp+10h] BYREF

  v23 = -2LL;
  v21 = 0LL;
  v22 = 0LL;
  result = sub_180029C14(a1, &v21);
  if ( v21 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 192LL))(
            a2,
            a3,
            a4,
            0LL,
            a5);
    if ( v10 < 0 )
    {
      sub_18000E4E8(v29);
      v16 = (void *)unknown_libname_174(v29, (__int64)" File=");
      unknown_libname_174(v16, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
      v17 = (void *)unknown_libname_174(v29, (__int64)" Line=");
      unknown_libname_174(v17, (__int64)"728");
      v18 = (void *)unknown_libname_174(v29, (__int64)" Message=");
      unknown_libname_174(v18, (__int64)"\"factory->CreateSwapChainForComposition failure\"");
      sub_18000F7E4(v24, v10);
      v19 = (void *)unknown_libname_174(v29, (__int64)" HRESULT=");
      unknown_libname_112(v19);
      std::string::_Tidy_deallocate(v24);
      unknown_libname_3(v29);
      sub_18000E4E8(v26);
      v20 = (unsigned int)sub_18000E4E8(v25);
      sub_180065920((unsigned int)pExceptionObject, v20, 728, v10, (__int64)v26, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    result = sub_180067BD0(a1, v27);
    v11 = *(__int64 (__fastcall **)(_QWORD, __int64))(result + 16);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      result = v11(*a5, v12);
    }
  }
  if ( v22 )
  {
    v13 = _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      v15 = v22;
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  return result;
}
