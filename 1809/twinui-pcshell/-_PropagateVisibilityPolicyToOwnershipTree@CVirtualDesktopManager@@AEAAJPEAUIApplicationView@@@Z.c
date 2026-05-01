/*
 * XREFs of ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18038A23C
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_02c1a24db41ab288ee5fe09c3f1c0029___ @ 0x180069904 (CVirtualDesktopManager--_OnViewAdded__lambda_02c1a24db41ab288ee5fe09c3f1c0029___.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_c6011d37746fac6432bd7228d12ac8ca___ @ 0x180385354 (CVirtualDesktopManager--_OnViewAdded__lambda_c6011d37746fac6432bd7228d12ac8ca___.c)
 *     ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180386980 (-MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PE.c)
 *     ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180386A20 (-MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewOwnerChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180389FB0 (-ViewOwnerChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18038A198 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006999C (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  unsigned int v4; // edi
  struct IApplicationView *v5; // rbx
  int updated; // eax
  int v7; // esi
  __int64 v8; // rdx
  __int64 v10; // [rsp+28h] [rbp-48h] BYREF
  int v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  struct IApplicationView *v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v19; // [rsp+A8h] [rbp+38h] BYREF
  struct IApplicationView *v20; // [rsp+B0h] [rbp+40h] BYREF

  v4 = 0;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 368LL))(a2, &v19) >= 0 )
  {
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v10,
      v19);
    LODWORD(v12) = 0;
    v13 = 0LL;
    v14 = &v10;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
    LODWORD(v15) = v11;
    v16 = 0LL;
    v17 = &v10;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v15);
    while ( 1 )
    {
      if ( (_DWORD)v12 == (_DWORD)v15 && v14 == v17 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        goto LABEL_12;
      }
      v5 = v13;
      v20 = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *))(**((_QWORD **)this + 12) + 96LL))(
                  *((_QWORD *)this + 12),
                  v5,
                  a2);
      v7 = updated;
      if ( updated < 0 )
        break;
      updated = CVirtualDesktopManager::_UpdateViewVisibility(this, v5, *((struct IVirtualDesktop **)this + 18));
      v7 = updated;
      if ( updated < 0 )
      {
        v8 = 194LL;
        goto LABEL_11;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      LODWORD(v12) = v12 + 1;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
    }
    v8 = 193LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v4 = v7;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v4;
}
