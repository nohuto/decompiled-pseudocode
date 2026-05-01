/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_c6011d37746fac6432bd7228d12ac8ca___ @ 0x180385354
 * Callers:
 *     ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180386AD0 (-OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006999C (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_c6011d37746fac6432bd7228d12ac8ca_::operator() @ 0x180385744 (_lambda_c6011d37746fac6432bd7228d12ac8ca_--operator().c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18038A23C (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_c6011d37746fac6432bd7228d12ac8ca___(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( (*(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL))(a2, &v11) < 0 )
  {
    updated = lambda_c6011d37746fac6432bd7228d12ac8ca_::operator()(a3);
    v7 = updated;
    if ( updated < 0 )
    {
      v8 = 503LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
    v7 = updated;
    if ( updated < 0 )
    {
      v8 = 504LL;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)SHIsSameObject(v11, (struct IUnknown *)a2) )
  {
    updated = lambda_c6011d37746fac6432bd7228d12ac8ca_::operator()(a3);
    v7 = updated;
    if ( updated < 0 )
    {
      v8 = 490LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
    v7 = updated;
    if ( updated < 0 )
    {
      v8 = 491LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree((CVirtualDesktopManager *)this, a2);
    v7 = updated;
    if ( updated < 0 )
    {
      v8 = 492LL;
      goto LABEL_17;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)this[12] + 96LL))(
                this[12],
                a2,
                v11);
    v7 = updated;
    if ( updated < 0 )
    {
      v8 = 497LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
    v7 = updated;
    if ( updated < 0 )
    {
      v8 = 498LL;
      goto LABEL_17;
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v7;
}
