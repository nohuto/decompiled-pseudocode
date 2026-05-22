/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801301F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18008D280 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18012EAD4 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18012EB18 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??4?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EF04 (--4-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAE.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EF38 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCSixDofProcessor::Initialize3DComponents(MPCSixDofProcessor *this)
{
  char *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  const char *v7; // r9
  struct BamoMPCConstantManagerClientPrincipal *v8; // rsi
  unsigned __int64 v9; // rdi
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  const char *v15; // r9
  struct BamoMPCConstantManagerClientPrincipal *v16; // rsi
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rcx
  const char *v20; // r9
  struct BamoMPCConstantManagerClientPrincipal *v21; // rsi
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rcx
  const char *v25; // r9
  struct BamoMPCConstantManagerClientPrincipal *v26; // rsi
  int v27; // eax
  __int64 *v28; // rax
  __int64 v29; // rcx
  const char *v30; // r9
  struct BamoMPCConstantManagerClientPrincipal *v31; // rsi
  int v32; // eax
  const char *v33; // r9
  struct BamoMPCConstantManagerClientPrincipal *v34; // rsi
  int v35; // eax
  _QWORD *v36; // rax
  const char *v37; // r9
  void *v38; // rsi
  std::_Ref_count_base *v39; // rcx
  struct BamoMPCConstantManagerClientPrincipal *v40; // rsi
  int v41; // eax
  const char *v42; // r9
  struct BamoMPCConstantManagerClientPrincipal *v43; // rsi
  int v44; // eax
  _QWORD *v45; // rax
  void *v46; // rbx
  std::_Ref_count_base *v47; // rcx
  std::exception_ptr *v48; // rax
  _BYTE v49[16]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v50[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v51[32]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  void (__fastcall ***v53)(_QWORD, __int64); // [rsp+90h] [rbp+28h] BYREF
  void (__fastcall ***v54)(_QWORD, __int64); // [rsp+98h] [rbp+30h] BYREF
  void *v55; // [rsp+A0h] [rbp+38h] BYREF
  void *v56; // [rsp+A8h] [rbp+40h] BYREF

  v2 = (char *)this - 24;
  v53 = (void (__fastcall ***)(_QWORD, __int64))((char *)this - 24);
  __ExceptionPtrCreate(v49);
  v50[0] = v49;
  v50[1] = &v53;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCSixDofProcessor::s_constantsInitialized,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c5f59095f0ae3e38eeaa5c86892cff4d_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v50) )
  {
    if ( __ExceptionPtrToBool(v49) )
    {
      v48 = std::exception_ptr::exception_ptr((std::exception_ptr *)v51, (const struct std::exception_ptr *)v49);
      std::rethrow_exception(v48);
    }
    std::_XGetLastError();
    JUMPOUT(0x18013067BLL);
  }
  __ExceptionPtrDestroy(v49);
  LODWORD(v53) = 0;
  v3 = std::make_unique<MPCButtonHoldHelper,float,0>(&v54, (float *)&v53);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 619, v3);
  if ( v54 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v4, v54);
  v5 = std::make_unique<MPCButtonHoldHelper,float,0>(&v53, flt_1801ACDE0);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 620, v5);
  if ( v53 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v6, v53);
  v8 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  v9 = (unsigned __int64)this & -(__int64)(v2 != 0LL);
  v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v53) = MPCConstantManager::GetStaticConstant<float>((__int64)v8, v10, L"DragModeTriggerTimeInSec").m128_u32[0];
  v11 = std::make_unique<MPCButtonHoldHelper,float,0>(&v54, (float *)&v53);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 621, v11);
  if ( v54 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v12, v54);
  LODWORD(v53) = 0;
  v13 = std::make_unique<MPCButtonHoldHelper,float,0>(&v54, (float *)&v53);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 622, v13);
  if ( v54 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v14, v54);
  v16 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v53) = MPCConstantManager::GetStaticConstant<float>((__int64)v16, v17, L"TouchpadReleasedTimeoutSeconds").m128_u32[0];
  v18 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v53);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 623, v18);
  if ( v55 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(
      v19,
      (void (__fastcall ***)(_QWORD, __int64))v55);
  v21 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v20);
    __debugbreak();
  }
  v22 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v53) = MPCConstantManager::GetStaticConstant<float>((__int64)v21, v22, L"TouchpadTouchedTimeoutSeconds").m128_u32[0];
  v23 = std::make_unique<MPCButtonHoldHelper,float,0>(&v54, (float *)&v53);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 624, v23);
  if ( v54 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v24, v54);
  v26 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v25);
    __debugbreak();
  }
  v27 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v53) = MPCConstantManager::GetStaticConstant<float>((__int64)v26, v27, L"TouchpadDeltaSmoothingTimeoutSec").m128_u32[0];
  v28 = std::make_unique<MPCButtonHoldHelper,float,0>(&v55, (float *)&v53);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 625, v28);
  if ( v55 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(
      v29,
      (void (__fastcall ***)(_QWORD, __int64))v55);
  v31 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v30);
    __debugbreak();
  }
  v32 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v53) = MPCConstantManager::GetStaticConstant<float>((__int64)v31, v32, L"TouchpadTemporalDeadzoneSec").m128_u32[0];
  v34 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v33);
    __debugbreak();
  }
  v35 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v54) = MPCConstantManager::GetStaticConstant<float>((__int64)v34, v35, L"TouchpadXYDeadzone1M").m128_u32[0];
  v36 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v56, (float *)&v54, (float *)&v53);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 626, v36);
  v38 = v56;
  if ( v56 )
  {
    v39 = (std::_Ref_count_base *)*((_QWORD *)v56 + 3);
    if ( v39 )
      std::_Ref_count_base::_Decref(v39);
    operator delete(v38, (const struct std::nothrow_t *)0x20);
  }
  v40 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v37);
    __debugbreak();
  }
  v41 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v53) = MPCConstantManager::GetStaticConstant<float>((__int64)v40, v41, L"TriggerTemporalDeadzoneSec").m128_u32[0];
  v43 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v42);
    __debugbreak();
  }
  v44 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  LODWORD(v54) = MPCConstantManager::GetStaticConstant<float>((__int64)v43, v44, L"TriggerXYDeadzone1M").m128_u32[0];
  v45 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v55, (float *)&v54, (float *)&v53);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 627, v45);
  v46 = v55;
  if ( v55 )
  {
    v47 = (std::_Ref_count_base *)*((_QWORD *)v55 + 3);
    if ( v47 )
      std::_Ref_count_base::_Decref(v47);
    operator delete(v46, (const struct std::nothrow_t *)0x20);
  }
}
