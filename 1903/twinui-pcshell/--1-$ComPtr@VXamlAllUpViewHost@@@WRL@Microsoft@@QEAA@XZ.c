/*
 * XREFs of ??1?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C3CFC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlAllUpViewHost_IUnknown__::_1_::dtor$2 @ 0x1802BFC81 (_Microsoft--WRL--Details--MakeAndInitialize_XamlAllUpViewHost_IUnknown__--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlAllUpViewHost_XamlAllUpViewHost__::_1_::dtor$2 @ 0x1802BFD44 (_Microsoft--WRL--Details--MakeAndInitialize_XamlAllUpViewHost_XamlAllUpViewHost__--_1_--dtor$2.c)
 *     _wil::MakeAndInitializeOrThrow_XamlAllUpViewHost__::_1_::dtor$0 @ 0x1802BFDB3 (_wil--MakeAndInitializeOrThrow_XamlAllUpViewHost__--_1_--dtor$0.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5____::_1_::dtor$0 @ 0x1802C12C6 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     __lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9__::_1_::dtor$0 @ 0x1802C1706 (__lambda_e7233f2d7fbbc8c446f08901eacadde9_--_lambda_e7233f2d7fbbc8c446f08901eacadde9__--_1_--dto.c)
 *     _XamlAllUpViewHost::AnimateDismissFrames_::_1_::dtor$0 @ 0x1802C6920 (_XamlAllUpViewHost--AnimateDismissFrames_--_1_--dtor$0.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$11 @ 0x1802C7F4A (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<XamlAllUpViewHost>::~ComPtr<XamlAllUpViewHost>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(a1);
}
