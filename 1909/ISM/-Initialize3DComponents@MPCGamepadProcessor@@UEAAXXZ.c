/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180137910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BD50 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CAB8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18008D040 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18012EAD4 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18012EB18 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??4?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EF04 (--4-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAE.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EF38 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCGamepadProcessor::Initialize3DComponents(MPCGamepadProcessor *this)
{
  char *v2; // rsi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  const char *v7; // r9
  struct BamoMPCConstantManagerClientPrincipal *v8; // rdi
  unsigned __int64 v9; // rsi
  int v10; // eax
  const char *v11; // r9
  struct BamoMPCConstantManagerClientPrincipal *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rax
  void *v15; // rbx
  std::_Ref_count_base *v16; // rcx
  std::exception_ptr *v17; // rax
  _BYTE v18[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  void (__fastcall ***v22)(_QWORD, __int64); // [rsp+80h] [rbp+20h] BYREF
  unsigned __int32 v23; // [rsp+88h] [rbp+28h] BYREF
  void *v24; // [rsp+90h] [rbp+30h] BYREF

  v2 = (char *)this - 32;
  v22 = (void (__fastcall ***)(_QWORD, __int64))((char *)this - 32);
  __ExceptionPtrCreate(v18);
  v19[0] = v18;
  v19[1] = &v22;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCGamepadProcessor::s_constantsInitialized,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c78139b4692b055c43ac45a1104373ed_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v19) )
  {
    if ( __ExceptionPtrToBool(v18) )
    {
      v17 = std::exception_ptr::exception_ptr((std::exception_ptr *)v20, (const struct std::exception_ptr *)v18);
      std::rethrow_exception(v17);
    }
    std::_XGetLastError();
    JUMPOUT(0x180137AE8LL);
  }
  __ExceptionPtrDestroy(v18);
  v3 = std::make_unique<MPCButtonHoldHelper,float,0>(&v22, &flt_1801AD2E4);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 901, v3);
  if ( v22 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v4, v22);
  v5 = std::make_unique<MPCButtonHoldHelper,float,0>(&v22, &flt_1801AD2E4);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 902, v5);
  if ( v22 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v6, v22);
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
  LODWORD(v22) = MPCConstantManager::GetStaticConstant<float>((__int64)v8, v10, L"SelectTemporalDeadzoneSec").m128_u32[0];
  v12 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 48LL))(v9);
  v23 = MPCConstantManager::GetStaticConstant<float>((__int64)v12, v13, L"SelectXYDeadzone1M").m128_u32[0];
  v14 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v24, (float *)&v23, (float *)&v22);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 903, v14);
  v15 = v24;
  if ( v24 )
  {
    v16 = (std::_Ref_count_base *)*((_QWORD *)v24 + 3);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    operator delete(v15, (const struct std::nothrow_t *)0x20);
  }
}
