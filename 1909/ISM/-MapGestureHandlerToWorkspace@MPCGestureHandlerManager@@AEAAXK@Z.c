/*
 * XREFs of ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x180086580
 * Callers:
 *     ?GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA?AV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x1800860E4 (-GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA-AV-$com_ptr_t@VMPCGestureHandler@@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x180084BA4 (--$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VMPCG.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180085ADC (--$_Try_emplace@AEBK$$V@-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?attach@?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVMPCGestureHandler@@@Z @ 0x180086D88 (-attach@-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVMPCGestureHand.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace(MPCGestureHandlerManager *this, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbx
  const char *v5; // r9
  MPCGestureHandler **v6; // rax
  MPCGestureHandler *v7; // rdx
  MPCGestureHandler *v8; // rcx
  __int64 v9; // rdi
  _QWORD v10[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  _DWORD *v12; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  MPCGestureHandler *v14; // [rsp+70h] [rbp+30h] BYREF
  struct IInputProcessorHost *v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  v12 = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( *((_QWORD *)this + 5) == v3 )
  {
    v15 = (struct IInputProcessorHost *)*((_QWORD *)MPCHolographicInputManager::GetInstance() + 288);
    v6 = Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost *>(&v14, &v15);
    v7 = *v6;
    *v6 = 0LL;
    wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>::attach(&v12, v7);
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v4 = v12;
  }
  else
  {
    v4 = *(_DWORD **)(v3 - 8);
    v12 = v4;
    if ( v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 6) - 8LL));
    *((_QWORD *)this + 6) -= 8LL;
  }
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      195LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v5);
    __debugbreak();
  }
  std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
    (__int64 *)this + 1,
    (__int64)v10,
    &v13);
  v9 = *(_QWORD *)(v10[0] + 40LL);
  *(_QWORD *)(v10[0] + 40LL) = v4;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v4[228] = v13;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v12);
}
