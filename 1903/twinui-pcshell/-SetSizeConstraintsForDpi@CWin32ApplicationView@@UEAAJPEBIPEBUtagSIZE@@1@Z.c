/*
 * XREFs of ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180051060
 * Callers:
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x1800511A0 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SetSizeConstraintsForDpi(
        RTL_SRWLOCK *this,
        const unsigned int *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rax
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v16; // [rsp+80h] [rbp+30h]
  unsigned __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+98h] [rbp+48h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v18, this + 6);
  (*(void (__fastcall **)(PVOID, __int128 *, _QWORD))(*(_QWORD *)this[28].Ptr + 24LL))(this[28].Ptr, &v13, *a2);
  v17 = (unsigned __int64)*a4;
  v14[0] = *a3;
  v14[1] = v17;
  if ( v13 != __PAIR128__(v17, v14[0]) )
  {
    v8 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD *))(*(_QWORD *)this[28].Ptr + 32LL))(this[28].Ptr, *a2, v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A8,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v8,
        -2);
      goto LABEL_10;
    }
    v16 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v17);
    v10 = (volatile signed __int32 *)v17;
    if ( v17 )
    {
      v11 = *(_QWORD *)(v17 + 48);
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 236));
        v10 = (volatile signed __int32 *)v17;
        v16 = v11;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v10);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(v16 + 136, this, 0xFu, 0LL);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v16);
  }
  v9 = 0;
LABEL_10:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return v9;
}
