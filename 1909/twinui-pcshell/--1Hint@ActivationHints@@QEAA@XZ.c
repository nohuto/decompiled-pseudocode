/*
 * XREFs of ??1Hint@ActivationHints@@QEAA@XZ @ 0x1803AB164
 * Callers:
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18007E324 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x1803AAD2C (--$_Destroy_range@V-$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0.c)
 *     ??_GActivationHints@@UEAAPEAXI@Z @ 0x1803AB194 (--_GActivationHints@@UEAAPEAXI@Z.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803AB290 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 *     _ActivationHints::AddHint_::_1_::dtor$4 @ 0x1803AB42A (_ActivationHints--AddHint_--_1_--dtor$4.c)
 *     ?Clear@ActivationHints@@UEAAJXZ @ 0x1803AB480 (-Clear@ActivationHints@@UEAAJXZ.c)
 *     ?_Change_array@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXQEAUHint@ActivationHints@@_K1@Z @ 0x1803AB944 (-_Change_array@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@A.c)
 *     ?_Destroy@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXPEAUHint@ActivationHints@@0@Z @ 0x1803ABA00 (-_Destroy@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXP.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803ABA80 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

void __fastcall ActivationHints::Hint::~Hint(ActivationHints::Hint *this)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 9);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
  std::wstring::_Tidy_deallocate(this);
}
