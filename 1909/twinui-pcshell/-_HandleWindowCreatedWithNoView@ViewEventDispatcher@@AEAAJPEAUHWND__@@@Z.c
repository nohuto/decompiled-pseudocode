/*
 * XREFs of ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802940F0
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x180293A54 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x18028598C (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180285DC0 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLi.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x18028D454 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802927D4 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802933B0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180294DFC (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x1802A4BB0 (-CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A6CE0 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180426350 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedWithNoView(ViewEventDispatcher *this, HWND a2)
{
  unsigned __int16 **v3; // r8
  int ImmersiveAppIdFromWindow; // ebx
  __int64 v5; // rsi
  int NewViewForWindow; // eax
  char v7; // r14
  const char *v8; // r9
  int v9; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // bl
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  struct IViewWrapperInternal *v17; // [rsp+48h] [rbp-49h] BYREF
  __int64 v18; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  struct HWND__ v21[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-21h]
  __int64 v23; // [rsp+78h] [rbp-19h]
  __int128 v24; // [rsp+80h] [rbp-11h] BYREF
  HWND *p_hWnd; // [rsp+90h] [rbp-1h]
  _QWORD v26[2]; // [rsp+98h] [rbp+7h] BYREF
  __int128 v27; // [rsp+A8h] [rbp+17h]
  HWND *v28; // [rsp+B8h] [rbp+27h]
  char v29; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  HWND hWnd; // [rsp+100h] [rbp+6Fh] BYREF
  HANDLE hData; // [rsp+108h] [rbp+77h] BYREF
  __int64 v33; // [rsp+110h] [rbp+7Fh] BYREF

  hWnd = a2;
  v26[1] = -2LL;
  *(_QWORD *)&v21[0].unused = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
  v22 = -1LL;
  v23 = -1LL;
  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow((CallerIdentity *)hWnd, v21, v3);
  if ( ImmersiveAppIdFromWindow < 0 )
    goto LABEL_25;
  v5 = *(_QWORD *)&v21[0].unused;
  NewViewForWindow = ViewManagerBridge::CreateNewViewForWindow(
                       *((ViewManagerBridge **)this + 62),
                       hWnd,
                       *(const unsigned __int16 **)&v21[0].unused,
                       (unsigned int *)&hData);
  ImmersiveAppIdFromWindow = NewViewForWindow;
  if ( NewViewForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A0,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)NewViewForWindow);
    goto LABEL_25;
  }
  *(_QWORD *)&v24 = this;
  *((_QWORD *)&v24 + 1) = &hData;
  p_hWnd = &hWnd;
  v27 = v24;
  v28 = &hWnd;
  v7 = 1;
  v29 = 1;
  if ( !SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)(unsigned int)hData) )
  {
    ImmersiveAppIdFromWindow = wil::details::in1diag3::Return_GetLastError(
                                 retaddr,
                                 (void *)0x7AF,
                                 (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                 v8);
    goto LABEL_23;
  }
  v17 = 0LL;
  v26[0] = this;
  LODWORD(v33) = 1;
  v20 = v5;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,std::nullptr_t,unsigned short const *,unsigned short const (&)[53],enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
         &v17,
         (unsigned int *)&hData,
         &v19,
         &v20,
         (__int64)L"Windows.Internal.ShellExperience.TopLevelApplication",
         &v33,
         v26);
  ImmersiveAppIdFromWindow = v9;
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 35);
    v20 = (__int64)this + 280;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                      (__int64)this,
                                      (__int64)v17,
                                      &v18);
    ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
    if ( MatchingViewEventRegistration >= 0 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64, _QWORD))(*(_QWORD *)v17 + 672LL))(
        v17,
        (v18 + 8) & -(__int64)(v18 != 0),
        0LL);
      (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v17 + 760LL))(v17, hWnd, 0LL);
      p_hWnd = 0LL;
      v24 = 0uLL;
      LODWORD(v33) = (_DWORD)hData;
      v13 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                   (__int64)this + 416,
                   (int *)&v33,
                   v12,
                   &v19) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24 + 1);
      if ( v13 )
      {
        v14 = v19;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v17 + 792LL))(
          v17,
          *(_QWORD *)(*((_QWORD *)this + 52) + 24 * v19 + 8));
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (_QWORD *)this + 52,
          v14);
      }
      MatchingViewEventRegistration = ViewEventDispatcher::_AddValidView(this, v17);
      ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
      if ( MatchingViewEventRegistration >= 0 )
      {
        if ( this != (ViewEventDispatcher *)-280LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
        v15 = *(_QWORD *)(v18 + 32);
        v33 = v15;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v17, 0LL, 0LL, &v33);
        v7 = 0;
        ImmersiveAppIdFromWindow = 0;
        goto LABEL_21;
      }
      v11 = 2003LL;
    }
    else
    {
      v11 = 1984LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    if ( this != (ViewEventDispatcher *)-280LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7BB,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
LABEL_23:
  if ( v7 )
  {
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 62), (unsigned int)hData, 0LL);
    SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", 0LL);
  }
LABEL_25:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
