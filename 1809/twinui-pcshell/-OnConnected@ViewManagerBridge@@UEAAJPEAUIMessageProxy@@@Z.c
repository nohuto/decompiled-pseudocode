/*
 * XREFs of ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x180232920
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004EB5C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD68 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1800FC68C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18018D074 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EA6C (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x18022FE5C (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x180231030 (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 *     ?StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180235F1C (-StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnConnected(struct IUnknown **this, struct IUnknown *a2)
{
  struct IUnknown **v3; // rdi
  int v4; // eax
  struct IUnknown *v5; // rbx
  _QWORD *v6; // r15
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void *v10; // r8
  int v11; // eax
  unsigned int i; // r14d
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  ViewManagerBridge *v17; // rcx
  void *v18; // r8
  const char *v19; // r9
  struct IUnknown *v20; // rdx
  int v21; // eax
  struct IUnknown *v22; // rcx
  void *v23; // rdx
  wil *v24; // rcx
  int v26; // eax
  int v27; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-1B0h] BYREF
  struct IUnknownVtbl *v29; // [rsp+30h] [rbp-1A8h] BYREF
  int v30; // [rsp+38h] [rbp-1A0h]
  unsigned int v31; // [rsp+3Ch] [rbp-19Ch] BYREF
  struct IShellView *v32; // [rsp+40h] [rbp-198h] BYREF
  int v33; // [rsp+48h] [rbp-190h] BYREF
  int v34; // [rsp+4Ch] [rbp-18Ch] BYREF
  struct IUnknown **v35; // [rsp+50h] [rbp-188h]
  __int64 v36; // [rsp+58h] [rbp-180h]
  _QWORD v37[40]; // [rsp+60h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v36 = -2LL;
  v3 = this;
  v35 = this;
  if ( (unsigned int)SHIsSameObject(a2, this[12]) )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v37,
      (__int64)"OnConnected");
    v37[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
    ViewManagerInteropTraceLogging::OnConnected::StartActivity((ViewManagerInteropTraceLogging::OnConnected *)v37);
    try
    {
      v4 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))a2->lpVtbl[3].QueryInterface)(
             a2,
             (unsigned __int64)(v3 + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)(v3 - 1) >> 64),
             *((unsigned int *)v3 + 22));
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          790LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v4);
      v5 = v3[12];
      v6 = v3 + 14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v3 + 14);
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown **))v5->lpVtbl[1].Release)(v5, v3 + 14);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          792LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v7);
      v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v6 + 64LL))(
             *v6,
             (unsigned __int64)(v3 + 1) & -(__int64)(v3 != (struct IUnknown **)8));
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          793LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 48LL))(*v6, &v27);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          800LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
      v11 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)(v3 + 18),
              v27,
              v10);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          801LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
      for ( i = 0; (int)i < v27; ++i )
      {
        v28 = 0LL;
        v13 = *v6;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 56LL))(v13, i, &v28);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            806LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v14);
        v32 = 0LL;
        v15 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(&v28, (__int64 *)&v32);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            808LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v15);
        v16 = ((__int64 (__fastcall *)(struct IShellView *, int *))v32->lpVtbl[1].GetWindow)(v32, &v33);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            811LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v16);
        v29 = 0LL;
        v30 = 0;
        v31 = 0;
        Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v29, &v28);
        v30 = v33;
        v34 = 1;
        ViewManagerBridge::GetShellWindowIdForView(v17, v32, (enum Navigation::WindowType *)&v34, &v31);
        v19 = 0LL;
        v20 = v3[19];
        if ( v20 != v3[21]
          || (v21 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                      (__int64)(v3 + 18),
                      (unsigned __int64)&v20->lpVtbl + 1,
                      v18),
              v19 = (const char *)(unsigned int)v21,
              v21 >= 0) )
        {
          v3[19] = (struct IUnknown *)((char *)v3[19] + 1);
          v22 = &v3[18][2 * ((_QWORD)v3[19] - 1)];
          if ( v22 )
          {
            v22->lpVtbl = 0LL;
            if ( v22 != (struct IUnknown *)&v29 )
            {
              v22->lpVtbl = v29;
              v29 = 0LL;
            }
            LODWORD(v22[1].lpVtbl) = v30;
            HIDWORD(v22[1].lpVtbl) = v31;
          }
        }
        if ( (int)v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            822LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      }
      ViewManagerBridge::CloseOrphanedShellWindows((ViewManagerBridge *)(v3 - 1), (__int64 *)v3 + 18);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v37, 0);
      *((_BYTE *)v3 + 137) = 0;
      v37[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v37);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v37);
    }
    catch ( ... )
    {
      v26 = wil::ResultFromCaughtException(v24);
      *((_DWORD *)v35 + 35) = v26;
      v3 = v35;
    }
    wil::details::SetEvent((wil::details *)v3[15], v23);
  }
  return 0LL;
}
