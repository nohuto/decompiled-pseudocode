/*
 * XREFs of _lambda_d724fd238306415e4865b10bdd74c2f1_::operator() @ 0x18001D890
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d724fd238306415e4865b10bdd74c2f1___::Run @ 0x18001C890 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d724fd238306415e4865b10bdd74c2f1___--Run.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180059A20 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18015AEC8 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_d724fd238306415e4865b10bdd74c2f1_::operator()(__int64 *a1)
{
  WCHAR *v2; // rsi
  __int64 v3; // r14
  RTL_SRWLOCK *v4; // rdi
  const WCHAR **v5; // rbx
  const WCHAR *v6; // r10
  const WCHAR *v7; // r8
  __int64 v8; // rax
  const WCHAR *v9; // rcx
  int EnterpriseIdForWindow; // ebx
  int Application; // eax
  unsigned __int16 **v13; // r8
  int v14; // eax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-50h]
  RTL_SRWLOCK *v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  EdpHelpers *v20[2]; // [rsp+40h] [rbp-30h] BYREF
  struct HWND__ v21[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v25; // [rsp+B8h] [rbp+48h]
  __int64 v26; // [rsp+C0h] [rbp+50h] BYREF
  struct IImmersiveApplication *v27; // [rsp+C8h] [rbp+58h] BYREF

  v20[1] = (EdpHelpers *)-2LL;
  v2 = 0LL;
  *(_QWORD *)&v21[0].unused = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)EdpGetIsManaged(a1) )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Application = CWinRTApplicationView::GetApplication((CWinRTApplicationView *)(*a1 + 152), &v27);
    EnterpriseIdForWindow = Application;
    if ( Application >= 0 )
    {
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      EnterpriseIdForWindow = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, __int64 *))(*(_QWORD *)v27 + 24LL))(
                                v27,
                                1LL,
                                &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                                &v26);
      if ( EnterpriseIdForWindow >= 0 )
      {
        EnterpriseIdForWindow = (*(__int64 (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v26 + 32LL))(v26, v20);
        if ( EnterpriseIdForWindow >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v21);
          v22 = -1LL;
          v23 = -1LL;
          EnterpriseIdForWindow = EdpHelpers::GetEnterpriseIdForWindow(v20[0], v21, v13);
          if ( EnterpriseIdForWindow >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
            v2 = *(WCHAR **)&v21[0].unused;
            goto LABEL_2;
          }
          v2 = *(WCHAR **)&v21[0].unused;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application,
        bIgnoreCase);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    goto LABEL_15;
  }
LABEL_2:
  v3 = *a1;
  v4 = (RTL_SRWLOCK *)(v3 + 48);
  AcquireSRWLockExclusive((PSRWLOCK)(v3 + 48));
  v18 = (RTL_SRWLOCK *)(v3 + 48);
  if ( !*(_BYTE *)(v3 + 56) )
  {
LABEL_10:
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    EnterpriseIdForWindow = 0;
    goto LABEL_13;
  }
  v5 = (const WCHAR **)(v3 + 64);
  v6 = &String2;
  v7 = &String2;
  if ( v2 )
    v7 = v2;
  v8 = *(_QWORD *)(v3 + 72);
  v9 = *v5;
  if ( v8 == -1 )
  {
    if ( v9 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v9[v8] );
    }
    else
    {
      LODWORD(v8) = 0;
    }
  }
  if ( v9 )
    v6 = *v5;
  if ( CompareStringOrdinal(v6, v8, v7, -(v2 != 0LL), 0) == 2 )
  {
LABEL_9:
    *(_BYTE *)(v3 + 56) = 0;
    goto LABEL_10;
  }
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          v3 + 64,
          v2,
          -1LL);
  EnterpriseIdForWindow = v14;
  if ( v14 >= 0 )
  {
    v25 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v19);
    v15 = (volatile signed __int32 *)v19;
    if ( v19 )
    {
      v16 = *(_QWORD *)(v19 + 48);
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 236));
        v2 = *(WCHAR **)&v21[0].unused;
        v4 = v18;
        v15 = (volatile signed __int32 *)v19;
        v25 = v16;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v15);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(v25 + 136, v3, 18LL);
    if ( v25 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v25);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11B,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v14,
    bIgnoreCase);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v18);
LABEL_13:
  if ( EnterpriseIdForWindow < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)EnterpriseIdForWindow,
      bIgnoreCase);
  else
    EnterpriseIdForWindow = 0;
LABEL_15:
  if ( v2 )
    CoTaskMemFree(v2);
  return (unsigned int)EnterpriseIdForWindow;
}
