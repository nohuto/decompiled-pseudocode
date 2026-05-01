/*
 * XREFs of ?_Destroy@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAXPEAUItem@AgileRegistrationList@@0@Z @ 0x18011BD94
 * Callers:
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::_Emplace_reallocate_AgileRegistrationList::Item__::_1_::catch$39 @ 0x18010C678 (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--_Emplace.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 */

__int64 __fastcall std::vector<AgileRegistrationList::Item>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(v4 + 8));
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
