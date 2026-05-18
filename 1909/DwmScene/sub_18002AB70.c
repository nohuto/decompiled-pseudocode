/*
 * XREFs of sub_18002AB70 @ 0x18002AB70
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
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_1800298EC @ 0x1800298EC (sub_1800298EC.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     sub_180068850 @ 0x180068850 (sub_180068850.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_18002AB70(__int64 **a1, __int64 *a2)
{
  __int64 v4; // r12
  __int64 **v5; // r13
  __int64 *v6; // rdi
  __int64 (__fastcall *v7)(__int64 **, __int64); // rax
  int v8; // ebx
  char v9; // al
  int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // edi
  int v15; // ebx
  char v16; // al
  __int64 **v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 *v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rdi
  __int64 v27; // rbx
  __int64 *v28; // rax
  int v29; // edi
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  void *v37; // rax
  unsigned int v38; // eax
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  void *v42; // rax
  unsigned int v43; // eax
  __int64 *v44; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v46; // [rsp+58h] [rbp-B0h]
  _QWORD v47[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49[4]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v50[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v51[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v52[4]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v53[5]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v54[64]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v56; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v57; // [rsp+1C0h] [rbp+B8h] BYREF
  _DWORD v58[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v59; // [rsp+1D8h] [rbp+D0h]
  int v60; // [rsp+1E0h] [rbp+D8h]
  int v61; // [rsp+1E4h] [rbp+DCh]
  int v62; // [rsp+1E8h] [rbp+E0h]
  int v63; // [rsp+1ECh] [rbp+E4h]
  __int64 v64; // [rsp+1F0h] [rbp+E8h]
  _QWORD v65[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v66[4]; // [rsp+218h] [rbp+110h] BYREF

  v47[1] = -2LL;
  v44 = a2;
  v45 = 0LL;
  v46 = 0LL;
  sub_180029C14((__int64)a1, &v45);
  v4 = v45;
  if ( !v45 )
    goto LABEL_35;
  v5 = a1 + 63;
  v6 = a1[63];
  v44 = v6;
  v7 = (__int64 (__fastcall *)(__int64 **, __int64))(*a1)[33];
  if ( v6 )
  {
    v8 = v7(a1, 2LL);
    v9 = ((__int64 (__fastcall *)(__int64 **))(*a1)[37])(a1);
    v10 = sub_180029AD8(v8, v9 != 0);
    v11 = *v6;
    v12 = ((__int64 (__fastcall *)(__int64 **))(*a1)[11])(a1);
    v13 = ((__int64 (__fastcall *)(__int64 **))(*a1)[10])(a1);
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, int, _DWORD))(v11 + 104))(
            v44,
            2LL,
            v13,
            v12,
            v10,
            0);
    sub_1800254C0(v4, v14);
    if ( v14 < 0 )
    {
      sub_18000E4E8(v65);
      v39 = (void *)unknown_libname_174(v65, (__int64)" File=");
      unknown_libname_174(v39, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
      v40 = (void *)unknown_libname_174(v65, (__int64)" Line=");
      unknown_libname_174(v40, (__int64)"614");
      v41 = (void *)unknown_libname_174(v65, (__int64)" Message=");
      unknown_libname_174(v41, (__int64)"\"Failed to resize swap chain\"");
      sub_18000F7E4(v48, v14);
      v42 = (void *)unknown_libname_174(v65, (__int64)" HRESULT=");
      unknown_libname_112(v42);
      std::string::_Tidy_deallocate(v48);
      unknown_libname_3(v65);
      sub_18000E4E8(v50);
      v43 = (unsigned int)sub_18000E4E8(v49);
      sub_180065920((unsigned int)v54, v43, 614, v14, (__int64)v50, 0);
      throw (Spectre::Engine::EngineException *)v54;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
      sub_180068850(a1);
  }
  else
  {
    v63 = 0;
    v64 = 3LL;
    v60 = 32;
    v61 = 2;
    v15 = v7(a1, 2LL);
    v16 = ((__int64 (__fastcall *)(__int64 **))(*a1)[37])(a1);
    v58[2] = sub_180029AD8(v15, v16 != 0);
    v58[1] = ((__int64 (__fastcall *)(__int64 **))(*a1)[11])(a1);
    v58[0] = ((__int64 (__fastcall *)(__int64 **))(*a1)[10])(a1);
    v59 = 1LL;
    v62 = 0;
    v58[3] = 0;
    v57 = 0LL;
    v17 = (__int64 **)sub_1800298EC((__int64)a1, v47);
    v18 = *v17;
    v19 = **v17;
    v20 = sub_180016234(&v57);
    (*(void (__fastcall **)(__int64 *, const IID *, __int64 *))(v19 + 48))(v18, &stru_18014B260, v20);
    v21 = v47[0];
    if ( v47[0] )
    {
      v47[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = sub_1800299E8((__int64)a1, &v44);
    v23 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
    }
    ((void (__fastcall *)(__int64 **, __int64, _QWORD, _DWORD *, __int64 **))(*a1)[51])(a1, v57, *v22, v58, a1 + 63);
    v24 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
    }
    v25 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
  {
    ((void (__fastcall *)(__int64 **))(*a1)[52])(a1);
    v56 = 0LL;
    v26 = *v5;
    v27 = **v5;
    v28 = sub_180016234(&v56);
    v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, void *, __int64 *))(v27 + 72))(v26, 0LL, &unk_18014D368, v28);
    if ( v29 < 0 )
    {
      sub_18000E4E8(v66);
      v34 = (void *)unknown_libname_174(v66, (__int64)" File=");
      unknown_libname_174(v34, (__int64)"..\\Source\\RenderOutputD3D11.cpp");
      v35 = (void *)unknown_libname_174(v66, (__int64)" Line=");
      unknown_libname_174(v35, (__int64)"654");
      v36 = (void *)unknown_libname_174(v66, (__int64)" Message=");
      unknown_libname_174(v36, (__int64)"\"m_swapChain->GetBuffer failure\"");
      sub_18000F7E4(v51, v29);
      v37 = (void *)unknown_libname_174(v66, (__int64)" HRESULT=");
      unknown_libname_112(v37);
      std::string::_Tidy_deallocate(v51);
      unknown_libname_3(v66);
      sub_18000E4E8(v53);
      v38 = (unsigned int)sub_18000E4E8(v52);
      sub_180065920((unsigned int)pExceptionObject, v38, 654, v29, (__int64)v53, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    *a2 = 0LL;
    if ( a2 == &v56 )
    {
      v30 = v56;
    }
    else
    {
      *a2 = v56;
      v30 = 0LL;
      v56 = 0LL;
    }
    if ( v30 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        v31 = v46;
        (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      }
    }
  }
  else
  {
LABEL_35:
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        v32 = v46;
        (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      }
    }
    *a2 = 0LL;
  }
  return a2;
}
