/*
 * XREFs of ??1?$com_ptr_t@VTrayNotifyCallback@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18033DEF0
 * Callers:
 *     _SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18033EC6C (_SystemTray--TrayInfoTipDisplayInfo--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 */

__int64 __fastcall wil::com_ptr_t<SystemTray::TrayNotifyCallback,wil::err_exception_policy>::~com_ptr_t<SystemTray::TrayNotifyCallback,wil::err_exception_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(v1);
  return result;
}
