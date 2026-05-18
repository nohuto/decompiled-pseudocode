/*
 * XREFs of sub_180021B70 @ 0x180021B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E780 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F740 (unknown_libname_3.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_180017164 @ 0x180017164 (sub_180017164.c)
 *     sub_18003167C @ 0x18003167C (sub_18003167C.c)
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18006D7DC @ 0x18006D7DC (sub_18006D7DC.c)
 *     sub_18009EB1C @ 0x18009EB1C (sub_18009EB1C.c)
 *     sub_18009EB64 @ 0x18009EB64 (sub_18009EB64.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
char __fastcall sub_180021B70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 *v10; // rax
  _QWORD *v11; // rbx
  volatile signed __int32 *v12; // r14
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  _QWORD *v22; // r8
  __int64 v23; // rcx
  float *v24; // rax
  float v25; // xmm1_4
  float v26; // xmm2_4
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  size_t v31; // r12
  __int64 v32; // r13
  char *v33; // rdi
  char *i; // r15
  __int64 v35; // rcx
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  __int64 v39; // rcx
  volatile signed __int32 *v40; // rbx
  int v41; // eax
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  unsigned int v47; // eax
  __int64 v48; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v50; // [rsp+58h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v54; // [rsp+78h] [rbp-90h]
  __int64 v55; // [rsp+80h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-80h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h]
  __int64 v58[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-58h]
  volatile signed __int32 *v60; // [rsp+B8h] [rbp-50h]
  __int64 v61; // [rsp+C0h] [rbp-48h]
  volatile signed __int32 *v62; // [rsp+C8h] [rbp-40h]
  __int64 v63; // [rsp+D0h] [rbp-38h]
  _BYTE v64[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v65[16]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v66[16]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v67[4]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v68[4]; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v69[5]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+168h] [rbp+60h] BYREF
  void *Src; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v72; // [rsp+1B0h] [rbp+A8h]
  __int64 v73; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v74; // [rsp+1C0h] [rbp+B8h] BYREF
  _QWORD *v75; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v76; // [rsp+1D0h] [rbp+C8h]
  _Mtx_t v77; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v78; // [rsp+1E0h] [rbp+D8h]
  __int64 v79; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v80; // [rsp+1F0h] [rbp+E8h]
  _QWORD v81[4]; // [rsp+1F8h] [rbp+F0h] BYREF

  v63 = -2LL;
  v57 = a2;
  v79 = 0LL;
  v80 = 0LL;
  sub_180063178(a1 + 24, &v79);
  v77 = 0LL;
  v78 = 0LL;
  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a3 + 320LL))(a3, &v77);
  v53 = 0LL;
  v54 = 0LL;
  v5 = *(_QWORD *)(a1 + 280);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *(_QWORD *)(a1 + 280);
  }
  v58[0] = *(_QWORD *)(a1 + 272);
  v58[1] = v5;
  sub_180017164(&v53, v58);
  v73 = 0LL;
  sub_180033D1C(v53, &v73);
  v75 = 0LL;
  v76 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)a3 + 32LL))(a3, &v75);
  v59 = 0LL;
  v60 = 0LL;
  v6 = v75;
  v7 = (volatile signed __int32 *)v75[18];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)v6[18];
  }
  v8 = v6[17];
  v59 = v8;
  v60 = v7;
  v51 = 0LL;
  v52 = 0LL;
  v9 = sub_18006CDB8(a1);
  v10 = (__int64 *)sub_18009EB64(v8, v65, v9);
  sub_180017164(&v51, v10);
  v61 = 0LL;
  v62 = 0LL;
  v11 = v75;
  v12 = (volatile signed __int32 *)v75[20];
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v12 = (volatile signed __int32 *)v11[20];
  }
  v13 = v11[19];
  v61 = v13;
  v62 = v12;
  v49 = 0LL;
  v50 = 0LL;
  v14 = sub_18006CDB8(a1);
  v15 = (__int64 *)sub_18009EB64(v13, v66, v14);
  sub_180017164(&v49, v15);
  v16 = v73;
  v17 = (_QWORD *)sub_18003167C(v51, &v56);
  v18 = (_QWORD *)sub_18003167C(v49, &v55);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 376LL))(v16, *v18, *v17);
  v19 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v74 = 0LL;
  sub_18003167C(v49, &v74);
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v73 + 112LL))(
          v73,
          v74,
          0LL,
          1LL,
          0,
          &Src);
  if ( v21 < 0 )
  {
    sub_18000E498(v81);
    v43 = (void *)unknown_libname_174(v81, (__int64)" File=");
    unknown_libname_174(v43, (__int64)"..\\Source\\RendererD3D11.cpp");
    v44 = (void *)unknown_libname_174(v81, (__int64)" Line=");
    unknown_libname_174(v44, (__int64)"547");
    v45 = (void *)unknown_libname_174(v81, (__int64)" Message=");
    unknown_libname_174(v45, (__int64)"\"d3dContext->Map failure\"");
    sub_18000F794(v67, v21);
    v46 = (void *)unknown_libname_174(v81, (__int64)" HRESULT=");
    unknown_libname_112(v46);
    std::string::_Tidy_deallocate(v67);
    unknown_libname_3(v81);
    sub_18000E498(v69);
    v47 = (unsigned int)sub_18000E498(v68);
    sub_180065810((unsigned int)pExceptionObject, v47, 547, v21, (__int64)v69, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v22 = v75;
  v23 = v75[17];
  if ( v23 )
  {
    v24 = (float *)sub_18009EB1C(v23, v64);
    v22 = v75;
  }
  else
  {
    v48 = 0LL;
    v24 = (float *)&v48;
  }
  v25 = *v24;
  v26 = v24[1];
  v27 = 0LL;
  if ( v25 >= 9.223372e18 )
  {
    v25 = v25 - 9.223372e18;
    if ( v25 < 9.223372e18 )
      v27 = 0x8000000000000000uLL;
  }
  v28 = v27 + (unsigned int)(int)v25;
  v29 = 0LL;
  if ( v26 >= 9.223372e18 )
  {
    v26 = v26 - 9.223372e18;
    if ( v26 < 9.223372e18 )
      v29 = 0x8000000000000000uLL;
  }
  v30 = v29 + (unsigned int)(int)v26;
  v31 = 4 * v28;
  v32 = v72;
  v33 = (char *)Src;
  for ( i = (char *)sub_18006D7DC(a1, v57, v22, v30 * v31); v30; --v30 )
  {
    memcpy(i, v33, v31);
    v33 += v32;
    i += v31;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v73 + 120LL))(v73, v74, 0LL);
  v35 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( v50 )
  {
    if ( !_InterlockedDecrement(v50 + 2) )
    {
      v36 = v50;
      (**(void (__fastcall ***)(volatile signed __int32 *))v50)(v50);
      if ( !_InterlockedDecrement(v36 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
    }
  }
  if ( v12 )
  {
    if ( !_InterlockedDecrement(v12 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( !_InterlockedDecrement(v12 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( v52 )
  {
    if ( !_InterlockedDecrement(v52 + 2) )
    {
      v37 = v52;
      (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
      if ( !_InterlockedDecrement(v37 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
    }
  }
  if ( v7 )
  {
    if ( !_InterlockedDecrement(v7 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v38 = v76;
  if ( v76 )
  {
    if ( !_InterlockedDecrement(v76 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
      if ( !_InterlockedDecrement(v38 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
    }
  }
  v39 = v73;
  if ( v73 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v54 )
  {
    if ( !_InterlockedDecrement(v54 + 2) )
    {
      v40 = v54;
      (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
      if ( !_InterlockedDecrement(v40 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
    }
  }
  if ( (_BYTE)v78 )
  {
    v41 = Mtx_unlock(v77);
    if ( v41 )
      std::_Throw_C_error(v41);
  }
  if ( (_BYTE)v80 )
    sub_180063668(v79);
  return 1;
}
