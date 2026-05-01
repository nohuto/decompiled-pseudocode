/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_ceeac1ba8e7a7665bc74ec0b2f20c435___ @ 0x18006AF44
 * Callers:
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006AED0 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006AFE0 (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     _lambda_ceeac1ba8e7a7665bc74ec0b2f20c435_::operator() @ 0x18006B084 (_lambda_ceeac1ba8e7a7665bc74ec0b2f20c435_--operator().c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803F003C (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_ceeac1ba8e7a7665bc74ec0b2f20c435___(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  struct IUnknown *v8; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL))(a2, &v12) >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(v12, (struct IUnknown *)a2) )
    {
      updated = lambda_ceeac1ba8e7a7665bc74ec0b2f20c435_::operator()(a3);
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
          v10 = 494LL;
        }
        else
        {
          v10 = 493LL;
        }
      }
      else
      {
        v10 = 492LL;
      }
    }
    else
    {
      updated = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)this[12] + 96LL))(
                  this[12],
                  a2,
                  v12);
      v7 = updated;
      if ( updated >= 0 )
      {
        updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
        v7 = updated;
        if ( updated >= 0 )
          goto LABEL_4;
        v10 = 500LL;
      }
      else
      {
        v10 = 499LL;
      }
    }
  }
  else
  {
    updated = lambda_ceeac1ba8e7a7665bc74ec0b2f20c435_::operator()(a3);
    v7 = updated;
    if ( updated < 0 )
    {
      v10 = 505LL;
    }
    else
    {
      updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)this, a2, this[18]);
      v7 = updated;
      if ( updated >= 0 )
        goto LABEL_4;
      v10 = 506LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)updated,
    -2);
LABEL_4:
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  }
  return v7;
}
