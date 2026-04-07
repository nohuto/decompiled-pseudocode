/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800082A8
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000BBFC (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800086F0 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x180009020 (--0CAnimationClock@@QEAA@XZ.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000A044 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000A0C4 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000A464 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000A724 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  struct _GUID v4; // xmm0
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  CAnimationClock *v8; // rax
  void *v10; // [rsp+28h] [rbp-180h]
  struct _GUID v11; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-168h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    v12,
    "CreateAnimationClock");
  v4 = *a1;
  v12[0] = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  v11 = v4;
  AnimationClockLoggingTelemetry::CreateAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::CreateAnimationClock *)v12,
    &v11);
  v5 = *(_QWORD *)&a1->Data1;
  v6 = 0;
  *a2 = 0LL;
  v7 = v5 - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    v8 = (CAnimationClock *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              152LL);
    if ( v8 )
      v8 = CAnimationClock::CAnimationClock(v8);
    *a2 = v8;
    if ( !v8 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2AAu, v10);
      if ( *a2 )
      {
        CBaseObject::Release(*a2);
        *a2 = 0LL;
      }
    }
  }
  else
  {
    v6 = -2147024809;
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12, v6);
  v12[0] = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(v12);
  return v6;
}
