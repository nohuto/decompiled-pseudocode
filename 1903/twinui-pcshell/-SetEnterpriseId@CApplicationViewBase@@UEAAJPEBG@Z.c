/*
 * XREFs of ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x18015ED40
 * Callers:
 *     _lambda_9024690539981ae791e8a4389c3f5331_::operator() @ 0x180159C6C (_lambda_9024690539981ae791e8a4389c3f5331_--operator().c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801100E8 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetEnterpriseId(CApplicationViewBase *this, const unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v10; // [rsp+50h] [rbp+20h]
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+38h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v12, (RTL_SRWLOCK *)this + 3);
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
    v10 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v11);
    v6 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      v7 = *(_QWORD *)(v11 + 48);
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 236));
        v6 = (volatile signed __int32 *)v11;
        v10 = v7;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v6);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(
      v10 + 136,
      (void (__fastcall ***)(_QWORD, GUID *, __int64 *))this - 3,
      0x12u,
      0LL);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v10);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11B,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  return v5;
}
