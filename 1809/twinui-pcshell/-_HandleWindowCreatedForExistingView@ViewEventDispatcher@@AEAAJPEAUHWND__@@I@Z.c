/*
 * XREFs of ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18021EFF8
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x18021EE94 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800770B4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x18020EBFC (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18020EC34 (--$FindEx@VViewWrapperFinderByViewInstanceId@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInter.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x18020F4A8 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBG_ea_18020F4A8.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x180215C3C (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x180215E04 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180217BF4 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021D868 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x18021DFD0 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1802204F8 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180230850 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180232490 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView(
        ViewEventDispatcher *this,
        CallerIdentity *a2,
        unsigned int a3)
{
  unsigned int v3; // esi
  char v6; // r13
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // r12
  __int64 v9; // r8
  bool v10; // di
  __int64 v11; // r8
  int v12; // eax
  int ImmersiveAppIdFromWindow; // edi
  unsigned int v14; // edi
  _QWORD *v15; // rsi
  bool v16; // di
  struct IUnknown *v17; // rdx
  int AppUserModelIdForView; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v20; // rdx
  unsigned __int16 **v21; // r8
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  struct MsgString *v27; // rcx
  __int64 v29; // [rsp+28h] [rbp-89h]
  unsigned __int64 v30; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-71h] BYREF
  struct HWND__ v32[2]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v33; // [rsp+50h] [rbp-61h] BYREF
  __int64 v34; // [rsp+58h] [rbp-59h]
  struct ViewEventDispatcher *v35; // [rsp+60h] [rbp-51h] BYREF
  __int128 v36; // [rsp+68h] [rbp-49h] BYREF
  CallerIdentity *v37; // [rsp+78h] [rbp-39h]
  const unsigned __int16 *Data; // [rsp+80h] [rbp-31h] BYREF
  __int128 v39; // [rsp+88h] [rbp-29h]
  __int64 v40; // [rsp+98h] [rbp-19h]
  __int128 v41; // [rsp+A0h] [rbp-11h]
  char v42; // [rsp+B0h] [rbp-1h]
  __int128 v43; // [rsp+B8h] [rbp+7h]
  char v44; // [rsp+C8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  struct MsgString *v46; // [rsp+118h] [rbp+67h] BYREF
  unsigned int v47; // [rsp+128h] [rbp+77h] BYREF
  struct IViewWrapperInternal *v48; // [rsp+130h] [rbp+7Fh] BYREF

  v47 = a3;
  v40 = -2LL;
  v3 = a3;
  *(_QWORD *)&v39 = this;
  DWORD2(v39) = a3;
  v41 = v39;
  v6 = 1;
  v42 = 1;
  v48 = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 296);
  AcquireSRWLockExclusive((PSRWLOCK)this + 37);
  *(_QWORD *)&v39 = v8;
  v35 = 0LL;
  LODWORD(v46) = v3;
  v10 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
               (_QWORD *)this + 46,
               &v46,
               v9,
               &v30) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
  if ( !v10 )
  {
    v34 = 0LL;
    *(_QWORD *)&v32[0].unused = 0LL;
    v33 = 0LL;
    LODWORD(v46) = v3;
    v15 = (_QWORD *)((char *)this + 432);
    v16 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                 (__int64)this + 432,
                 (int *)&v46,
                 v11,
                 &v30) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    if ( v16 )
    {
      v17 = *(struct IUnknown **)(*v15 + 24 * v30 + 8);
      if ( v17 )
      {
        *(_QWORD *)&v36 = this;
        *((_QWORD *)&v36 + 1) = &v30;
        v43 = v36;
        v44 = 1;
        AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                  *((ViewManagerBridge **)this + 64),
                                  v17,
                                  &v46);
        ImmersiveAppIdFromWindow = AppUserModelIdForView;
        if ( AppUserModelIdForView < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x915,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)AppUserModelIdForView);
LABEL_16:
          CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
            (_QWORD *)this + 54,
            v30);
LABEL_34:
          v3 = v47;
LABEL_35:
          if ( v8 )
            ReleaseSRWLockExclusive(v8);
          goto LABEL_47;
        }
        *(_QWORD *)&v32[0].unused = &v46;
        LOBYTE(v33) = 1;
        v35 = this;
        Data = MsgStringGetData(v46);
        *(_QWORD *)&v36 = *(_QWORD *)(*v15 + 24 * v30 + 8);
        MatchingViewEventRegistration = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
                                          (__int64 *)&v48,
                                          &v47,
                                          (struct IUnknown **)&v36,
                                          &Data,
                                          v29,
                                          &v35);
        ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
        if ( MatchingViewEventRegistration < 0 )
        {
          v20 = 2340LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
          MsgRelease(v46);
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                          (__int64)this,
                                          (__int64)v48,
                                          &v31);
        ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
        if ( MatchingViewEventRegistration < 0 )
        {
          v20 = 2343LL;
          goto LABEL_15;
        }
        v7 = v31;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v48 + 664LL))(
          v48,
          (v31 + 8) & ((unsigned __int128)-(__int128)v31 >> 64),
          0LL);
        (*(void (__fastcall **)(struct IViewWrapperInternal *, CallerIdentity *, _QWORD))(*(_QWORD *)v48 + 752LL))(
          v48,
          a2,
          0LL);
        MatchingViewEventRegistration = ViewEventDispatcher::_AddValidView(this, v48);
        ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
        if ( MatchingViewEventRegistration < 0 )
        {
          v20 = 2348LL;
          goto LABEL_15;
        }
        v14 = 0;
        MsgRelease(v46);
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (_QWORD *)this + 54,
          v30);
      }
      else
      {
        v14 = 3;
      }
      v3 = v47;
      goto LABEL_40;
    }
    *(_QWORD *)&v32[0].unused = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v32);
    v33 = -1LL;
    v34 = -1LL;
    ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2, (unsigned int **)v32, v21);
    if ( ImmersiveAppIdFromWindow >= 0 )
    {
      v22 = IsLegacyApp(*(CallerIdentity **)&v32[0].unused, (bool *)&v46);
      ImmersiveAppIdFromWindow = v22;
      if ( v22 < 0 )
      {
        v23 = (unsigned int)v22;
        v24 = 2369LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)v23);
        goto LABEL_33;
      }
      if ( !(_BYTE)v46 )
      {
        LODWORD(v36) = v47;
        *((_QWORD *)&v36 + 1) = 0LL;
        v37 = a2;
        ImmersiveAppIdFromWindow = 0;
        v25 = *((_QWORD *)this + 55);
        if ( v25 == *((_QWORD *)this + 57)
          && (ImmersiveAppIdFromWindow = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                                           (__int64)this + 432,
                                           v25 + 1,
                                           0LL),
              ImmersiveAppIdFromWindow < 0) )
        {
          v3 = v47;
        }
        else
        {
          v26 = *((_QWORD *)this + 54) + 24 * (*((_QWORD *)this + 55))++;
          v3 = v47;
          if ( v26 )
          {
            *(_DWORD *)v26 = v47;
            *(_QWORD *)(v26 + 8) = 0LL;
            if ( (__int128 *)(v26 + 8) != (__int128 *)((char *)&v36 + 8) )
            {
              *(_QWORD *)(v26 + 8) = 0LL;
              *((_QWORD *)&v36 + 1) = 0LL;
            }
            *(_QWORD *)(v26 + 16) = a2;
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36 + 1);
        if ( ImmersiveAppIdFromWindow >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v32);
          v14 = 3;
          goto LABEL_40;
        }
        v23 = (unsigned int)ImmersiveAppIdFromWindow;
        v24 = 2385LL;
        goto LABEL_32;
      }
      PostMessageW((HWND)a2, 0x10u, 0LL, 0LL);
      ImmersiveAppIdFromWindow = -2147023728;
    }
LABEL_33:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v32);
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v48, (__int64 *)(*((_QWORD *)this + 46) + 8 * v30));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  v12 = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)this, (__int64)v48, &v31);
  ImmersiveAppIdFromWindow = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x901,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_35;
  }
  (*(void (__fastcall **)(struct IViewWrapperInternal *, CallerIdentity *, _QWORD))(*(_QWORD *)v48 + 752LL))(
    v48,
    a2,
    0LL);
  v14 = 6;
  v7 = v31;
LABEL_40:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v7 )
  {
    v27 = *(struct MsgString **)(v7 + 32);
    v46 = v27;
    if ( v27 )
      (*(void (__fastcall **)(struct MsgString *))(*(_QWORD *)v27 + 8LL))(v27);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v48, v14, 0LL, &v46);
  }
  v6 = 0;
  ImmersiveAppIdFromWindow = 0;
LABEL_47:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
  if ( v6 )
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 64), v3, 0LL);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
