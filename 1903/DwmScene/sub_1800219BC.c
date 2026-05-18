/*
 * XREFs of sub_1800219BC @ 0x1800219BC
 * Callers:
 *     sub_180023618 @ 0x180023618 (sub_180023618.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall sub_1800219BC(__int64 a1)
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
  v1 = (_QWORD *)sub_18002317C(a1, v10);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v1 + 232LL))(*v1, 87LL, &v15);
  v3 = (_QWORD *)v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 16LL))(v3, *v3);
  }
  if ( v2 < 0 )
  {
    sub_18000E498(v16);
    v5 = (void *)unknown_libname_174(v16, (__int64)" File=");
    unknown_libname_174(v5, (__int64)"..\\Source\\RendererD3D11.cpp");
    v6 = (void *)unknown_libname_174(v16, (__int64)" Line=");
    unknown_libname_174(v6, (__int64)"1009");
    v7 = (void *)unknown_libname_174(v16, (__int64)" Message=");
    unknown_libname_174(v7, (__int64)"\"GetDevice()->CheckFormatSupport failure\"");
    sub_18000F794(v11, v2);
    v8 = (void *)unknown_libname_174(v16, (__int64)" HRESULT=");
    unknown_libname_112(v8);
    std::string::_Tidy_deallocate(v11);
    unknown_libname_3(v16);
    sub_18000E498(v13);
    v9 = (unsigned int)sub_18000E498(v12);
    sub_180065810((unsigned int)pExceptionObject, v9, 1009, v2, (__int64)v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return (v15 & 0x240000) == 2359296;
}
