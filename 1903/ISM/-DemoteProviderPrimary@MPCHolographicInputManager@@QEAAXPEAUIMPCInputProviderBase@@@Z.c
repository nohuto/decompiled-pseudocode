/*
 * XREFs of ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800808B8
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801316F0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180080850 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180083A5C (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x18008453C (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

void __fastcall MPCHolographicInputManager::DemoteProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  __int64 *v2; // rbp
  _QWORD *v3; // r14
  __int64 *i; // rbx
  struct IMPCInputProviderBase *v7; // rsi
  struct IMPCInputProviderBase *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 323);
  v3 = (_QWORD *)((char *)this + 2576);
  for ( i = (__int64 *)*((_QWORD *)this + 322); i != v2; ++i )
  {
    v8 = (struct IMPCInputProviderBase *)*i;
    v7 = v8;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v8);
    if ( v7 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( a2 == v7 )
      break;
  }
  if ( i != *((__int64 **)this + 290) )
  {
    MPCHolographicInputManager::DemotePrimaryProviderInternal((MPCCursorManager **)this, a2);
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v8, i);
    if ( ((v3[1] - *v3) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      MPCHolographicInputManager::SetProviderPrimary(this, *((struct IMPCInputProviderBase **)this + 293));
  }
}
