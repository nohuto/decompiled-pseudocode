/*
 * XREFs of sub_18002CA10 @ 0x18002CA10
 * Callers:
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 * Callees:
 *     sub_18000D9E0 @ 0x18000D9E0 (sub_18000D9E0.c)
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
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __RTDynamicCast @ 0x180125A96 (__RTDynamicCast.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_18002CA10(_QWORD *a1, __int64 *a2, int a3, int a4, __int64 **a5, const char *a6)
{
  const char *v10; // rdx
  __int64 v11; // r15
  __int64 *v12; // rcx
  int v13; // r15d
  __int64 *v14; // rcx
  __int64 v15; // r15
  __int64 *v16; // rcx
  int v17; // r15d
  __int64 *v18; // rcx
  const char *v19; // rdx
  __int64 v20; // rsi
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  __int64 *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  const char *v26; // rcx
  unsigned __int64 v27; // rdx
  const char *v28; // r8
  const char *v29; // rcx
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  unsigned int v35; // eax
  void *v36; // rax
  void *v37; // rax
  void *v38; // rax
  void *v39; // rax
  unsigned int v40; // eax
  __int64 *v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+40h] [rbp-C0h]
  __int128 v44; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v45[20]; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+6Ch] [rbp-94h]
  _QWORD v47[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v49[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+110h] [rbp+10h]
  __int64 *v52; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v53; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v54[4]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v55; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v56[20]; // [rsp+158h] [rbp+58h]
  __int64 v57; // [rsp+16Ch] [rbp+6Ch]
  _BYTE v58[48]; // [rsp+178h] [rbp+78h] BYREF

  v47[1] = -2LL;
  v47[2] = a1;
  v51 = (__int64)a6;
  v43 = 0;
  v10 = a6;
  if ( *((_QWORD *)a6 + 3) >= 0x10uLL )
    v10 = *(const char **)a6;
  sub_18000EE28(*a5, v10);
  v46 = 0;
  *(_DWORD *)v45 = sub_1800299C8(16, 0);
  *(_QWORD *)&v44 = __PAIR64__(a4, a3);
  *((_QWORD *)&v44 + 1) = 0x100000001LL;
  *(_OWORD *)&v45[4] = 1uLL;
  v55 = v44;
  *(_OWORD *)v56 = *(_OWORD *)v45;
  v57 = 0x20000LL;
  *(_QWORD *)&v56[12] = 3LL;
  v53 = 0LL;
  v11 = *sub_18002317C(*a2, &v41);
  v12 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64 **))(*(_QWORD *)v11 + 40LL))(
          v11,
          &v55,
          0LL,
          &v53);
  v14 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
  }
  sub_1800253B0(*a2, v13);
  if ( v13 < 0 )
  {
    sub_18000E498(v54);
    v36 = (void *)unknown_libname_174(v54, (__int64)" File=");
    unknown_libname_174(v36, (__int64)"..\\Source\\RenderTargetD3D11.cpp");
    v37 = (void *)unknown_libname_174(v54, (__int64)" Line=");
    unknown_libname_174(v37, (__int64)"185");
    v38 = (void *)unknown_libname_174(v54, (__int64)" Message=");
    unknown_libname_174(v38, (__int64)"\"GetDevice()->CreateTexture2D failure\"");
    sub_18000F794(v48, v13);
    v39 = (void *)unknown_libname_174(v54, (__int64)" HRESULT=");
    unknown_libname_112(v39);
    std::string::_Tidy_deallocate(v48);
    unknown_libname_3(v54);
    sub_18000E498(&v44);
    v40 = (unsigned int)sub_18000E498(v49);
    sub_180065810((unsigned int)pExceptionObject, v40, 185, v13, (__int64)&v44, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18000EE28(v53, "BackBufferStaging");
  v52 = 0LL;
  v15 = *sub_18002317C(*a2, &v41);
  v16 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64 **))(*(_QWORD *)v15 + 72LL))(v15, *a5, 0LL, &v52);
  v18 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
  }
  sub_1800253B0(*a2, v17);
  if ( v17 < 0 )
    goto LABEL_32;
  v19 = a6;
  if ( *((_QWORD *)a6 + 3) >= 0x10uLL )
    v19 = *(const char **)a6;
  sub_18000EE28(v52, v19);
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_18000D9E0(*a2, a1);
  v43 = 1;
  v54[3] = 15LL;
  v17 = 0;
  LOBYTE(v54[0]) = 0;
  v54[2] = 6LL;
  memmove(v54, "Output", 6uLL);
  BYTE6(v54[0]) = 0;
  sub_1800644E4(*a1, v54);
  v20 = _RTDynamicCast(
          *a1,
          0LL,
          &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
          1);
  v41 = v53;
  if ( v53 )
    (*(void (__fastcall **)(__int64 *))(*v53 + 8))(v53);
  v21 = *a5;
  v47[0] = v21;
  if ( v21 )
    (*(void (__fastcall **)(__int64 *))(*v21 + 8))(v21);
  v42 = v52;
  if ( v52 )
    (*(void (__fastcall **)(__int64 *))(*v52 + 8))(v52);
  sub_18002C1D0(v20, (__int64 *)&v42, v47, &v41, a3, a4);
  memset(v58, 0, 0x2CuLL);
  (*(void (__fastcall **)(__int64 *, _BYTE *))(**a5 + 80))(*a5, v58);
  v22 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  }
  v23 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  }
  v24 = *((_QWORD *)a6 + 3);
  if ( v24 >= 0x10 )
  {
    v25 = v24 + 1;
    v26 = *(const char **)a6;
    if ( v25 < 0x1000 )
    {
LABEL_29:
      j_j__o_free(v26);
      goto LABEL_30;
    }
    v27 = v25 + 39;
    v28 = (const char *)*((_QWORD *)v26 - 1);
    v29 = (const char *)(v26 - v28);
    if ( (unsigned __int64)(v29 - 8) <= 0x1F )
    {
      v26 = v28;
      goto LABEL_29;
    }
    o__invalid_parameter_noinfo_noreturn(v29, v27);
LABEL_32:
    sub_18000E498(v54);
    v31 = (void *)unknown_libname_174(v54, (__int64)" File=");
    unknown_libname_174(v31, (__int64)"..\\Source\\RenderTargetD3D11.cpp");
    v32 = (void *)unknown_libname_174(v54, (__int64)" Line=");
    unknown_libname_174(v32, (__int64)"200");
    v33 = (void *)unknown_libname_174(v54, (__int64)" Message=");
    unknown_libname_174(v33, (__int64)"\"GetDevice()->CreateRenderTargetView failure\"");
    sub_18000F794(&v44, v17);
    v34 = (void *)unknown_libname_174(v54, (__int64)" HRESULT=");
    unknown_libname_112(v34);
    std::string::_Tidy_deallocate((__int64 *)&v44);
    unknown_libname_3(v54);
    sub_18000E498(v48);
    v35 = (unsigned int)sub_18000E498(v49);
    sub_180065810((unsigned int)pExceptionObject, v35, 200, v17, (__int64)v48, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
LABEL_30:
  *((_QWORD *)a6 + 2) = 0LL;
  *((_QWORD *)a6 + 3) = 15LL;
  *a6 = 0;
  return a1;
}
