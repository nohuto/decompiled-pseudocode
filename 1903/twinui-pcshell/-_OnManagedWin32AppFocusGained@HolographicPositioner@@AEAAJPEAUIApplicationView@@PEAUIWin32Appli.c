/*
 * XREFs of ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180205258
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180058E90 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180059094 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x1800594B0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18020422C (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180204738 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802056EC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::_OnManagedWin32AppFocusGained(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IWin32ApplicationView *v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a3;
  v10[1] = -2LL;
  HolographicPositioner::_FindViewHostItem((__int64)this, v10);
  if ( v10[0] )
  {
    v13 = 6;
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 2156LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_16;
    }
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        LOBYTE(v12) = 0;
        if ( (*(int (__fastcall **)(_QWORD, struct IWin32ApplicationView **))(*(_QWORD *)v10[0] + 80LL))(v10[0], &v12) >= 0
          && !(_BYTE)v12 )
        {
          v5 = HolographicPositioner::_RaiseRequestNavigateToView(this, a2);
          v6 = v5;
          if ( v5 < 0 )
          {
            v7 = 2172LL;
            goto LABEL_14;
          }
        }
      }
    }
    else if ( IsHolographicWin32SlatesFeatureEnabled() )
    {
      if ( !HolographicPositioner::_IsDisplayContextHolographic(this) )
      {
        v5 = HolographicPositioner::_HandleControlLostForView(this, a2);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 2187LL;
          goto LABEL_14;
        }
      }
    }
  }
  v6 = 0;
LABEL_16:
  v8 = v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
