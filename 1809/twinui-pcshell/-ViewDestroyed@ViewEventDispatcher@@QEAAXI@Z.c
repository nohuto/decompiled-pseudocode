/*
 * XREFs of ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18021C46C
 * Callers:
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180232F70 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EAF4 (--$As@UIViewWrapperInternal@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x18020EBFC (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18020EC34 (--$FindEx@VViewWrapperFinderByViewInstanceId@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInter.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180217BF4 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180220348 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x18022093C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ViewEventDispatcher::ViewDestroyed(ViewEventDispatcher *this, int a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // r14
  __int64 v6; // r8
  bool v7; // di
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  int v10; // eax
  int MatchingViewEventRegistration; // eax
  bool v12; // di
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-C8h] BYREF
  struct IUnknown *v16; // [rsp+38h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v19[3]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v20[3]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v21[7]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v22; // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v20[2] = -2LL;
  v16 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = (RTL_SRWLOCK *)((char *)this + 296);
  AcquireSRWLockExclusive((PSRWLOCK)this + 37);
  v19[1] = (__int64)v5;
  v19[0] = 0LL;
  v15 = a2;
  try
  {
    v7 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
                (_QWORD *)this + 46,
                &v15,
                v6,
                &v17) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    if ( v7 )
    {
      v9 = v17;
      v10 = Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>(
              (_QWORD *)(*((_QWORD *)this + 46) + 8 * v17),
              (__int64 *)&v16);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          656LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v10);
      ViewEventDispatcher::_RemoveValidView(this, v9);
      if ( (unsigned int)SHIsSameObject(v16, *((struct IUnknown **)this + 40)) )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v16, &v18);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          665LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v4 = v18;
    }
    else
    {
      v20[1] = 0LL;
      v19[2] = 0LL;
      v20[0] = 0LL;
      v15 = a2;
      v12 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                   (__int64)this + 432,
                   &v15,
                   v8,
                   &v17) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
      if ( v12 )
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (_QWORD *)this + 54,
          v17);
    }
    v21[0] = off_1803E2618;
    v22 = v21;
    ViewEventDispatcher::_ForEachComponent(this);
    if ( v22 )
    {
      v13 = v21;
      LOBYTE(v13) = v22 != v21;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v22 + 32LL))(v22, v13);
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( v4 )
    {
      v14 = *(_QWORD *)(v4 + 32);
      v17 = v14;
      if ( v14 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 8LL))(v14);
      ViewEventDispatcher::_RaiseViewEvent(this, v16, 4LL, &v17);
      ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl[33].QueryInterface)(v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  catch ( ... )
  {
  }
}
