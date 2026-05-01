/*
 * XREFs of ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180292E7C
 * Callers:
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18029314C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18013B2DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x1802861DC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBG_ea_1802861DC.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18028BAF8 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802933B0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x18029510C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180295548 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x1802A4FF0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
        ViewManagerBridge **this,
        unsigned int a2,
        struct IUnknown **a3,
        __int64 *a4,
        struct IUnknown *a5)
{
  struct IUnknown *v9; // r13
  char v10; // r14
  int AppUserModelIdForView; // eax
  int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  int MatchingViewEventRegistration; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  struct IUnknown *v19; // rbx
  void *v20; // r8
  __int64 v21; // rdx
  struct IUnknown **v22; // rdx
  struct IUnknown *v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+20h] [rbp-50h]
  struct MsgString *v27; // [rsp+30h] [rbp-40h] BYREF
  ViewManagerBridge **v28; // [rsp+38h] [rbp-38h] BYREF
  const unsigned __int16 *Data; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v30[3]; // [rsp+48h] [rbp-28h] BYREF
  char v31; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v33; // [rsp+B8h] [rbp+48h] BYREF
  struct IUnknown *v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v33 = a2;
  v30[1] = (struct IUnknown *)-2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  v9 = a5;
  LOBYTE(a5->lpVtbl) = 0;
  v10 = 0;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(
              (ViewEventDispatcher *)this,
              a2,
              (struct IViewWrapperInternal **)&a5) >= 0 )
    goto LABEL_11;
  v10 = 1;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
  AppUserModelIdForView = ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId(
                            (ViewEventDispatcher *)this,
                            a2,
                            &v34);
  v12 = AppUserModelIdForView;
  if ( AppUserModelIdForView >= 0 )
  {
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(this[62], v34, &v27);
    v12 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v13 = 2272LL;
      goto LABEL_6;
    }
    v30[2] = (struct IUnknown *)&v27;
    v31 = 1;
    v28 = this;
    Data = MsgStringGetData(v27);
    v30[0] = v34;
    v14 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
            (__int64 *)&a5,
            &v33,
            v30,
            &Data,
            v26,
            (struct ViewEventDispatcher **)&v28);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8ED,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
      MsgRelease(v27);
      goto LABEL_9;
    }
    MsgRelease(v27);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
LABEL_11:
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, a5, &v35);
    v12 = MatchingViewEventRegistration;
    if ( MatchingViewEventRegistration >= 0 )
    {
      if ( !v10 )
        goto LABEL_22;
      ((void (__fastcall *)(struct IUnknown *, __int64, _QWORD))a5->lpVtbl[28].QueryInterface)(
        a5,
        (v35 + 8) & -(__int64)(v35 != 0),
        0LL);
      v18 = this + 44;
      v19 = a5;
      v34 = a5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
      v12 = 0;
      v21 = v18[1];
      if ( v21 != v18[3]
        || (v12 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v18,
                    v21 + 1,
                    v20),
            v12 >= 0) )
      {
        v22 = (struct IUnknown **)(*v18 + 8 * v18[1]++);
        if ( v22 )
        {
          *v22 = 0LL;
          if ( v22 != &v34 )
          {
            *v22 = v19;
            v34 = 0LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      if ( v12 >= 0 )
      {
LABEL_22:
        v23 = a5;
        a5 = 0LL;
        *a3 = v23;
        v24 = v35;
        v35 = 0LL;
        *a4 = v24;
        LOBYTE(v9->lpVtbl) = v10;
        v12 = 0;
        goto LABEL_23;
      }
      v16 = (unsigned int)v12;
      v17 = 2297LL;
    }
    else
    {
      v16 = (unsigned int)MatchingViewEventRegistration;
      v17 = 2289LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v16);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    goto LABEL_24;
  }
  v13 = 2269LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)AppUserModelIdForView);
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return (unsigned int)v12;
}
