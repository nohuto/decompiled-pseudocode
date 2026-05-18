/*
 * XREFs of sub_180022370 @ 0x180022370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000E7D0 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     unknown_libname_3 @ 0x18000F790 (unknown_libname_3.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180033E2C @ 0x180033E2C (sub_180033E2C.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18006D8EC @ 0x18006D8EC (sub_18006D8EC.c)
 *     sub_18009EC2C @ 0x18009EC2C (sub_18009EC2C.c)
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
char __fastcall sub_180022370(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rdi
  volatile signed __int32 *v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 *v12; // rax
  unsigned int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rax
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  float *v25; // rax
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdi
  size_t v32; // rbx
  char *v33; // r12
  char *i; // r15
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rcx
  volatile signed __int32 *v41; // rbx
  int v42; // eax
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  void *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v59[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h]
  __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 *v63; // [rsp+B0h] [rbp-50h]
  __int64 v64[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-38h]
  volatile signed __int32 *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  _BYTE v68[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v69[16]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v70[16]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v71[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v72[4]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v73[5]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+170h] [rbp+70h] BYREF
  void *Src; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v76; // [rsp+1B8h] [rbp+B8h]
  __int64 v77; // [rsp+1C0h] [rbp+C0h] BYREF
  _Mtx_t v78; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v79; // [rsp+1D0h] [rbp+D0h]
  _QWORD v80[4]; // [rsp+1D8h] [rbp+D8h] BYREF

  v67 = -2LL;
  v60 = a2;
  v78 = 0LL;
  v79 = 0LL;
  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a3 + 320LL))(a3, &v78);
  v54 = 0LL;
  v55 = 0LL;
  v6 = *(_QWORD *)(a1 + 280);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(a1 + 280);
  }
  v64[0] = *(_QWORD *)(a1 + 272);
  v64[1] = v6;
  sub_1800171D4(&v54, v64);
  v77 = 0LL;
  sub_180033E2C(v54, &v77);
  v62 = 0LL;
  v63 = 0LL;
  v7 = (volatile signed __int32 *)a4[18];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)a4[18];
  }
  v8 = a4[17];
  v62 = v8;
  v63 = v7;
  v65 = 0LL;
  v66 = 0LL;
  v9 = (volatile signed __int32 *)a4[20];
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 2);
    v9 = (volatile signed __int32 *)a4[20];
    v8 = v62;
  }
  v65 = a4[19];
  v10 = v65;
  v66 = v9;
  v52 = 0LL;
  v53 = 0LL;
  v11 = sub_18006CEC8(a1);
  v12 = (__int64 *)sub_18009EC74(v8, v69, v11);
  sub_1800171D4(&v52, v12);
  v50 = 0LL;
  v51 = 0LL;
  v13 = sub_18006CEC8(a1);
  v14 = (__int64 *)sub_18009EC74(v10, v70, v13);
  sub_1800171D4(&v50, v14);
  v15 = v77;
  v16 = (_QWORD *)sub_18003178C(v52, &v57);
  v17 = (_QWORD *)sub_18003178C(v50, &v56);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 376LL))(v15, *v17, *v16);
  v18 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v77;
  v21 = (_QWORD *)sub_18003178C(v50, &v58);
  v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v20 + 112LL))(
          v20,
          *v21,
          0LL,
          1LL,
          0,
          &Src);
  v23 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v22 < 0 )
  {
    sub_18000E4E8(v80);
    v44 = (void *)unknown_libname_174(v80, (__int64)" File=");
    unknown_libname_174(v44, (__int64)"..\\Source\\RendererD3D11.cpp");
    v45 = (void *)unknown_libname_174(v80, (__int64)" Line=");
    unknown_libname_174(v45, (__int64)"594");
    v46 = (void *)unknown_libname_174(v80, (__int64)" Message=");
    unknown_libname_174(v46, (__int64)"\"d3DContext->Map failure\"");
    sub_18000F7E4(v71, v22);
    v47 = (void *)unknown_libname_174(v80, (__int64)" HRESULT=");
    unknown_libname_112(v47);
    std::string::_Tidy_deallocate(v71);
    unknown_libname_3(v80);
    sub_18000E4E8(v73);
    v48 = (unsigned int)sub_18000E4E8(v72);
    sub_180065920((unsigned int)pExceptionObject, v48, 594, v22, (__int64)v73, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v24 = a4[17];
  if ( v24 )
  {
    v25 = (float *)sub_18009EC2C(v24, v68);
  }
  else
  {
    v59[0] = 0;
    v59[1] = 0;
    v25 = (float *)v59;
  }
  v26 = *v25;
  v27 = v25[1];
  v28 = 0LL;
  if ( v26 >= 9.223372e18 )
  {
    v26 = v26 - 9.223372e18;
    if ( v26 < 9.223372e18 )
      v28 = 0x8000000000000000uLL;
  }
  v29 = v28 + (unsigned int)(int)v26;
  v30 = 0LL;
  if ( v27 >= 9.223372e18 )
  {
    v27 = v27 - 9.223372e18;
    if ( v27 < 9.223372e18 )
      v30 = 0x8000000000000000uLL;
  }
  v31 = v30 + (unsigned int)(int)v27;
  v32 = 16 * v29;
  v49 = v76;
  v33 = (char *)Src;
  for ( i = (char *)sub_18006D8EC(a1, v60, a4, v31 * v32); v31; --v31 )
  {
    memcpy(i, v33, v32);
    v33 += v49;
    i += v32;
  }
  *(_DWORD *)(v60 + 20) = 1;
  v35 = v77;
  v36 = (_QWORD *)sub_18003178C(v50, &v61);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v35 + 120LL))(v35, *v36, 0LL);
  v37 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  if ( v51 )
  {
    if ( !_InterlockedDecrement(v51 + 2) )
    {
      v38 = v51;
      (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
      if ( !_InterlockedDecrement(v38 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
    }
  }
  if ( v53 )
  {
    if ( !_InterlockedDecrement(v53 + 2) )
    {
      v39 = v53;
      (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
      if ( !_InterlockedDecrement(v39 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
    }
  }
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( !_InterlockedDecrement(v9 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
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
  v40 = v77;
  if ( v77 )
  {
    v77 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  if ( v55 )
  {
    if ( !_InterlockedDecrement(v55 + 2) )
    {
      v41 = v55;
      (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
      if ( !_InterlockedDecrement(v41 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
    }
  }
  if ( (_BYTE)v79 )
  {
    v42 = Mtx_unlock(v78);
    if ( v42 )
      std::_Throw_C_error(v42);
  }
  return 1;
}
