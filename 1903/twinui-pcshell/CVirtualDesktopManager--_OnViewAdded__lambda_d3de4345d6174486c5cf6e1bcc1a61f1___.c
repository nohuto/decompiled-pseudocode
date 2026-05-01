/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_d3de4345d6174486c5cf6e1bcc1a61f1___ @ 0x1803EADB8
 * Callers:
 *     ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1803EC560 (-OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006AFE0 (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_d3de4345d6174486c5cf6e1bcc1a61f1_::operator() @ 0x1803EB20C (_lambda_d3de4345d6174486c5cf6e1bcc1a61f1_--operator().c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803F003C (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_d3de4345d6174486c5cf6e1bcc1a61f1___(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int (__fastcall *v6)(struct IApplicationView *, struct IUnknown **); // rbx
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v6 = *(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  if ( v6(a2, &v12) < 0 )
  {
    updated = lambda_d3de4345d6174486c5cf6e1bcc1a61f1_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 505LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 506LL;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)SHIsSameObject(v12, (struct IUnknown *)a2) )
  {
    updated = lambda_d3de4345d6174486c5cf6e1bcc1a61f1_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 492LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 493LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree((CVirtualDesktopManager *)this, a2);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 494LL;
      goto LABEL_17;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)this[12] + 96LL))(
                this[12],
                a2,
                v12);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 499LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 500LL;
      goto LABEL_17;
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v8;
}
