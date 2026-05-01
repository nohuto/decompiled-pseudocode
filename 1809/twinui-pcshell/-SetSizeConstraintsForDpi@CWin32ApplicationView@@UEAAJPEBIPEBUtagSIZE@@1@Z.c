/*
 * XREFs of ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18000C250
 * Callers:
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x18000C200 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A9D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18012D0B4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SetSizeConstraintsForDpi(
        CWin32ApplicationView *this,
        const unsigned int *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r10
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v15; // [rsp+80h] [rbp+30h]
  unsigned __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  char v17; // [rsp+98h] [rbp+48h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, (char *)this + 48);
  (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)this + 28) + 24LL))(
    *((_QWORD *)this + 28),
    &v12,
    *a2);
  v16 = (unsigned __int64)*a4;
  v13[0] = *a3;
  v13[1] = v16;
  if ( v12 == __PAIR128__(v16, v13[0]) )
  {
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**((_QWORD **)this + 28) + 32LL))(
         *((_QWORD *)this + 28),
         *a2,
         v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v16);
    if ( v16 && *(_QWORD *)(v16 + 48) )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(*(_QWORD *)(v16 + 48));
      v15 = v10;
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v16);
    CApplicationViewManager::RaiseApplicationViewChanged(v15 + 136, this, 15LL);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release();
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A8,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v8,
    -2);
LABEL_10:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v17);
  return v9;
}
