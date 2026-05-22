/*
 * XREFs of ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x180135510
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18012EB18 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EF38 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHandProcessor::Initialize3DComponents(unsigned __int64 this)
{
  char *v2; // rbx
  const char *v3; // r9
  struct BamoMPCConstantManagerClientPrincipal *v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  const char *v7; // r9
  struct BamoMPCConstantManagerClientPrincipal *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rax
  const char *v11; // r9
  void *v12; // rdi
  std::_Ref_count_base *v13; // rcx
  struct BamoMPCConstantManagerClientPrincipal *v14; // rdi
  int v15; // eax
  const char *v16; // r9
  struct BamoMPCConstantManagerClientPrincipal *v17; // rdi
  int v18; // eax
  _QWORD *v19; // rax
  void *v20; // rbx
  std::_Ref_count_base *v21; // rcx
  std::exception_ptr *v22; // rax
  _BYTE v23[16]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v25[32]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  char *v27; // [rsp+90h] [rbp+28h] BYREF
  unsigned __int32 v28; // [rsp+98h] [rbp+30h] BYREF
  void *v29; // [rsp+A0h] [rbp+38h] BYREF
  void *v30; // [rsp+A8h] [rbp+40h] BYREF

  v2 = (char *)(this - 24);
  v27 = (char *)(this - 24);
  __ExceptionPtrCreate(v23);
  v24[0] = v23;
  v24[1] = &v27;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&unk_1801E1398,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_cea5e010cd57342e421c8488c8b753a5_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v24) )
  {
    if ( __ExceptionPtrToBool(v23) )
    {
      v22 = std::exception_ptr::exception_ptr((std::exception_ptr *)v25, (const struct std::exception_ptr *)v23);
      std::rethrow_exception(v22);
    }
    std::_XGetLastError();
    JUMPOUT(0x180135752LL);
  }
  __ExceptionPtrDestroy(v23);
  v4 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v3);
    __debugbreak();
  }
  v5 = this & -(__int64)(v2 != 0LL);
  v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 48LL))(v5);
  LODWORD(v27) = MPCConstantManager::GetStaticConstant<float>((__int64)v4, v6, L"RayInjectionTemporalDeadzoneSec").m128_u32[0];
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
  v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 48LL))(v5);
  v28 = MPCConstantManager::GetStaticConstant<float>((__int64)v8, v9, L"RayInjectionXYDeadzone1M").m128_u32[0];
  v10 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v29, (float *)&v28, (float *)&v27);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)(this + 4616), v10);
  v12 = v29;
  if ( v29 )
  {
    v13 = (std::_Ref_count_base *)*((_QWORD *)v29 + 3);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    operator delete(v12, (const struct std::nothrow_t *)0x20);
  }
  v14 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 48LL))(v5);
  LODWORD(v27) = MPCConstantManager::GetStaticConstant<float>((__int64)v14, v15, L"TouchTemporalDeadzoneSec").m128_u32[0];
  v17 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v16);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 48LL))(v5);
  v28 = MPCConstantManager::GetStaticConstant<float>((__int64)v17, v18, L"TouchXYDeadzone1M").m128_u32[0];
  v19 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v30, (float *)&v28, (float *)&v27);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)(this + 4624), v19);
  v20 = v30;
  if ( v30 )
  {
    v21 = (std::_Ref_count_base *)*((_QWORD *)v30 + 3);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    operator delete(v20, (const struct std::nothrow_t *)0x20);
  }
}
