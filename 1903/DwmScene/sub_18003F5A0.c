/*
 * XREFs of sub_18003F5A0 @ 0x18003F5A0
 * Callers:
 *     sub_18003F720 @ 0x18003F720 (sub_18003F720.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     D2D1CreateFactory @ 0x180114B4E (D2D1CreateFactory.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_18003F5A0(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // edi
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  unsigned int v7; // eax
  char v9; // [rsp+30h] [rbp-D8h]
  __int64 v10[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v12[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+A8h] [rbp-60h] BYREF
  D2D1_FACTORY_OPTIONS pFactoryOptions; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v15[4]; // [rsp+F0h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v1 = &retaddr;
  if ( !*(_QWORD *)(a1 + 512) )
  {
    pFactoryOptions.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    LODWORD(v1) = D2D1CreateFactory(
                    D2D1_FACTORY_TYPE_SINGLE_THREADED,
                    &stru_180150490,
                    &pFactoryOptions,
                    (void **)(a1 + 512));
    v2 = (int)v1;
    if ( (int)v1 < 0 )
    {
      sub_18000E498(v15);
      v3 = (void *)unknown_libname_174(v15, (__int64)" File=");
      unknown_libname_174(v3, (__int64)"..\\Source\\Holographic\\RenderOutputD3D11Holographic.cpp");
      v4 = (void *)unknown_libname_174(v15, (__int64)" Line=");
      unknown_libname_174(v4, (__int64)"138");
      v5 = (void *)unknown_libname_174(v15, (__int64)" Message=");
      unknown_libname_174(v5, (__int64)"\"Initialize the Direct2D Factory.\"");
      sub_18000F794(v10, v2);
      v6 = (void *)unknown_libname_174(v15, (__int64)" HRESULT=");
      unknown_libname_112(v6);
      std::string::_Tidy_deallocate(v10);
      unknown_libname_3(v15);
      sub_18000E498(v12);
      v7 = (unsigned int)sub_18000E498(v11);
      v9 = 0;
      sub_180065810((unsigned int)pExceptionObject, v7, 138, v2, (__int64)v12, v9, -2LL);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  return (int)v1;
}
