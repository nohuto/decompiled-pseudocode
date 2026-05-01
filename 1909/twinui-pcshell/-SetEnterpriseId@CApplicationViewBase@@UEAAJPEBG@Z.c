/*
 * XREFs of ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x18017E000
 * Callers:
 *     _lambda_9024690539981ae791e8a4389c3f5331_::operator() @ 0x180178F0C (_lambda_9024690539981ae791e8a4389c3f5331_--operator().c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180031190 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005A3D0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x18012F3B8 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180175994 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetEnterpriseId(CApplicationViewBase *this, const unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r10
  volatile int *v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, (RTL_SRWLOCK *)this + 3);
  if ( !*((_BYTE *)this + 32) )
    goto LABEL_12;
  if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
         (const WCHAR **)this + 5,
         a2,
         -1) == 2 )
  {
LABEL_11:
    *((_BYTE *)this + 32) = 0;
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (LPVOID *)this + 5,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v13);
    v7 = v13;
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 48) )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(
          *(_QWORD *)(v13 + 48),
          v6);
        v12 = v8;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
        v7,
        v6);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(v12 + 136, (__int64)this - 24, 0x12u, 0LL);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
        v12,
        v9);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x130,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  return v5;
}
