/*
 * XREFs of ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x18021E0AC
 * Callers:
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E37C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x18020F4A8 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBG_ea_18020F4A8.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x180215E04 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x1802207F0 (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180230850 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
        ViewManagerBridge **this,
        unsigned int a2,
        struct IViewWrapperInternal **a3,
        struct IUnknown **a4,
        char *a5)
{
  char v9; // r14
  int AppUserModelIdForView; // eax
  int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  int MatchingViewEventRegistration; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  struct IUnknown *v17; // r15
  struct IViewWrapperInternal *v18; // rbx
  void *v19; // r8
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  struct MsgString **v22; // rdx
  struct IViewWrapperInternal *v23; // rax
  __int64 v25; // [rsp+20h] [rbp-50h]
  struct MsgString *v26; // [rsp+30h] [rbp-40h] BYREF
  ViewManagerBridge **v27; // [rsp+38h] [rbp-38h] BYREF
  const unsigned __int16 *Data; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v29[3]; // [rsp+48h] [rbp-28h] BYREF
  char v30; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v32; // [rsp+B8h] [rbp+48h] BYREF
  struct IViewWrapperInternal *v33; // [rsp+C0h] [rbp+50h] BYREF
  struct IUnknown *v34; // [rsp+C8h] [rbp+58h] BYREF

  v32 = a2;
  v29[1] = (struct IUnknown *)-2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = 0;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v33) >= 0 )
    goto LABEL_11;
  v9 = 1;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
  AppUserModelIdForView = ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId(
                            (ViewEventDispatcher *)this,
                            a2,
                            &v34);
  v11 = AppUserModelIdForView;
  if ( AppUserModelIdForView >= 0 )
  {
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(this[64], v34, &v26);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v12 = 2535LL;
      goto LABEL_6;
    }
    v29[2] = (struct IUnknown *)&v26;
    v30 = 1;
    v27 = this;
    Data = MsgStringGetData(v26);
    v29[0] = v34;
    v13 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
            (__int64 *)&v33,
            &v32,
            v29,
            &Data,
            v25,
            (struct ViewEventDispatcher **)&v27);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F4,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
      MsgRelease(v26);
      goto LABEL_9;
    }
    MsgRelease(v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
LABEL_11:
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v33, &v34);
    v11 = MatchingViewEventRegistration;
    if ( MatchingViewEventRegistration >= 0 )
    {
      v17 = v34;
      if ( !v9 )
        goto LABEL_22;
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v33 + 664LL))(
        v33,
        (unsigned __int64)&v34[1] & ((unsigned __int128)-(__int128)(unsigned __int64)v34 >> 64),
        0LL);
      v18 = v33;
      v26 = v33;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
      v20 = this + 46;
      v11 = 0;
      v21 = v20[1];
      if ( v21 != v20[3]
        || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v20,
                    v21 + 1,
                    v19),
            v11 >= 0) )
      {
        v22 = (struct MsgString **)(*v20 + 8 * v20[1]++);
        if ( v22 )
        {
          *v22 = 0LL;
          if ( v22 != &v26 )
          {
            *v22 = v18;
            v26 = 0LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      if ( v11 >= 0 )
      {
LABEL_22:
        v23 = v33;
        v33 = 0LL;
        *a3 = v23;
        v34 = 0LL;
        *a4 = v17;
        *a5 = v9;
        v11 = 0;
        goto LABEL_23;
      }
      v15 = (unsigned int)v11;
      v16 = 2560LL;
    }
    else
    {
      v15 = (unsigned int)MatchingViewEventRegistration;
      v16 = 2552LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v15);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    goto LABEL_24;
  }
  v12 = 2532LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)AppUserModelIdForView);
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  return (unsigned int)v11;
}
