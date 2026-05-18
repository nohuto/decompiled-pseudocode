/*
 * XREFs of sub_1800231F0 @ 0x1800231F0
 * Callers:
 *     <none>
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
__int64 __fastcall sub_1800231F0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // edi
  unsigned int v6; // ebx
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  unsigned int v12; // eax
  _QWORD v13[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v16[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+E8h] [rbp-20h] BYREF
  int v19; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v20[4]; // [rsp+F8h] [rbp-10h] BYREF

  v13[1] = -2LL;
  v19 = -1;
  v18 = 0LL;
  v1 = sub_18002317C(a1, v13);
  v2 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  (**(void (__fastcall ***)(_QWORD, void *, __int64 *))*v1)(*v1, &unk_18014A280, &v18);
  v3 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = v18;
  if ( v18 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 104LL))(v18, &v19);
    if ( v5 < 0 )
    {
      sub_18000E498(v20);
      v8 = (void *)unknown_libname_174(v20, (__int64)" File=");
      unknown_libname_174(v8, (__int64)"..\\Source\\RendererD3D11.cpp");
      v9 = (void *)unknown_libname_174(v20, (__int64)" Line=");
      unknown_libname_174(v9, (__int64)"1042");
      v10 = (void *)unknown_libname_174(v20, (__int64)" Message=");
      unknown_libname_174(v10, (__int64)"\"GetDevice()->GetMaximumFrameLatency failure\"");
      sub_18000F794(v14, v5);
      v11 = (void *)unknown_libname_174(v20, (__int64)" HRESULT=");
      unknown_libname_112(v11);
      std::string::_Tidy_deallocate(v14);
      unknown_libname_3(v20);
      sub_18000E498(v16);
      v12 = (unsigned int)sub_18000E498(v15);
      sub_180065810((unsigned int)pExceptionObject, v12, 1042, v5, (__int64)v16, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v4 = v18;
  }
  v6 = v19;
  if ( v4 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v6;
}
