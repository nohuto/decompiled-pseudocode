/*
 * XREFs of ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Z @ 0x1800AB638
 * Callers:
 *     ??$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVWGIController@@AEAPEAUIRawGameController@Input@Gaming@Windows@@$$QEAPEAUIRawInputClient@@$$QEAPEAUIMessageSession@@$$QEAPEAUIGameInputServer@@$$QEAPEAVWGIRawInputProvider@@@Z @ 0x1800A6E48 (--$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRaw.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180015F98 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x1800298B0 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002AEA4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18002B3A4 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CED8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035830 (--1-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800565DC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z @ 0x18009C358 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WGIController::RuntimeClassInitialize(
        WGIController *this,
        struct Windows::Gaming::Input::IRawGameController *a2,
        struct IRawInputClient *a3,
        struct IMessageSession *a4,
        struct IGameInputServer *a5,
        struct WGIRawInputProvider *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  int ActivationFactory; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int *v31; // rsi
  int v32; // eax
  int *v33; // r14
  int v34; // eax
  int *v35; // r15
  int v36; // eax
  unsigned __int64 v37; // rcx
  size_t v38; // rax
  void *v39; // rax
  const struct std::nothrow_t *v40; // rdx
  const char *v41; // r9
  void *v42; // rcx
  void *v43; // rax
  const struct std::nothrow_t *v44; // rdx
  const char *v45; // r9
  void *v46; // rcx
  unsigned __int64 v47; // rcx
  size_t v48; // rax
  void *v49; // rax
  const struct std::nothrow_t *v50; // rdx
  const char *v51; // r9
  void *v52; // rcx
  int v54[2]; // [rsp+20h] [rbp-C9h] BYREF
  __int64 *v55; // [rsp+28h] [rbp-C1h] BYREF
  __int64 (__fastcall ***v56)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-B9h] BYREF
  __int64 v57; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v58; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v59; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v60; // [rsp+50h] [rbp-99h] BYREF
  struct IGameInputServer *v61; // [rsp+58h] [rbp-91h] BYREF
  __int64 v62; // [rsp+60h] [rbp-89h] BYREF
  _QWORD v63[3]; // [rsp+68h] [rbp-81h] BYREF
  GUID v64; // [rsp+80h] [rbp-69h] BYREF
  GUID v65; // [rsp+90h] [rbp-59h] BYREF
  GUID v66; // [rsp+A0h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-21h]
  HSTRING_HEADER v69; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v70; // [rsp+E8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  v63[1] = -2LL;
  v10 = 0;
  v56 = 0LL;
  v60 = 0LL;
  *(_QWORD *)v54 = 0LL;
  v57 = 0LL;
  v63[0] = 0LL;
  v62 = 0LL;
  v55 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  if ( !a2 )
  {
    v11 = 283LL;
LABEL_7:
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_61;
  }
  if ( !a3 )
  {
    v11 = 284LL;
    goto LABEL_7;
  }
  if ( !a4 )
  {
    v11 = 285LL;
    goto LABEL_7;
  }
  if ( *((struct Windows::Gaming::Input::IRawGameController **)this + 9) != a2 )
  {
    (*(void (__fastcall **)(struct Windows::Gaming::Input::IRawGameController *))(*(_QWORD *)a2 + 8LL))(a2);
    v12 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 12, (__int64)a3);
  Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)this + 13, (__int64)a4);
  if ( *((struct IGameInputServer **)this + 14) != a5 )
  {
    v61 = a5;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v61);
    v61 = (struct IGameInputServer *)*((_QWORD *)this + 14);
    v13 = (__int64)v61;
    *((_QWORD *)this + 14) = a5;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 15);
  if ( (struct WGIRawInputProvider *)v14 != a6 )
  {
    if ( a6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a6 + 6);
      v14 = *((_QWORD *)this + 15);
    }
    *((_QWORD *)this + 15) = a6;
    if ( v14 )
      RefCountedObject::Release((RefCountedObject *)(v14 + 16));
  }
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))this + 9))(
          *((_QWORD *)this + 9),
          &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
          &v56);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      297LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = (**v56)(v56, &GUID_debcfefe_f763_4670_940b_57aae2b143ff, &v60);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      298LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v60 + 48LL))(v60, v54);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      299LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v54)(
          *(_QWORD *)v54,
          &GUID_c3542377_1ea7_4454_8deb_8aa6070db645,
          (char *)this + 64);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      300LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v54)(
         *(_QWORD *)v54,
         &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb,
         &v57) >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v57 + 64LL))(v57, (char *)this + 152);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        308LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 45) = 196;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v57 + 120LL))(v57, &v55);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        311LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v21 = *v55;
    v64 = GUID_GIP_MICROSOFT_XBOX_INPUT_IELITEGAMEPAD;
    v22 = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))(v21 + 120))(v55, &v64, (char *)this + 274);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        312LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
    v23 = *v55;
    v65 = GUID_GIP_MICROSOFT_XBOX_INPUT_IEXTERNALGAMEPADSTATUS;
    v24 = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))(v23 + 120))(v55, &v65, (char *)this + 275);
    if ( v24 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        313LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v24);
      __debugbreak();
    }
    v25 = *v55;
    v66 = GUID_GIP_MICROSOFT_XBOX_INPUT_ICONSOLEFUNCTIONMAP;
    v26 = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))(v25 + 120))(v55, &v66, (char *)this + 276);
    if ( v26 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        314LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v26);
      __debugbreak();
    }
    goto LABEL_35;
  }
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))v54)(
         *(_QWORD *)v54,
         &GUID_075ddbfa_cc84_4137_8ce7_aa552fea8fe2,
         v63) >= 0 )
  {
    *((_DWORD *)this + 44) = 2;
LABEL_34:
    *((_DWORD *)this + 45) = 64;
    goto LABEL_35;
  }
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v54)(
         *(_QWORD *)v54,
         &GUID_ac104f57_79bd_4af3_9675_5e667484818b,
         &v62) >= 0 )
  {
    *((_DWORD *)this + 44) = 1;
    goto LABEL_34;
  }
LABEL_35:
  v68 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Gaming.Input.Gamepad",
    0x1Du,
    0x1Cu);
  ActivationFactory = RoGetActivationFactory(v68, &GUID_42676dc5_0856_47c4_9213_b395504c3a3c, &v59);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      334LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v59 + 48LL))(v59, v56, (char *)this + 88);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      335LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v70 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v69,
    L"Windows.Gaming.Input.UINavigationController",
    0x2Cu,
    0x2Bu);
  v29 = RoGetActivationFactory(v70, &GUID_e0cb28e3_b20b_4b0b_9ed4_f3d53cec0de4, &v58);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      336LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v29);
    __debugbreak();
  }
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v58 + 48LL))(v58, v56, (char *)this + 80);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      337LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v30);
    __debugbreak();
  }
  v31 = (int *)((char *)this + 160);
  v32 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 48LL))(
          *((_QWORD *)this + 9),
          (char *)this + 160);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      344LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v32);
    __debugbreak();
  }
  v33 = (int *)((char *)this + 164);
  v34 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 56LL))(
          *((_QWORD *)this + 9),
          (char *)this + 164);
  if ( v34 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      345LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v34);
    __debugbreak();
  }
  v35 = (int *)((char *)this + 168);
  v36 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 88LL))(
          *((_QWORD *)this + 9),
          (char *)this + 168);
  if ( v36 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      346LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v36);
    __debugbreak();
  }
  if ( *v31 )
  {
    v37 = 2 * *v31;
    v38 = 8 * v37;
    if ( !is_mul_ok(v37, 8uLL) )
      v38 = -1LL;
    v39 = operator new[](v38, (const struct std::nothrow_t *)&std::nothrow);
    v42 = (void *)*((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v39;
    if ( v42 )
    {
      operator delete(v42, v40);
      v39 = (void *)*((_QWORD *)this + 16);
    }
    if ( !v39 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        351LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        v41);
      __debugbreak();
    }
    memset_0(v39, 0, 16LL * *v31);
  }
  if ( *v33 )
  {
    v43 = operator new[](2 * *v33, (const struct std::nothrow_t *)&std::nothrow);
    v46 = (void *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v43;
    if ( v46 )
    {
      operator delete(v46, v44);
      v43 = (void *)*((_QWORD *)this + 17);
    }
    if ( !v43 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        358LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        v45);
      __debugbreak();
    }
    memset_0(v43, 0, 2LL * *v33);
  }
  if ( *v35 )
  {
    v47 = 2 * *v35;
    v48 = 4 * v47;
    if ( !is_mul_ok(v47, 4uLL) )
      v48 = -1LL;
    v49 = operator new[](v48, (const struct std::nothrow_t *)&std::nothrow);
    v52 = (void *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = v49;
    if ( v52 )
    {
      operator delete(v52, v50);
      v49 = (void *)*((_QWORD *)this + 18);
    }
    if ( !v49 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        365LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        v51);
      __debugbreak();
    }
    memset_0(v49, 0, 8LL * *v35);
  }
LABEL_61:
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v58);
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v59);
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v55);
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v62);
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(v63);
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>(&v57);
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(v54);
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v60);
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>((__int64 *)&v56);
  return v10;
}
