/*
 * XREFs of ?TryFindAndRemoveViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180227640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___ @ 0x180226AF0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_Windows--I.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180227B8C (-erase@-$vector@V-$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall HolographicViewHostItemLedger::TryFindAndRemoveViewHostItem(__int64 a1, __int64 *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rbp
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v11; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+70h] [rbp+18h]

  v6 = (RTL_SRWLOCK *)(a1 + 88);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 88));
  v12 = v6;
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___(
    &v11,
    *(_QWORD **)(a1 + 64),
    *(_QWORD **)(a1 + 72),
    a3);
  v7 = v11;
  if ( v11 == *(__int64 **)(a1 + 72) )
  {
    *a2 = 0LL;
  }
  else
  {
    v11 = (__int64 *)*v11;
    v8 = (__int64)v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    std::vector<wil::com_ptr_t<Windows::Internal::Shell::Holographic::IViewHostItem,wil::err_returncode_policy>>::erase(
      a1 + 64,
      &v11,
      v7);
    *a2 = 0LL;
    v9 = v8;
    if ( a2 != (__int64 *)&v11 )
    {
      *a2 = v8;
      v8 = 0LL;
      v9 = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return a2;
}
