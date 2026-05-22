/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x180083BE0
 * Callers:
 *     ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x180080B1C (-ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z.c)
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180084040 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180021A00 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_4eb1bd967a44c8988ac0e8ab217f7822___ @ 0x18008041C (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IM.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180080A48 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800844D4 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase **a2,
        __int64 a3,
        const char *a4)
{
  char *v6; // r12
  char v7; // r15
  __int64 *v8; // rax
  struct IMPCInputProviderBase *v9; // rcx
  __int64 v10; // rdi
  int v11; // ebx
  char result; // al
  const char *v13; // r9
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-40h] BYREF
  char *v15; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v16)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v18; // [rsp+A0h] [rbp+40h] BYREF
  struct IMPCInputProviderBase *v19; // [rsp+B0h] [rbp+50h] BYREF
  __int64 *v20; // [rsp+B8h] [rbp+58h] BYREF

  if ( !*((_BYTE *)this + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      616LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v6 = (char *)this + 2576;
  v7 = 1;
  v8 = (__int64 *)*((_QWORD *)this + 322);
  v9 = *a2;
  v18 = 1;
  v10 = *v8;
  v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v9 + 104LL))(v9);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) != v11
    || !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 256LL))(*a2) )
  {
    v7 = 0;
    v14 = off_180174880;
    v15 = &v18;
    v16 = &v14;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v14);
  }
  result = v18;
  if ( v18 )
  {
    if ( !v7 )
    {
      v15 = (char *)this;
      v14 = off_1801748B0;
      v16 = &v14;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v14);
      std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear(v6);
    }
    v19 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v19);
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_4eb1bd967a44c8988ac0e8ab217f7822___(
      &v20,
      *((__int64 **)this + 289),
      *((__int64 **)this + 290),
      (__int64 *)&v19);
    if ( v20 == *((__int64 **)this + 290) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        655LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v13);
      __debugbreak();
    }
    MPCHolographicInputManager::AddPrimaryInputProvider(this, *a2);
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v18;
  }
  return result;
}
