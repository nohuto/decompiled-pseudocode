/*
 * XREFs of std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180084110
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800217C0 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x180081978 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x18008C3DC (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  MPCCursorManager *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  ISMTracing *v5; // rcx
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v1 + 2624) = *(_DWORD *)(a1 + 8);
  v2 = *(MPCCursorManager **)(v1 + 2384);
  if ( v2 )
    MPCCursorManager::UpdateState(v2);
  MPCHolographicInputManager::UpdateDoubleClickValues((MPCHolographicInputManager *)v1);
  v6 = *(_DWORD *)(v1 + 2624) == 1;
  if ( ISMTracing::IsEnabled(v3) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(v5, &v6);
  }
}
