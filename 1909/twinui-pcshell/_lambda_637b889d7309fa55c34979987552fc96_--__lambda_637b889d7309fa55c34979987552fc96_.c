/*
 * XREFs of _lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_ @ 0x18036B5F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&_::_scalar_deleting_destructor_ @ 0x18036B7A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__-_--_scal.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18036B920 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CE1E8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_(__int64 *a1)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1 + 6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 5);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
