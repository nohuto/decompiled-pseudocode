/*
 * XREFs of ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800835A4
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x18013E1D0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_a8bd3f77500581b3abf4cbfc08695dab___ @ 0x1800804BC (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--W_ea_1800804BC.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180083A5C (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800844D4 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x18008453C (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

void __fastcall MPCHolographicInputManager::RemoveInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  __int64 **v2; // rbp
  char *v3; // r12
  __int64 **i; // rsi
  struct IMPCInputProviderBase *v7; // rbx
  struct IMPCInputProviderBase *v8; // rdx
  __int64 *v9; // r8
  __int64 *v10; // rdx
  const char *v11; // r9
  __int64 v12; // r15
  __int64 (__fastcall *v13)(__int64, _QWORD); // rbx
  unsigned int v14; // eax
  int v15; // eax
  struct IMPCInputProviderBase *v16; // rcx
  int v17[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 **)*((_QWORD *)this + 290);
  v3 = (char *)this + 2312;
  for ( i = (__int64 **)*((_QWORD *)this + 289); i != v2; ++i )
  {
    v19 = *i;
    v7 = (struct IMPCInputProviderBase *)v19;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v19);
    if ( v7 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( a2 == v7 )
      break;
  }
  if ( i != *((__int64 ***)this + 290) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 240LL))(a2) )
    {
      if ( ((*((_QWORD *)this + 323) - *((_QWORD *)this + 322)) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v8 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 293);
        if ( v8 )
          MPCHolographicInputManager::SetProviderPrimary(this, v8);
        else
          std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear((char *)this + 2576);
      }
      else
      {
        v9 = (__int64 *)*((_QWORD *)this + 323);
        v10 = (__int64 *)*((_QWORD *)this + 322);
        *(_QWORD *)v17 = this;
        *(_QWORD *)&v17[2] = a2;
        std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_a8bd3f77500581b3abf4cbfc08695dab___(
          &v19,
          v10,
          v9,
          (__int64)v17);
        if ( v19 == *((__int64 **)this + 323) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            249LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v11);
          __debugbreak();
        }
        std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((char *)this + 2576, &v19, v19);
      }
    }
    v12 = *((_QWORD *)this + 297);
    if ( v12 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 104LL);
      v14 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 80LL))(a2);
      v15 = v13(v12, v14);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          257LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v19, i);
  }
  v16 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 293);
  if ( a2 == v16 )
  {
    if ( v16 )
    {
      *((_QWORD *)this + 293) = 0LL;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
}
