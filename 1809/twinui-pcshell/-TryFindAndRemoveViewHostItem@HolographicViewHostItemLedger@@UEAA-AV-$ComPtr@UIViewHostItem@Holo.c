/*
 * XREFs of ?TryFindAndRemoveViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801BA870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___ @ 0x1801B9D8C (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_Windows--I.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801BAAFC (-erase@-$vector@V-$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall HolographicViewHostItemLedger::TryFindAndRemoveViewHostItem(__int64 a1, __int64 *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // r15
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+18h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 88);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 88));
  v12 = v6;
  v7 = a1 + 64;
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___(
    &v11,
    *(_QWORD **)(a1 + 64),
    *(_QWORD **)(a1 + 72),
    a3);
  v8 = v11;
  if ( v11 == *(_QWORD **)(a1 + 72) )
  {
    *a2 = 0LL;
  }
  else
  {
    v9 = (_QWORD *)*v11;
    v11 = (_QWORD *)*v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    std::vector<wil::com_ptr_t<Windows::Internal::Shell::Holographic::IViewHostItem,wil::err_returncode_policy>>::erase(
      v7,
      &v12,
      v8);
    *a2 = 0LL;
    if ( a2 != (__int64 *)&v11 )
    {
      *a2 = (__int64)v9;
      v11 = 0LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return a2;
}
