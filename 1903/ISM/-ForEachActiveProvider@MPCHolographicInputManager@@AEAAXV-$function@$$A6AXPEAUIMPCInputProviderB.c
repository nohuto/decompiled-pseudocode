/*
 * XREFs of ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180080A48
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x180083BE0 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180083E88 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCHolographicInputManager::ForEachActiveProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v2 = a2;
  v3 = *(__int64 **)(a1 + 2576);
  v4 = *(__int64 **)(a1 + 2584);
  while ( v3 != v4 )
  {
    v9 = *v3;
    v5 = v9;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
    v11 = v5;
    v6 = *(_QWORD *)(v2 + 56);
    if ( !v6 )
    {
      std::_Xbad_function_call();
      return MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor_0();
    }
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v11);
    if ( v5 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    ++v3;
  }
  v8 = *(_QWORD *)(v2 + 56);
  if ( v8 )
  {
    LOBYTE(a2) = v8 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
