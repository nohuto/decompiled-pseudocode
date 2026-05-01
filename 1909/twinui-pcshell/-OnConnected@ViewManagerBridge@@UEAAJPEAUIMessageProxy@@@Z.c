/*
 * XREFs of ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1802A7180
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014340 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800180B0 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018134 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x180141B4C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801F30C4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18028582C (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x1802A4588 (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x1802A5820 (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 *     ?StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802AA940 (-StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnConnected(struct IUnknown **this, struct IUnknown *a2)
{
  struct IUnknown **v3; // rsi
  int v4; // eax
  struct IUnknown *v5; // rdi
  ULONG (__stdcall *Release)(IUnknown *); // rbx
  _QWORD *v7; // r12
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // r8
  int v12; // eax
  unsigned int i; // r15d
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD); // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  ViewManagerBridge *v19; // rcx
  void *v20; // r8
  const char *v21; // r9
  struct IUnknown *v22; // rdx
  int v23; // eax
  struct IUnknown *v24; // rcx
  void *v25; // rdx
  wil *v26; // rcx
  int v28; // eax
  int v29; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-1B0h] BYREF
  struct IUnknownVtbl *v31; // [rsp+30h] [rbp-1A8h] BYREF
  int v32; // [rsp+38h] [rbp-1A0h]
  unsigned int v33; // [rsp+3Ch] [rbp-19Ch] BYREF
  struct IShellView *v34; // [rsp+40h] [rbp-198h] BYREF
  int v35; // [rsp+48h] [rbp-190h] BYREF
  int v36; // [rsp+4Ch] [rbp-18Ch] BYREF
  struct IUnknown **v37; // [rsp+50h] [rbp-188h]
  __int64 v38; // [rsp+58h] [rbp-180h]
  _QWORD v39[40]; // [rsp+60h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v38 = -2LL;
  v3 = this;
  v37 = this;
  if ( (unsigned int)SHIsSameObject(a2, this[12]) )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v39,
      (__int64)"OnConnected");
    v39[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
    ViewManagerInteropTraceLogging::OnConnected::StartActivity((ViewManagerInteropTraceLogging::OnConnected *)v39);
    try
    {
      v4 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int64, _QWORD))a2->lpVtbl[3].QueryInterface)(
             a2,
             (unsigned __int64)(v3 + 3) & -(__int64)(v3 != (struct IUnknown **)8),
             *((unsigned int *)v3 + 22));
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          790LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v4);
      v5 = v3[12];
      Release = v5->lpVtbl[1].Release;
      v7 = v3 + 14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v3 + 14);
      v8 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown **))Release)(v5, v3 + 14);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          792LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v7 + 64LL))(
             *v7,
             (unsigned __int64)(v3 + 1) & -(__int64)(v3 != (struct IUnknown **)8));
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          793LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v7 + 48LL))(*v7, &v29);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          800LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v10);
      v12 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)(v3 + 18),
              v29,
              v11);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          801LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v12);
      for ( i = 0; (int)i < v29; ++i )
      {
        v30 = 0LL;
        v14 = *v7;
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v7 + 56LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
        v16 = v15(v14, i, &v30);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            806LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v16);
        v34 = 0LL;
        v17 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(&v30, (__int64 *)&v34);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            808LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v17);
        v18 = ((__int64 (__fastcall *)(struct IShellView *, int *))v34->lpVtbl[1].GetWindow)(v34, &v35);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            811LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v18);
        v31 = 0LL;
        v32 = 0;
        v33 = 0;
        Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v31, (__int64 *)&v30);
        v32 = v35;
        v36 = 1;
        ViewManagerBridge::GetShellWindowIdForView(v19, v34, (enum Navigation::WindowType *)&v36, &v33);
        v21 = 0LL;
        v22 = v3[19];
        if ( v22 != v3[21]
          || (v23 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                      (__int64)(v3 + 18),
                      (unsigned __int64)&v22->lpVtbl + 1,
                      v20),
              v21 = (const char *)(unsigned int)v23,
              v23 >= 0) )
        {
          v3[19] = (struct IUnknown *)((char *)v3[19] + 1);
          v24 = &v3[18][2 * ((_QWORD)v3[19] - 1)];
          if ( v24 )
          {
            v24->lpVtbl = 0LL;
            if ( v24 != (struct IUnknown *)&v31 )
            {
              v24->lpVtbl = v31;
              v31 = 0LL;
            }
            LODWORD(v24[1].lpVtbl) = v32;
            HIDWORD(v24[1].lpVtbl) = v33;
          }
        }
        if ( (int)v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            822LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            v21);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
      }
      ViewManagerBridge::CloseOrphanedShellWindows((ViewManagerBridge *)(v3 - 1), (__int64 *)v3 + 18);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v39, 0);
      *((_BYTE *)v3 + 137) = 0;
      v39[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v39);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v39);
    }
    catch ( ... )
    {
      v28 = wil::ResultFromCaughtException(v26);
      *((_DWORD *)v37 + 35) = v28;
      v3 = v37;
    }
    wil::details::SetEvent((wil::details *)v3[15], v25);
  }
  return 0LL;
}
