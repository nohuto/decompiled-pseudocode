/*
 * XREFs of ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021F530
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x18021EE94 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800770B4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x18020EBFC (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18020F08C (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLi.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180217BF4 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021D868 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1802204F8 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x180230430 (-CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180232490 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedWithNoView(ViewEventDispatcher *this, HWND a2)
{
  unsigned __int16 **v3; // r8
  int ImmersiveAppIdFromWindow; // edi
  __int64 v5; // rbx
  int NewViewForWindow; // eax
  char v7; // r15
  const char *v8; // r9
  int v9; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  bool v14; // di
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  struct IViewWrapperInternal *v18; // [rsp+40h] [rbp-59h] BYREF
  ViewEventDispatcher *v19; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+58h] [rbp-41h] BYREF
  struct HWND__ v22[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  __int128 v25; // [rsp+78h] [rbp-21h] BYREF
  HWND *p_hWnd; // [rsp+88h] [rbp-11h]
  __int64 v27; // [rsp+90h] [rbp-9h]
  __int128 v28; // [rsp+98h] [rbp-1h]
  HWND *v29; // [rsp+A8h] [rbp+Fh]
  char v30; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  HWND hWnd; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE hData; // [rsp+110h] [rbp+77h] BYREF
  __int64 v34; // [rsp+118h] [rbp+7Fh] BYREF

  hWnd = a2;
  v27 = -2LL;
  *(_QWORD *)&v22[0].unused = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v22);
  v23 = -1LL;
  v24 = -1LL;
  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(
                               (CallerIdentity *)hWnd,
                               (unsigned int **)v22,
                               v3);
  if ( ImmersiveAppIdFromWindow < 0 )
    goto LABEL_25;
  v5 = *(_QWORD *)&v22[0].unused;
  NewViewForWindow = ViewManagerBridge::CreateNewViewForWindow(
                       *((ViewManagerBridge **)this + 64),
                       hWnd,
                       *(const unsigned __int16 **)&v22[0].unused,
                       (unsigned int *)&hData);
  ImmersiveAppIdFromWindow = NewViewForWindow;
  if ( NewViewForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)NewViewForWindow);
    goto LABEL_25;
  }
  *(_QWORD *)&v25 = this;
  *((_QWORD *)&v25 + 1) = &hData;
  p_hWnd = &hWnd;
  v28 = v25;
  v29 = &hWnd;
  v7 = 1;
  v30 = 1;
  if ( !SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)(unsigned int)hData) )
  {
    ImmersiveAppIdFromWindow = wil::details::in1diag3::Return_GetLastError(
                                 retaddr,
                                 (void *)0x8B6,
                                 (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                 v8);
    goto LABEL_23;
  }
  v18 = 0LL;
  v19 = this;
  LODWORD(v34) = 1;
  v21 = v5;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,std::nullptr_t,unsigned short const *,unsigned short const (&)[53],enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
         &v18,
         (unsigned int *)&hData,
         &v20,
         &v21,
         (__int64)L"Windows.Internal.ShellExperience.TopLevelApplication",
         &v34,
         &v19);
  ImmersiveAppIdFromWindow = v9;
  if ( v9 >= 0 )
  {
    v19 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 37);
    v21 = (__int64)this + 296;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                      (__int64)this,
                                      (__int64)v18,
                                      &v19);
    ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
    if ( MatchingViewEventRegistration >= 0 )
    {
      v12 = (__int64)v19;
      (*(void (__fastcall **)(struct IViewWrapperInternal *, unsigned __int64, _QWORD))(*(_QWORD *)v18 + 664LL))(
        v18,
        -(__int64)(v19 != 0LL) & ((unsigned __int64)v19 + 8),
        0LL);
      (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v18 + 752LL))(v18, hWnd, 0LL);
      p_hWnd = 0LL;
      v25 = 0uLL;
      LODWORD(v34) = (_DWORD)hData;
      v14 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                   (__int64)this + 432,
                   (int *)&v34,
                   v13,
                   &v20) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25 + 1);
      if ( v14 )
      {
        v15 = v20;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v18 + 784LL))(
          v18,
          *(_QWORD *)(*((_QWORD *)this + 54) + 24 * v20 + 8));
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (_QWORD *)this + 54,
          v15);
      }
      MatchingViewEventRegistration = ViewEventDispatcher::_AddValidView(this, v18);
      ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
      if ( MatchingViewEventRegistration >= 0 )
      {
        if ( this != (ViewEventDispatcher *)-296LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
        v16 = *(_QWORD *)(v12 + 32);
        v34 = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v18, 0LL, 0LL, &v34);
        v7 = 0;
        ImmersiveAppIdFromWindow = 0;
        goto LABEL_21;
      }
      v11 = 2266LL;
    }
    else
    {
      v11 = 2247LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    if ( this != (ViewEventDispatcher *)-296LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8C2,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
LABEL_23:
  if ( v7 )
  {
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 64), (unsigned int)hData, 0LL);
    SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", 0LL);
  }
LABEL_25:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v22);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
