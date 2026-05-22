/*
 * XREFs of ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18008381C
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180080678 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180083364 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013F364 (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180021520 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180084294 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

__int64 __fastcall MPCHolographicInputManager::SetProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v4; // r14
  __int64 *i; // rbx
  struct IMPCInputProviderBase *v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCInputProviderBase *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 290);
  for ( i = (__int64 *)*((_QWORD *)this + 289); i != v4; ++i )
  {
    v11 = (struct IMPCInputProviderBase *)*i;
    v8 = v11;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v11);
    if ( v8 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( a2 == v8 )
      break;
  }
  if ( i == *((__int64 **)this + 290) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      281LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear((char *)this + 2576);
  MPCHolographicInputManager::AddPrimaryInputProvider(this, a2);
  return 0LL;
}
