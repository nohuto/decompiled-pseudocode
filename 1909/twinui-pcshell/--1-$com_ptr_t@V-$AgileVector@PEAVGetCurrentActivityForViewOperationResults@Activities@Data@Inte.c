/*
 * XREFs of ??1?$com_ptr_t@V?$AgileVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AFFC8
 * Callers:
 *     __lambda_3edc654c66854fb27c6b7c00085e6f36_::operator()_::_1_::dtor$0 @ 0x1800B01DE (__lambda_3edc654c66854fb27c6b7c00085e6f36_--operator()_--_1_--dtor$0.c)
 *     _cshell::make_agile_vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::dtor$0 @ 0x18012C106 (_cshell--make_agile_vector_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper____--_1_--.c)
 *     __lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e_::operator()_::_1_::dtor$4 @ 0x18020F7EE (__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e_--operator()_--_1_--dtor$4.c)
 *     _cshell::make_agile_vector_Windows::Internal::ComposableShell::ITreeNode____::_1_::dtor$0 @ 0x18022A80E (_cshell--make_agile_vector_Windows--Internal--ComposableShell--ITreeNode____--_1_--dtor$0.c)
 *     _cshell::make_agile_vector_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor$0 @ 0x18022A8D4 (_cshell--make_agile_vector_Windows--Internal--ComposableShell--ITreeNode___std--_Tree_iterator_s.c)
 *     _cshell::make_agile_vector_view_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor$0 @ 0x18022A979 (_cshell--make_agile_vector_view_Windows--Internal--ComposableShell--ITreeNode___std--_Tree_itera.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::WindowSnapStateChanged_::_1_::dtor$3 @ 0x180285288 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--WindowSnapStateChanged_--_1_--dtor$3.c)
 *     _cshell::make_agile_vector_unsigned_int__::_1_::dtor$0 @ 0x18029882E (_cshell--make_agile_vector_unsigned_int__--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::get_RequestedDisplayRegionIds_::_1_::dtor$0 @ 0x1802A2002 (_WindowingEnvironmentSettings--get_RequestedDisplayRegionIds_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUITreeNode@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUITreeNode@ComposableShell@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2DB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAUITr.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::IIterable<Windows::Internal::ComposableShell::ITreeNode *>,Microsoft::WRL::FtmBase>::Release();
  return result;
}
