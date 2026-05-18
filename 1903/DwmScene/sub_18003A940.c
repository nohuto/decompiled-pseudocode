/*
 * XREFs of sub_18003A940 @ 0x18003A940
 * Callers:
 *     sub_180028600 @ 0x180028600 (sub_180028600.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     sub_18000EE28 @ 0x18000EE28 (sub_18000EE28.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_1800299C8 @ 0x1800299C8 (sub_1800299C8.c)
 *     sub_1800390B0 @ 0x1800390B0 (sub_1800390B0.c)
 *     sub_180039C30 @ 0x180039C30 (sub_180039C30.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_18003A940(_QWORD *a1, __int64 *a2, int a3, int a4, const char *a5)
{
  int v9; // eax
  __int64 v10; // rbx
  __int64 *v11; // rcx
  int v12; // edi
  __int64 v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rcx
  int v17; // edi
  __int64 v18; // rcx
  const char *v19; // rdx
  __int64 v20; // rbx
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  const char *v25; // rcx
  unsigned __int64 v26; // rdx
  const char *v27; // r8
  const char *v28; // rcx
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  unsigned int v34; // eax
  void *v35; // rax
  void *v36; // rax
  void *v37; // rax
  void *v38; // rax
  unsigned int v39; // eax
  __int64 *v40; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v41; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h]
  __int64 v43; // [rsp+50h] [rbp-B8h]
  _QWORD *v44; // [rsp+58h] [rbp-B0h]
  __int64 v45[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v46[4]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47[5]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+108h] [rbp+0h]
  __int64 *v50; // [rsp+110h] [rbp+8h] BYREF
  __int64 *v51; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v52[4]; // [rsp+120h] [rbp+18h] BYREF
  _DWORD v53[5]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v54; // [rsp+154h] [rbp+4Ch]
  int v55; // [rsp+15Ch] [rbp+54h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  int v57; // [rsp+168h] [rbp+60h]
  int v58; // [rsp+170h] [rbp+68h] BYREF
  __int64 v59; // [rsp+174h] [rbp+6Ch]

  v43 = -2LL;
  v44 = a1;
  v49 = (__int64)a5;
  LODWORD(v42) = 0;
  v9 = sub_1800299C8(1, 0);
  v53[0] = a3;
  v53[1] = a4;
  v53[2] = 1;
  v53[3] = 1;
  v53[4] = v9;
  v55 = 0;
  v56 = 64LL;
  v57 = 0;
  v54 = 1LL;
  v50 = 0LL;
  v10 = *sub_18002317C(*a2, &v40);
  v11 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 **))(*(_QWORD *)v10 + 40LL))(v10, v53, 0LL, &v50);
  v13 = (__int64)v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  sub_1800253B0(*a2, v12);
  if ( v12 < 0 )
  {
    sub_18000E498(v52);
    v35 = (void *)unknown_libname_174(v52, (__int64)" File=");
    unknown_libname_174(v35, (__int64)"..\\Source\\DepthBufferD3D11.cpp");
    v36 = (void *)unknown_libname_174(v52, (__int64)" Line=");
    unknown_libname_174(v36, (__int64)"283");
    v37 = (void *)unknown_libname_174(v52, (__int64)" Message=");
    unknown_libname_174(v37, (__int64)"\"GetDevice()->CreateTexture2D failure\"");
    sub_18000F794(v45, v12);
    v38 = (void *)unknown_libname_174(v52, (__int64)" HRESULT=");
    unknown_libname_112(v38);
    std::string::_Tidy_deallocate(v45);
    unknown_libname_3(v52);
    sub_18000E498(v47);
    v39 = (unsigned int)sub_18000E498(v46);
    sub_180065810((unsigned int)pExceptionObject, v39, 283, v12, (__int64)v47, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v14 = a5;
  if ( *((_QWORD *)a5 + 3) >= 0x10uLL )
    v14 = *(const char **)a5;
  sub_18000EE28(v50, v14);
  v58 = 0;
  v59 = 5LL;
  v51 = 0LL;
  v15 = *sub_18002317C(*a2, &v40);
  v16 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, __int64 **))(*(_QWORD *)v15 + 80LL))(v15, v50, &v58, &v51);
  v18 = (__int64)v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  sub_1800253B0(*a2, v17);
  if ( v17 < 0 )
    goto LABEL_30;
  v19 = a5;
  if ( *((_QWORD *)a5 + 3) >= 0x10uLL )
    v19 = *(const char **)a5;
  sub_18000EE28(v51, v19);
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_1800390B0(*a2, a1);
  LODWORD(v42) = 1;
  v20 = _RTDynamicCast(
          *a1,
          0LL,
          &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
          1);
  v40 = v50;
  if ( v50 )
    (*(void (__fastcall **)(__int64 *))(*v50 + 8))(v50);
  v41 = v51;
  if ( v51 )
    (*(void (__fastcall **)(__int64 *))(*v51 + 8))(v51);
  sub_180039C30(v20, &v41, (__int64 *)&v40, 5u);
  v21 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  }
  v22 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  }
  v23 = *((_QWORD *)a5 + 3);
  if ( v23 >= 0x10 )
  {
    v24 = v23 + 1;
    v25 = *(const char **)a5;
    if ( v24 < 0x1000 )
    {
LABEL_27:
      j_j__o_free(v25);
      goto LABEL_28;
    }
    v26 = v24 + 39;
    v27 = (const char *)*((_QWORD *)v25 - 1);
    v28 = (const char *)(v25 - v27);
    if ( (unsigned __int64)(v28 - 8) <= 0x1F )
    {
      v25 = v27;
      goto LABEL_27;
    }
    o__invalid_parameter_noinfo_noreturn(v28, v26);
LABEL_30:
    sub_18000E498(v52);
    v30 = (void *)unknown_libname_174(v52, (__int64)" File=");
    unknown_libname_174(v30, (__int64)"..\\Source\\DepthBufferD3D11.cpp");
    v31 = (void *)unknown_libname_174(v52, (__int64)" Line=");
    unknown_libname_174(v31, (__int64)"292");
    v32 = (void *)unknown_libname_174(v52, (__int64)" Message=");
    unknown_libname_174(v32, (__int64)"\"GetDevice()->CreateDepthStencilView failure\"");
    sub_18000F794(v47, v17);
    v33 = (void *)unknown_libname_174(v52, (__int64)" HRESULT=");
    unknown_libname_112(v33);
    std::string::_Tidy_deallocate(v47);
    unknown_libname_3(v52);
    sub_18000E498(v45);
    v34 = (unsigned int)sub_18000E498(v46);
    sub_180065810((unsigned int)pExceptionObject, v34, 292, v17, (__int64)v45, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
LABEL_28:
  *((_QWORD *)a5 + 2) = 0LL;
  *((_QWORD *)a5 + 3) = 15LL;
  *a5 = 0;
  return a1;
}
