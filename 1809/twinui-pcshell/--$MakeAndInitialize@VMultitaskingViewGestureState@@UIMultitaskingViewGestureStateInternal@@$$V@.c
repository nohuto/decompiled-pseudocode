/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewGestureStateInternal@@@Z @ 0x1802E3B54
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1802E4E90 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIServiceProvider@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E3D90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_1801E3D90.c)
 *     ??0MultitaskingViewGestureState@@QEAA@XZ @ 0x1802E3E3C (--0MultitaskingViewGestureState@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802E43C4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIMultitaskingViewGest.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,>(
        __int64 *a1)
{
  MultitaskingViewGestureState *v2; // rax
  int CanCastTo; // edi
  MultitaskingViewGestureState *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  volatile int *v7; // rdx

  *a1 = 0LL;
  v2 = (MultitaskingViewGestureState *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = MultitaskingViewGestureState::MultitaskingViewGestureState(v2);
    *a1 = 0LL;
    v5 = (__int64)v4;
    if ( InlineIsEqualGUID(&GUID_2e123451_6a45_4fbf_bcb0_36d47e161041, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IMultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                    v5,
                    v6,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::Release(
        v5,
        v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
