/*
 * XREFs of sub_180028B80 @ 0x180028B80
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
 *     sub_180028940 @ 0x180028940 (sub_180028940.c)
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     D2D1CreateFactory @ 0x180114C5E (D2D1CreateFactory.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180028B80(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, void *, __int64); // rcx
  _QWORD *v5; // r14
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 *v10; // rax
  unsigned int v11; // ebx
  char v12; // al
  unsigned int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  int v17; // edi
  __int64 v18; // rcx
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
  __int64 v29[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v31[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32[5]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v34; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v35; // [rsp+108h] [rbp+0h]
  __int128 v36; // [rsp+118h] [rbp+10h] BYREF
  __int64 v37; // [rsp+128h] [rbp+20h]
  int v38; // [rsp+130h] [rbp+28h]

  v29[1] = -2LL;
  v29[2] = (__int64)a2;
  v4 = (__int64 (__fastcall ***)(_QWORD, void *, __int64))*a2;
  v29[0] = (__int64)v4;
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64)))(*v4)[1])(v4);
  sub_180028940((__int64)a1, v29);
  v5 = a1 + 213;
  v6 = a1[213];
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (**(__int64 (__fastcall ***)(_QWORD, void *, __int64))*a2)(*a2, &unk_18014D3B0, (__int64)(a1 + 213));
  if ( v7 < 0 )
  {
    sub_18000E4E8(&v34);
    v24 = (void *)unknown_libname_174(&v34, (__int64)" File=");
    unknown_libname_174(v24, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
    v25 = (void *)unknown_libname_174(&v34, (__int64)" Line=");
    unknown_libname_174(v25, (__int64)"869");
    v26 = (void *)unknown_libname_174(&v34, (__int64)" Message=");
    unknown_libname_174(v26, (__int64)"\"backBufferTexture.As(&m_backBufferSurface) failure\"");
    sub_18000F7E4(v30, v7);
    v27 = (void *)unknown_libname_174(&v34, (__int64)" HRESULT=");
    unknown_libname_112(v27);
    std::string::_Tidy_deallocate(v30);
    unknown_libname_3(&v34);
    sub_18000E4E8(v32);
    v28 = (unsigned int)sub_18000E4E8(v31);
    sub_180065920((unsigned int)pExceptionObject, v28, 869, v7, (__int64)v32, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v8 = *v5;
  if ( *v5 )
  {
    v9 = strnlen("BackBufferSurface", 0xFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v8 + 24LL))(
      v8,
      &unk_180211200,
      v9,
      "BackBufferSurface");
  }
  v10 = sub_180016234(a1 + 215);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &riid, 0LL, (void **)v10);
  v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 264LL))(a1, 2LL);
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  v13 = sub_180029AD8(v11, v12 != 0);
  LODWORD(v34) = 0;
  v29[0] = v13 | 0x100000000LL;
  *(_QWORD *)((char *)&v34 + 4) = v29[0];
  HIDWORD(v34) = 0;
  v35 = 0x200000000LL;
  v36 = v34;
  v37 = 0x200000000LL;
  v38 = 0;
  v14 = a1[215];
  v15 = a1[214];
  if ( v15 )
  {
    a1[214] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD *))(*(_QWORD *)v14 + 120LL))(
             v14,
             *v5,
             &v36,
             a1 + 214);
  v17 = result;
  if ( (int)result < 0 )
  {
    sub_18000E4E8(&v34);
    v19 = (void *)unknown_libname_174(&v34, (__int64)" File=");
    unknown_libname_174(v19, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
    v20 = (void *)unknown_libname_174(&v34, (__int64)" Line=");
    unknown_libname_174(v20, (__int64)"892");
    v21 = (void *)unknown_libname_174(&v34, (__int64)" Message=");
    unknown_libname_174(v21, (__int64)"\"m_2dFactory->CreateDxgiSurfaceRenderTarget failure\"");
    sub_18000F7E4(v32, v17);
    v22 = (void *)unknown_libname_174(&v34, (__int64)" HRESULT=");
    unknown_libname_112(v22);
    std::string::_Tidy_deallocate(v32);
    unknown_libname_3(&v34);
    sub_18000E4E8(v30);
    v23 = (unsigned int)sub_18000E4E8(v31);
    sub_180065920((unsigned int)pExceptionObject, v23, 892, v17, (__int64)v30, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v18 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return result;
}
