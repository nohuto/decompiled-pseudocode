/*
 * XREFs of ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18015A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180024530 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator() @ 0x18004E0B8 (_lambda_ee3e0a0da20eb1cf2fabc213f82c029b_--operator().c)
 *     ??$As@UIClassicWindowOwnershipQuery@@@?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004FA2C (--$As@UIClassicWindowOwnershipQuery@@@-$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@QEBA.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180081A2C (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CWin32ApplicationView::EnumerateOwnershipTree(CWin32ApplicationView *this, struct IObjectArray **a2)
{
  volatile signed __int32 *v4; // rbx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rsi
  HWND *v8; // rdi
  const struct _GUID *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  HWND *v13; // rsi
  HWND v14; // r14
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // bl
  __int64 v19; // rcx
  int v20; // eax
  struct IApplicationView *v22; // [rsp+30h] [rbp-39h] BYREF
  __int64 v23; // [rsp+38h] [rbp-31h] BYREF
  __int64 v24; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-21h] BYREF
  HWND *v26; // [rsp+50h] [rbp-19h] BYREF
  __int64 v27; // [rsp+58h] [rbp-11h]
  __int64 v28; // [rsp+60h] [rbp-9h]
  __int64 v29; // [rsp+68h] [rbp-1h]
  volatile signed __int32 *v30; // [rsp+70h] [rbp+7h] BYREF
  __int64 *v31; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v32[8]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v34; // [rsp+D8h] [rbp+6Fh] BYREF
  RTL_SRWLOCK *v35; // [rsp+E0h] [rbp+77h]
  void *v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v32[1] = -2LL;
  *a2 = 0LL;
  v23 = 0LL;
  v31 = &v23;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v30);
  v4 = v30;
  if ( v30 )
  {
    lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator()(&v31, (__int64)v30);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v4);
  }
  if ( v23 )
  {
    v25 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IClassicWindowPresentation>::As<IClassicWindowOwnershipQuery>(&v23, (__int64)&v25);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F0,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v6);
LABEL_29:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_30;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD *))(*(_QWORD *)v25 + 32LL))(
           v25,
           *((_QWORD *)this + 27),
           &v34,
           v32);
    if ( v5 < 0 )
      goto LABEL_29;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v7 = v34;
    v8 = (HWND *)v32[0];
    CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v26);
    v26 = v8;
    v27 = v7;
    v29 = v7;
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    v11 = CEnumerableObjectCollection::CreateInstance(v10, v9, &v36);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v13 = &v8[v7];
      while ( v8 != v13 )
      {
        v14 = *v8;
        v22 = 0LL;
        v35 = 0LL;
        GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v24);
        v15 = (volatile signed __int32 *)v24;
        if ( v24 )
        {
          v16 = *(_QWORD *)(v24 + 48);
          v17 = (__int64)v35;
          if ( v35 != (RTL_SRWLOCK *)v16 )
          {
            if ( v16 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v16 + 236));
              v17 = (__int64)v35;
              v15 = (volatile signed __int32 *)v24;
            }
            v35 = (RTL_SRWLOCK *)v16;
            if ( v17 )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v17);
          }
          v24 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v15);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        v18 = (int)CApplicationViewManager::GetViewForHwnd(v35 + 17, v14, &v22) >= 0;
        v19 = (__int64)v35;
        if ( v35 )
        {
          v35 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v19);
        }
        if ( v18 )
        {
          v20 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)v36 + 40LL))(v36, v22);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x30B,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)(unsigned int)v20);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        ++v8;
      }
      v11 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v36)(
              v36,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a2);
      v5 = v11;
      if ( v11 >= 0 )
        goto LABEL_28;
      v12 = 782LL;
    }
    else
    {
      v12 = 763LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v11);
LABEL_28:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v26);
    goto LABEL_29;
  }
  v5 = -2144927145;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2ED,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x80270257LL);
LABEL_30:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return (unsigned int)v5;
}
