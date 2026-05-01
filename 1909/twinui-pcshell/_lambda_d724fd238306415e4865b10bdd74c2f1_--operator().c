/*
 * XREFs of _lambda_d724fd238306415e4865b10bdd74c2f1_::operator() @ 0x180063F90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d724fd238306415e4865b10bdd74c2f1___::Run @ 0x180063F80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d724fd238306415e4865b10bdd74c2f1___--Run.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180031190 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180057AB0 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005A3D0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180175994 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18017A168 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_d724fd238306415e4865b10bdd74c2f1_::operator()(__int64 *a1)
{
  WCHAR *v2; // rsi
  int Application; // eax
  int EnterpriseIdForWindow; // ebx
  unsigned __int16 **v5; // r8
  __int64 v6; // r14
  const WCHAR **v7; // rbx
  const WCHAR *v8; // r10
  const WCHAR *v9; // r8
  __int64 v10; // rax
  const WCHAR *v11; // rcx
  int v12; // eax
  volatile int *v13; // rdx
  EdpHelpers *v14; // rbx
  __int64 v15; // r10
  __int64 v16; // rcx
  volatile int *v17; // rdx
  __int64 v18; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-30h]
  struct HWND__ v21[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF
  struct IImmersiveApplication *v26; // [rsp+A0h] [rbp+50h] BYREF
  EdpHelpers *v27; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v21[0].unused = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)EdpGetIsManaged(a1) )
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
    Application = CWinRTApplicationView::GetApplication((CWinRTApplicationView *)(*a1 + 152), &v26);
    EnterpriseIdForWindow = Application;
    if ( Application < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application,
        bIgnoreCase);
LABEL_9:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      goto LABEL_41;
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    EnterpriseIdForWindow = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, __int64 *))(*(_QWORD *)v26 + 24LL))(
                              v26,
                              1LL,
                              &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                              &v25);
    if ( EnterpriseIdForWindow < 0
      || (EnterpriseIdForWindow = (*(__int64 (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v25 + 32LL))(v25, &v27),
          EnterpriseIdForWindow < 0) )
    {
LABEL_8:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_9;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
    v22 = -1LL;
    v23 = -1LL;
    EnterpriseIdForWindow = EdpHelpers::GetEnterpriseIdForWindow(v27, v21, v5);
    if ( EnterpriseIdForWindow < 0 )
    {
      v2 = *(WCHAR **)&v21[0].unused;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
    v2 = *(WCHAR **)&v21[0].unused;
  }
  v6 = *a1;
  AcquireSRWLockExclusive((PSRWLOCK)(v6 + 48));
  v26 = (struct IImmersiveApplication *)(v6 + 48);
  if ( !*(_BYTE *)(v6 + 56) )
    goto LABEL_35;
  v7 = (const WCHAR **)(v6 + 64);
  v8 = &szAgent;
  v9 = &szAgent;
  if ( v2 )
    v9 = v2;
  v10 = *(_QWORD *)(v6 + 72);
  v11 = *v7;
  if ( v10 == -1 )
  {
    if ( v11 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v11[v10] );
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  if ( v11 )
    v8 = *v7;
  if ( CompareStringOrdinal(v8, v10, v9, -(v2 != 0LL), 0) == 2 )
  {
LABEL_34:
    *(_BYTE *)(v6 + 56) = 0;
LABEL_35:
    if ( v6 != -48 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v6 + 48));
    EnterpriseIdForWindow = 0;
    goto LABEL_38;
  }
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (LPVOID *)(v6 + 64),
          (__int64)v2,
          0xFFFFFFFFFFFFFFFFuLL);
  EnterpriseIdForWindow = v12;
  if ( v12 >= 0 )
  {
    v25 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v27);
    v14 = v27;
    if ( v27 )
    {
      v15 = *((_QWORD *)v27 + 6);
      v16 = v25;
      if ( v25 != v15 )
      {
        if ( v15 )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(*((_QWORD *)v27 + 6));
          v16 = v25;
        }
        v25 = v15;
        if ( v16 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
            v16,
            v13);
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
        (__int64)v14,
        v13);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(v25 + 136, v6, 0x12u, 0LL);
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
        v18,
        v17);
    }
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x130,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v12,
    bIgnoreCase);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&v26);
LABEL_38:
  if ( EnterpriseIdForWindow >= 0 )
    EnterpriseIdForWindow = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)EnterpriseIdForWindow,
      bIgnoreCase);
LABEL_41:
  if ( v2 )
    CoTaskMemFree(v2);
  return (unsigned int)EnterpriseIdForWindow;
}
