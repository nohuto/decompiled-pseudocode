/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801BAAFC
 * Callers:
 *     ?TryFindAndRemoveViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801BA870 (-TryFindAndRemoveViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holo.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?attach@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@@Z @ 0x1801BAAD0 (-attach@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIWeakReference@@.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<Windows::Internal::Shell::Holographic::IViewHostItem,wil::err_returncode_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  __int64 v8; // rdx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 8);
  if ( (__int64 *)(a3 + 8) != v3 )
  {
    do
    {
      v8 = *v4;
      *v4 = 0LL;
      wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::attach(v4++ - 1, v8);
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v3 - 1);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
