/*
 * XREFs of ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180084040
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x180083BE0 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHolographicInputManager::UpdatePrimary(
        MPCHolographicInputManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rax
  struct IMPCInputProviderBase *v8; // rdi
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // r8
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCInputProviderBase *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      561LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v5 = 0LL;
  v6 = *((_QWORD *)this + 289);
  if ( (*((_QWORD *)this + 290) - v6) >> 3 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 8 * v5) + 24LL))(*(_QWORD *)(v6 + 8 * v5)) )
    {
      ++v5;
      v6 = *((_QWORD *)this + 289);
      if ( v5 >= (*((_QWORD *)this + 290) - v6) >> 3 )
        return;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 8 * v5) + 64LL))(*(_QWORD *)(v6 + 8 * v5))
      || (v7 = (_QWORD *)*((_QWORD *)this + 322), *v7 == *((_QWORD *)this + 293))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 64LL))(*v7) )
    {
      v8 = *(struct IMPCInputProviderBase **)(v6 + 8 * v5);
      v14 = v8;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
      MPCHolographicInputManager::TrySetProviderAsPrimary(this, &v14, v11, v12);
    }
    else
    {
      v8 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 293);
      v14 = v8;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
      MPCHolographicInputManager::TrySetProviderAsPrimary(this, &v14, v9, v10);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
