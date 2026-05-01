/*
 * XREFs of ?TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801BA950
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BA480 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___ @ 0x1801B9D8C (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_Windows--I.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall HolographicViewHostItemLedger::TryFindViewHostItem(__int64 a1, __int64 *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 *v8; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+18h]

  v6 = (RTL_SRWLOCK *)(a1 + 88);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 88));
  v9 = v6;
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___(
    &v8,
    *(_QWORD **)(a1 + 64),
    *(_QWORD **)(a1 + 72),
    a3);
  if ( v8 == *(__int64 **)(a1 + 72) )
  {
    *a2 = 0LL;
  }
  else
  {
    *a2 = *v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
