/*
 * XREFs of ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18004F960
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180024530 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     _lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator() @ 0x18004E0B8 (_lambda_ee3e0a0da20eb1cf2fabc213f82c029b_--operator().c)
 *     ??$As@UIClassicWindowOwnershipQuery@@@?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004FA2C (--$As@UIClassicWindowOwnershipQuery@@@-$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@QEBA.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::GetRootSwitchableOwner(
        CWin32ApplicationView *this,
        struct IApplicationView **a2)
{
  volatile signed __int32 *v4; // rbx
  int v5; // eax
  int ViewForHwnd; // ebx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+30h] [rbp-20h] BYREF
  HWND v13[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  RTL_SRWLOCK *v15; // [rsp+78h] [rbp+28h]
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v13[1] = (HWND)-2LL;
  *a2 = 0LL;
  v16 = 0LL;
  v12 = &v16;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v11);
  v4 = v11;
  if ( v11 )
  {
    lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator()(&v12, (__int64)v11);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v4);
  }
  if ( v16 )
  {
    v17 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IClassicWindowPresentation>::As<IClassicWindowOwnershipQuery>(&v16, &v17);
    ViewForHwnd = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D4,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v5,
        v10);
    }
    else
    {
      ViewForHwnd = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND *))(*(_QWORD *)v17 + 24LL))(
                      v17,
                      *((_QWORD *)this + 27),
                      v13);
      if ( ViewForHwnd >= 0 )
      {
        v15 = 0LL;
        GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v10);
        v8 = (volatile signed __int32 *)v10;
        if ( v10 )
        {
          v9 = *(_QWORD *)(v10 + 48);
          if ( v9 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v9 + 236));
            v8 = (volatile signed __int32 *)v10;
            v15 = (RTL_SRWLOCK *)v9;
          }
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v8);
        }
        ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v15 + 17, v13[0], a2);
        if ( v15 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release((__int64)v15);
        if ( ViewForHwnd >= 0 )
          ViewForHwnd = 0;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    ViewForHwnd = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80270257LL,
      v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return (unsigned int)ViewForHwnd;
}
