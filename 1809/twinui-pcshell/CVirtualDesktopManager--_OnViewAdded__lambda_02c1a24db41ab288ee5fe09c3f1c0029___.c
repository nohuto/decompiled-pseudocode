/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_02c1a24db41ab288ee5fe09c3f1c0029___ @ 0x180069904
 * Callers:
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180069890 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006999C (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     _lambda_02c1a24db41ab288ee5fe09c3f1c0029_::operator() @ 0x180069A40 (_lambda_02c1a24db41ab288ee5fe09c3f1c0029_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18038A23C (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_02c1a24db41ab288ee5fe09c3f1c0029___(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL))(a2, &v11) >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(v11, (struct IUnknown *)a2) )
    {
      updated = lambda_02c1a24db41ab288ee5fe09c3f1c0029_::operator()(a3);
      v7 = updated;
      if ( updated >= 0 )
      {
        updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
        v7 = updated;
        if ( updated >= 0 )
        {
          updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(
                      (CVirtualDesktopManager *)this,
                      a2);
          v7 = updated;
          if ( updated >= 0 )
            goto LABEL_4;
          v9 = 492LL;
        }
        else
        {
          v9 = 491LL;
        }
      }
      else
      {
        v9 = 490LL;
      }
    }
    else
    {
      updated = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)this[12] + 96LL))(
                  this[12],
                  a2,
                  v11);
      v7 = updated;
      if ( updated >= 0 )
      {
        updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
        v7 = updated;
        if ( updated >= 0 )
          goto LABEL_4;
        v9 = 498LL;
      }
      else
      {
        v9 = 497LL;
      }
    }
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_4;
  }
  updated = lambda_02c1a24db41ab288ee5fe09c3f1c0029_::operator()(a3);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 503LL;
    goto LABEL_18;
  }
  updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 504LL;
    goto LABEL_18;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v7;
}
