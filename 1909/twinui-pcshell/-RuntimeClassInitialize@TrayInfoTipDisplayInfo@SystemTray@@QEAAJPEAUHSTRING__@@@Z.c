/*
 * XREFs of ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18035E1D8
 * Callers:
 *     ??$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayInfoTipDisplayInfo@SystemTray@@$$QEAPEAUHSTRING__@@@Z @ 0x18035CD14 (--$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microso.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008F3A4 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VTrayNotifyCallback@SystemTray@@@WRL@Microsoft@@QEAA@XZ @ 0x18035D56C (--1-$ComPtr@VTrayNotifyCallback@SystemTray@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x18035D844 (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x18035DA28 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 *     _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x18035DBF0 (_anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases.c)
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x18035DE94 (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 *     _anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem @ 0x18035E4E0 (_anonymous_namespace_--TryGetTaskbarCplResourceForTrayItem.c)
 *     ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18035E8A8 (-RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize(HSTRING *this, HSTRING a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rbx
  int v7; // esi
  volatile int *v8; // rdx
  volatile int *v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  const wchar_t *v12; // r8
  __int64 *BitmapStreamFromHICON; // rax
  HSTRING v14; // rdx
  HSTRING v15; // rcx
  volatile int *v16; // rdx
  HSTRING v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 v20[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  UINT uID; // [rsp+90h] [rbp+18h] BYREF
  void *v23; // [rsp+98h] [rbp+20h] BYREF

  v20[1] = -2LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v6 = (__int64)v5;
    v23 = v5;
    if ( !v5 )
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v23);
      v7 = -2147024882;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v7);
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
          v4,
          v9);
      return (unsigned int)v7;
    }
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,INotificationCB>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &SystemTray::TrayNotifyCallback::`vftable';
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 7LL;
    *(_WORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_BYTE *)(v6 + 80) = 0;
    v18 = v6;
    v23 = 0LL;
    v7 = SystemTray::TrayNotifyCallback::RuntimeClassInitialize((SystemTray::TrayNotifyCallback *)v6, a2);
    if ( v7 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          v6,
          v8);
      v4 = v6;
      v19 = v6;
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
          v6,
          v8);
      v7 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<SystemTray::TrayNotifyCallback>::~ComPtr<SystemTray::TrayNotifyCallback>(&v18, v8);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v23);
    }
    if ( v7 < 0 )
      goto LABEL_14;
    uID = 0;
    if ( (unsigned __int8)anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem(&uID, v4 + 64) )
      anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases(&v17, uID);
    else
      anonymous_namespace_::GetFriendlyNameForExe((wchar_t *)&v17, v12);
    WindowsDeleteString(this[9]);
    this[9] = v17;
    v17 = 0LL;
    WindowsDeleteString(0LL);
    BitmapStreamFromHICON = anonymous_namespace_::GetBitmapStreamFromHICON(v20, *(_QWORD *)(v4 + 56));
    v14 = (HSTRING)*BitmapStreamFromHICON;
    *BitmapStreamFromHICON = 0LL;
    v15 = this[10];
    this[10] = v14;
    if ( v15 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16LL))(v15);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v20);
    SystemTray::TrayInfoTipDisplayInfo::InitProperties(
      (SystemTray::TrayInfoTipDisplayInfo *)this,
      a2,
      *(_BYTE *)(v4 + 80));
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
      v4,
      v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8F,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
                           v10);
  }
  return result;
}
