/*
 * XREFs of sub_180028F80 @ 0x180028F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_180016234 @ 0x180016234 (sub_180016234.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     sub_180067BD0 @ 0x180067BD0 (sub_180067BD0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_180028F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 *v12; // r8
  int v13; // edi
  int v14; // edi
  int v15; // edi
  __int64 (__fastcall *v16)(_QWORD, __int64); // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  bool v21; // zf
  volatile signed __int32 *v22; // rbx
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  unsigned int v27; // eax
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  unsigned int v32; // eax
  void *v33; // rax
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  unsigned int v37; // eax
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v42[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v46[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v47[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v48[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v49[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v50[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v51[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v52[64]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v54; // [rsp+260h] [rbp+160h] BYREF
  __int64 (__fastcall ***v55)(_QWORD, void *, __int64 *); // [rsp+268h] [rbp+168h] BYREF
  _QWORD v56[4]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v57[4]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v58[4]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v40 = -2LL;
  v38 = 0LL;
  v39 = 0LL;
  result = sub_180029C14(a1, &v38);
  if ( v38 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
    v55 = 0LL;
    v11 = *v10;
    v12 = sub_180016234((__int64 *)&v55);
    v13 = (*(__int64 (__fastcall **)(__int64 *, void *, __int64 *))(v11 + 24))(v10, &unk_18014C358, v12);
    if ( v13 < 0 )
    {
      sub_18000E4E8(v56);
      v28 = (void *)unknown_libname_174(v56, (__int64)" File=");
      unknown_libname_174(v28, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
      v29 = (void *)unknown_libname_174(v56, (__int64)" Line=");
      unknown_libname_174(v29, (__int64)"941");
      v30 = (void *)unknown_libname_174(v56, (__int64)" Message=");
      unknown_libname_174(v30, (__int64)"\"Failed to retrieve ICoreWindow\"");
      sub_18000F7E4(v41, v13);
      v31 = (void *)unknown_libname_174(v56, (__int64)" HRESULT=");
      unknown_libname_112(v31);
      std::string::_Tidy_deallocate(v41);
      unknown_libname_3(v56);
      sub_18000E4E8(v43);
      v32 = (unsigned int)sub_18000E4E8(v42);
      sub_180065920((unsigned int)v51, v32, 941, v13, (__int64)v43, 0);
      throw (Spectre::Engine::EngineException *)v51;
    }
    v54 = 0LL;
    v14 = (**v55)(v55, &unk_1801448F0, &v54);
    if ( v14 < 0 )
    {
      sub_18000E4E8(v57);
      v33 = (void *)unknown_libname_174(v57, (__int64)" File=");
      unknown_libname_174(v33, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
      v34 = (void *)unknown_libname_174(v57, (__int64)" Line=");
      unknown_libname_174(v34, (__int64)"943");
      v35 = (void *)unknown_libname_174(v57, (__int64)" Message=");
      unknown_libname_174(v35, (__int64)"\"Failed to retrieve IUnknown\"");
      sub_18000F7E4(v44, v14);
      v36 = (void *)unknown_libname_174(v57, (__int64)" HRESULT=");
      unknown_libname_112(v36);
      std::string::_Tidy_deallocate(v44);
      unknown_libname_3(v57);
      sub_18000E4E8(v46);
      v37 = (unsigned int)sub_18000E4E8(v45);
      sub_180065920((unsigned int)v52, v37, 943, v14, (__int64)v46, 0);
      throw (Spectre::Engine::EngineException *)v52;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 128LL))(
            a2,
            a3,
            v54,
            a4,
            0LL,
            a5);
    if ( v15 < 0 )
    {
      sub_18000E4E8(v58);
      v23 = (void *)unknown_libname_174(v58, (__int64)" File=");
      unknown_libname_174(v23, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
      v24 = (void *)unknown_libname_174(v58, (__int64)" Line=");
      unknown_libname_174(v24, (__int64)"952");
      v25 = (void *)unknown_libname_174(v58, (__int64)" Message=");
      unknown_libname_174(v25, (__int64)"\"Failed to create swap chain for CoreWindow.\"");
      sub_18000F7E4(v47, v15);
      v26 = (void *)unknown_libname_174(v58, (__int64)" HRESULT=");
      unknown_libname_112(v26);
      std::string::_Tidy_deallocate(v47);
      unknown_libname_3(v58);
      sub_18000E4E8(v49);
      v27 = (unsigned int)sub_18000E4E8(v48);
      sub_180065920((unsigned int)pExceptionObject, v27, 952, v15, (__int64)v49, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    result = sub_180067BD0(a1, v50);
    v16 = *(__int64 (__fastcall **)(_QWORD, __int64))(result + 16);
    if ( v16 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      result = v16(*a5, v17);
    }
    v18 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = (__int64)v55;
    if ( v55 )
    {
      v55 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  if ( v39 )
  {
    v20 = _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF);
    v21 = v20 == 1;
    result = (unsigned int)(v20 - 1);
    if ( v21 )
    {
      v22 = v39;
      (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
      result = (unsigned int)_InterlockedDecrement(v22 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
    }
  }
  return result;
}
