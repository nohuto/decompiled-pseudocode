/*
 * XREFs of sub_1800293C0 @ 0x1800293C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800293C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rsi
  int v9; // edi
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  unsigned int v15; // eax
  __int64 v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v20[4]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
  *(_DWORD *)(a4 + 36) = 4;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(
         a2,
         a3,
         v8,
         a4,
         0LL,
         0LL,
         a5) < 0 )
  {
    *(_DWORD *)(a4 + 36) = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(
           a2,
           a3,
           v8,
           a4,
           0LL,
           0LL,
           a5);
    if ( v9 < 0 )
    {
      sub_18000E498(v20);
      v11 = (void *)unknown_libname_174(v20, (__int64)" File=");
      unknown_libname_174(v11, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
      v12 = (void *)unknown_libname_174(v20, (__int64)" Line=");
      unknown_libname_174(v12, (__int64)"816");
      v13 = (void *)unknown_libname_174(v20, (__int64)" Message=");
      unknown_libname_174(v13, (__int64)"\"factory->CreateSwapChainForHwnd failure\"");
      sub_18000F794(v16, v9);
      v14 = (void *)unknown_libname_174(v20, (__int64)" HRESULT=");
      unknown_libname_112(v14);
      std::string::_Tidy_deallocate(v16);
      unknown_libname_3(v20);
      sub_18000E498(v18);
      v15 = (unsigned int)sub_18000E498(v17);
      sub_180065810((unsigned int)pExceptionObject, v15, 816, v9, (__int64)v18, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, v8, 2LL);
}
