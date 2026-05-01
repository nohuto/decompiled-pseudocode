/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewGestureStateInternal@@@Z @ 0x180344540
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180345880 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008E710 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExper.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0MultitaskingViewGestureState@@QEAA@XZ @ 0x180344828 (--0MultitaskingViewGestureState@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIMultitaskingViewGestureState@@UIMultitaskingViewGestureStateInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180344DB4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIMultitaskingViewGest.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,>(
        volatile signed __int32 **a1)
{
  MultitaskingViewGestureState *v2; // rax
  int CanCastTo; // edi
  MultitaskingViewGestureState *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx

  *a1 = 0LL;
  v2 = (MultitaskingViewGestureState *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = MultitaskingViewGestureState::MultitaskingViewGestureState(v2);
    *a1 = 0LL;
    v5 = (volatile signed __int32 *)v4;
    if ( InlineIsEqualGUID(&GUID_2e123451_6a45_4fbf_bcb0_36d47e161041, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IMultitaskingViewGestureState,IMultitaskingViewGestureStateInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                    v5,
                    v6,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
