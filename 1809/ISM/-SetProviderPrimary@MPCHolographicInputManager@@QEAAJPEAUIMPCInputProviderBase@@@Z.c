/*
 * XREFs of ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180040428
 * Callers:
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004020C (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180040520 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800FEC20 (-Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180042D40 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::SetProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4)
{
  struct IMPCInputProviderBase **v4; // rbp
  struct IMPCInputProviderBase **i; // rdi
  struct IMPCInputProviderBase *v8; // rbx
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 230);
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 229); i != v4; ++i )
  {
    v8 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 8LL))(*i);
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( a2 == v8 )
      break;
  }
  if ( i == *((struct IMPCInputProviderBase ***)this + 230) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x112,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    JUMPOUT(0x180040517LL);
  }
  v9 = (__int64 *)*((_QWORD *)this + 262);
  v10 = (__int64 *)*((_QWORD *)this + 261);
  if ( v10 != v9 )
  {
    do
    {
      v11 = *v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      ++v10;
    }
    while ( v10 != v9 );
    v10 = (__int64 *)*((_QWORD *)this + 261);
  }
  *((_QWORD *)this + 262) = v10;
  MPCHolographicInputManager::AddPrimaryInputProvider(this, a2);
  return 0LL;
}
