/*
 * XREFs of ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180293BB8
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x180293A54 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x18028598C (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802859C4 (--$FindEx@VViewWrapperFinderByViewInstanceId@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInter.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x1802861DC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBG_ea_1802861DC.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x18028BA20 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18028BAF8 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x18028D454 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802927D4 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x180292DA0 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802933B0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180294DFC (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x1802A4FF0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A6CE0 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180426350 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView(
        ViewEventDispatcher *this,
        CallerIdentity *hWnd,
        unsigned int a3)
{
  char v6; // r12
  RTL_SRWLOCK *v7; // r15
  __int64 v8; // r8
  bool v9; // bl
  __int64 v10; // r8
  int v11; // eax
  int valid; // ebx
  struct IUnknown *v13; // rdx
  unsigned int v14; // ebx
  _QWORD *v15; // rdi
  bool v16; // bl
  int AppUserModelIdForView; // eax
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int MatchingViewEventRegistration; // eax
  unsigned __int16 **v22; // r8
  int v23; // eax
  void *v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct MsgString *v29; // rcx
  __int64 v31; // [rsp+28h] [rbp-89h]
  unsigned __int64 v32; // [rsp+38h] [rbp-79h] BYREF
  __int64 v33; // [rsp+40h] [rbp-71h] BYREF
  struct HWND__ v34[2]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v35; // [rsp+50h] [rbp-61h] BYREF
  __int64 v36; // [rsp+58h] [rbp-59h]
  struct ViewEventDispatcher *v37; // [rsp+60h] [rbp-51h] BYREF
  __int128 v38; // [rsp+68h] [rbp-49h] BYREF
  CallerIdentity *v39; // [rsp+78h] [rbp-39h]
  const unsigned __int16 *Data; // [rsp+80h] [rbp-31h] BYREF
  __int128 v41; // [rsp+88h] [rbp-29h]
  __int64 v42; // [rsp+98h] [rbp-19h]
  __int128 v43; // [rsp+A0h] [rbp-11h]
  char v44; // [rsp+B0h] [rbp-1h]
  __int128 v45; // [rsp+B8h] [rbp+7h]
  char v46; // [rsp+C8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  struct MsgString *v48; // [rsp+118h] [rbp+67h] BYREF
  unsigned int v49; // [rsp+128h] [rbp+77h] BYREF
  struct IViewWrapperInternal *v50; // [rsp+130h] [rbp+7Fh] BYREF

  v49 = a3;
  v42 = -2LL;
  *(_QWORD *)&v41 = this;
  DWORD2(v41) = a3;
  v43 = v41;
  v6 = 1;
  v44 = 1;
  v50 = 0LL;
  v33 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)this + 280);
  AcquireSRWLockExclusive((PSRWLOCK)this + 35);
  *(_QWORD *)&v41 = v7;
  v37 = 0LL;
  LODWORD(v48) = a3;
  v9 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
              (_QWORD *)this + 44,
              &v48,
              v8,
              &v32) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
  if ( !v9 )
  {
    v36 = 0LL;
    *(_QWORD *)&v34[0].unused = 0LL;
    v35 = 0LL;
    v15 = (_QWORD *)((char *)this + 416);
    LODWORD(v48) = a3;
    v16 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                 (__int64)this + 416,
                 (int *)&v48,
                 v10,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    if ( v16 )
    {
      v13 = *(struct IUnknown **)(*v15 + 24 * v32 + 8);
      if ( v13 )
      {
        *(_QWORD *)&v38 = this;
        *((_QWORD *)&v38 + 1) = &v32;
        v45 = v38;
        v46 = 1;
        AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                  *((ViewManagerBridge **)this + 62),
                                  v13,
                                  &v48);
        valid = AppUserModelIdForView;
        if ( AppUserModelIdForView >= 0 )
        {
          *(_QWORD *)&v34[0].unused = &v48;
          LOBYTE(v35) = 1;
          v37 = this;
          Data = MsgStringGetData(v48);
          *(_QWORD *)&v38 = *(_QWORD *)(*v15 + 24 * v32 + 8);
          v18 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
                  (__int64 *)&v50,
                  &v49,
                  (struct IUnknown **)&v38,
                  &Data,
                  v31,
                  &v37);
          valid = v18;
          if ( v18 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
            MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                              (__int64)this,
                                              (__int64)v50,
                                              &v33);
            valid = MatchingViewEventRegistration;
            if ( MatchingViewEventRegistration >= 0 )
            {
              (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64, _QWORD))(*(_QWORD *)v50 + 672LL))(
                v50,
                (v33 + 8) & -(__int64)(v33 != 0),
                0LL);
              (*(void (__fastcall **)(struct IViewWrapperInternal *, CallerIdentity *, _QWORD))(*(_QWORD *)v50 + 760LL))(
                v50,
                hWnd,
                0LL);
              valid = ViewEventDispatcher::_AddValidView(this, v50);
              if ( valid >= 0 )
              {
                v14 = 0;
                MsgRelease(v48);
                CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
                  (_QWORD *)this + 52,
                  v32);
                goto LABEL_35;
              }
              v19 = (unsigned int)valid;
              v20 = 2085LL;
            }
            else
            {
              v19 = (unsigned int)MatchingViewEventRegistration;
              v20 = 2080LL;
            }
          }
          else
          {
            v19 = (unsigned int)v18;
            v20 = 2077LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)v19);
          MsgRelease(v48);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x80E,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)AppUserModelIdForView);
        }
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (_QWORD *)this + 52,
          v32);
LABEL_31:
        if ( v7 )
          ReleaseSRWLockExclusive(v7);
        goto LABEL_42;
      }
LABEL_34:
      v14 = 3;
      goto LABEL_35;
    }
    *(_QWORD *)&v34[0].unused = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
    v35 = -1LL;
    v36 = -1LL;
    valid = CallerIdentity::GetImmersiveAppIdFromWindow(hWnd, v34, v22);
    if ( valid >= 0 )
    {
      v23 = IsLegacyApp(*(CallerIdentity **)&v34[0].unused, (bool *)&v49);
      valid = v23;
      if ( v23 < 0 )
      {
        v25 = (unsigned int)v23;
        v26 = 2106LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)v25);
        goto LABEL_30;
      }
      if ( !(_BYTE)v49 )
      {
        LODWORD(v38) = a3;
        *((_QWORD *)&v38 + 1) = 0LL;
        v39 = hWnd;
        valid = 0;
        v27 = *((_QWORD *)this + 53);
        if ( v27 != *((_QWORD *)this + 55)
          || (valid = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                        (__int64)this + 416,
                        v27 + 1,
                        v24),
              valid >= 0) )
        {
          v28 = *((_QWORD *)this + 52) + 24 * (*((_QWORD *)this + 53))++;
          if ( v28 )
          {
            *(_DWORD *)v28 = a3;
            *(_QWORD *)(v28 + 8) = 0LL;
            *((_QWORD *)&v38 + 1) = 0LL;
            *(_QWORD *)(v28 + 16) = hWnd;
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38 + 1);
        if ( valid >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
          goto LABEL_34;
        }
        v25 = (unsigned int)valid;
        v26 = 2122LL;
        goto LABEL_29;
      }
      PostMessageW((HWND)hWnd, 0x10u, 0LL, 0LL);
      valid = -2147023728;
    }
LABEL_30:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v50, (__int64 *)(*((_QWORD *)this + 44) + 8 * v32));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v11 = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)this, (__int64)v50, &v33);
  valid = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FA,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_31;
  }
  (*(void (__fastcall **)(struct IViewWrapperInternal *, CallerIdentity *, _QWORD))(*(_QWORD *)v50 + 760LL))(
    v50,
    hWnd,
    0LL);
  v14 = 6;
LABEL_35:
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  if ( v33 )
  {
    v29 = *(struct MsgString **)(v33 + 32);
    v48 = v29;
    if ( v29 )
      (*(void (__fastcall **)(struct MsgString *, struct IUnknown *, _QWORD))(*(_QWORD *)v29 + 8LL))(v29, v13, 0LL);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v50, v14, 0LL, &v48);
  }
  v6 = 0;
  valid = 0;
LABEL_42:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
  if ( v6 )
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 62), a3, 0LL);
  return (unsigned int)valid;
}
