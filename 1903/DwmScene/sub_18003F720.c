/*
 * XREFs of sub_18003F720 @ 0x18003F720
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
 *     sub_18003F5A0 @ 0x18003F5A0 (sub_18003F5A0.c)
 *     sub_180040064 @ 0x180040064 (sub_180040064.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
int __fastcall sub_18003F720(__int64 a1)
{
  int result; // eax
  int v3; // edi
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, void *, _QWORD *); // rcx
  volatile signed __int32 *v13; // rbx
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  unsigned int v18; // eax
  void *v19; // rax
  void *v20; // rax
  void *v21; // rax
  void *v22; // rax
  unsigned int v23; // eax
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  unsigned int v28; // eax
  char v29; // [rsp+30h] [rbp-D8h]
  char v30; // [rsp+30h] [rbp-D8h]
  char v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v33; // [rsp+40h] [rbp-C8h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v37[4]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v39[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v40[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v41[4]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v42[4]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v43[4]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v44[64]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v45[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v47; // [rsp+238h] [rbp+130h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, void *, __int64 *); // [rsp+240h] [rbp+138h] BYREF
  _QWORD v49[4]; // [rsp+248h] [rbp+140h] BYREF
  _QWORD v50[4]; // [rsp+268h] [rbp+160h] BYREF
  _QWORD v51[4]; // [rsp+288h] [rbp+180h] BYREF

  v34 = -2LL;
  result = sub_18003F5A0(a1);
  if ( *(_QWORD *)(a1 + 536) )
  {
    v32 = 0LL;
    v33 = 0LL;
    sub_180040064(a1, &v32);
    v48 = 0LL;
    sub_18002317C(v32, &v48);
    v47 = 0LL;
    v3 = (**v48)(v48, &unk_18014A280, &v47);
    if ( v3 < 0 )
    {
      sub_18000E498(v49);
      v19 = (void *)unknown_libname_174(v49, (__int64)" File=");
      unknown_libname_174(v19, (__int64)"..\\Source\\Holographic\\RenderOutputD3D11Holographic.cpp");
      v20 = (void *)unknown_libname_174(v49, (__int64)" Line=");
      unknown_libname_174(v20, (__int64)"187");
      v21 = (void *)unknown_libname_174(v49, (__int64)" Message=");
      unknown_libname_174(v21, (__int64)"\"Create the Direct2D device object and a corresponding context. #1\"");
      sub_18000F794(v35, v3);
      v22 = (void *)unknown_libname_174(v49, (__int64)" HRESULT=");
      unknown_libname_112(v22);
      std::string::_Tidy_deallocate(v35);
      unknown_libname_3(v49);
      sub_18000E498(v37);
      v23 = (unsigned int)sub_18000E498(v36);
      v30 = 0;
      sub_180065810((unsigned int)v44, v23, 187, v3, (__int64)v37, v30);
      throw (Spectre::Engine::EngineException *)v44;
    }
    v4 = *(_QWORD *)(a1 + 512);
    v5 = (__int64 *)(a1 + 520);
    v6 = *(_QWORD *)(a1 + 520);
    if ( v6 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 216LL))(v4, v47, a1 + 520);
    if ( v7 < 0 )
    {
      sub_18000E498(v50);
      v24 = (void *)unknown_libname_174(v50, (__int64)" File=");
      unknown_libname_174(v24, (__int64)"..\\Source\\Holographic\\RenderOutputD3D11Holographic.cpp");
      v25 = (void *)unknown_libname_174(v50, (__int64)" Line=");
      unknown_libname_174(v25, (__int64)"189");
      v26 = (void *)unknown_libname_174(v50, (__int64)" Message=");
      unknown_libname_174(v26, (__int64)"\"Create the Direct2D device object and a corresponding context. #2\"");
      sub_18000F794(v38, v7);
      v27 = (void *)unknown_libname_174(v50, (__int64)" HRESULT=");
      unknown_libname_112(v27);
      std::string::_Tidy_deallocate(v38);
      unknown_libname_3(v50);
      sub_18000E498(v40);
      v28 = (unsigned int)sub_18000E498(v39);
      v31 = 0;
      sub_180065810((unsigned int)v45, v28, 189, v7, (__int64)v40, v31);
      throw (Spectre::Engine::EngineException *)v45;
    }
    v8 = *v5;
    v9 = *(_QWORD *)(a1 + 528);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 528) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 88LL))(v8, 0LL, a1 + 528);
    if ( v10 < 0 )
    {
      sub_18000E498(v51);
      v14 = (void *)unknown_libname_174(v51, (__int64)" File=");
      unknown_libname_174(v14, (__int64)"..\\Source\\Holographic\\RenderOutputD3D11Holographic.cpp");
      v15 = (void *)unknown_libname_174(v51, (__int64)" Line=");
      unknown_libname_174(v15, (__int64)"191");
      v16 = (void *)unknown_libname_174(v51, (__int64)" Message=");
      unknown_libname_174(v16, (__int64)"\"Create the Direct2D device object and a corresponding context.#3\"");
      sub_18000F794(v41, v10);
      v17 = (void *)unknown_libname_174(v51, (__int64)" HRESULT=");
      unknown_libname_112(v17);
      std::string::_Tidy_deallocate(v41);
      unknown_libname_3(v51);
      sub_18000E498(v43);
      v18 = (unsigned int)sub_18000E498(v42);
      v29 = 0;
      sub_180065810((unsigned int)pExceptionObject, v18, 191, v10, (__int64)v43, v29);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 536) + 8LL))(*(_QWORD *)(a1 + 536), a1);
    v11 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v12)[2])(v12);
    }
    if ( v33 )
    {
      result = _InterlockedDecrement(v33 + 2);
      if ( !result )
      {
        v13 = v33;
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        result = _InterlockedDecrement(v13 + 3);
        if ( !result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
  }
  return result;
}
