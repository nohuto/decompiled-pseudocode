/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___ @ 0x1801B9D8C
 * Callers:
 *     ?TryFindAndRemoveViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801BA870 (-TryFindAndRemoveViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holo.c)
 *     ?TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801BA950 (-TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holographic@S.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_________lambda_402f52cf216e2d3b5a50c22e6f72932e___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *i; // rsi
  int v8; // ebp
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*i)(*i, &GUID_86ccf8b6_d952_45b2_b3ad_bf46c2eec142, &v11);
    if ( v11 && (v10 = 0, (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v11 + 24LL))(v11, a4, &v10) >= 0) )
      v8 = v10;
    else
      v8 = 0;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    if ( v8 )
      break;
  }
  *a1 = i;
  return a1;
}
