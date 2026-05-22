/*
 * XREFs of ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180040520
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F0670 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180040428 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800412A4 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180043488 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::DemoteProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  struct IMPCInputProviderBase **v2; // rbp
  _QWORD *v3; // r14
  struct IMPCInputProviderBase **i; // rdi
  struct IMPCInputProviderBase *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 262);
  v3 = (_QWORD *)((char *)this + 2088);
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 261); i != v2; ++i )
  {
    v7 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 8LL))(*i);
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( a2 == v7 )
      break;
  }
  if ( i != *((struct IMPCInputProviderBase ***)this + 230) )
  {
    MPCHolographicInputManager::DemotePrimaryProviderInternal(this, a2);
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v10, i);
    if ( ((v3[1] - *v3) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      MPCHolographicInputManager::SetProviderPrimary(this, *((struct IMPCInputProviderBase **)this + 233), v8, v9);
  }
}
