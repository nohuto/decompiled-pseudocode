/*
 * XREFs of sub_180021ACC @ 0x180021ACC
 * Callers:
 *     sub_180023728 @ 0x180023728 (sub_180023728.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall sub_180021ACC(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // edi
  _QWORD *v3; // rcx
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  unsigned int v9; // eax
  _QWORD v10[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v12[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v13[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+A8h] [rbp-60h] BYREF
  int v15; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v16[4]; // [rsp+F0h] [rbp-18h] BYREF

  v10[1] = -2LL;
  v15 = 0;
  v1 = (_QWORD *)sub_18002328C(a1, v10);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v1 + 232LL))(*v1, 87LL, &v15);
  v3 = (_QWORD *)v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 16LL))(v3, *v3);
  }
  if ( v2 < 0 )
  {
    sub_18000E4E8(v16);
    v5 = (void *)unknown_libname_174(v16, (__int64)" File=");
    unknown_libname_174(v5, (__int64)"..\\Source\\RendererD3D11.cpp");
    v6 = (void *)unknown_libname_174(v16, (__int64)" Line=");
    unknown_libname_174(v6, (__int64)"1009");
    v7 = (void *)unknown_libname_174(v16, (__int64)" Message=");
    unknown_libname_174(v7, (__int64)"\"GetDevice()->CheckFormatSupport failure\"");
    sub_18000F7E4(v11, v2);
    v8 = (void *)unknown_libname_174(v16, (__int64)" HRESULT=");
    unknown_libname_112(v8);
    std::string::_Tidy_deallocate(v11);
    unknown_libname_3(v16);
    sub_18000E4E8(v13);
    v9 = (unsigned int)sub_18000E4E8(v12);
    sub_180065920((unsigned int)pExceptionObject, v9, 1009, v2, (__int64)v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return (v15 & 0x240000) == 2359296;
}
