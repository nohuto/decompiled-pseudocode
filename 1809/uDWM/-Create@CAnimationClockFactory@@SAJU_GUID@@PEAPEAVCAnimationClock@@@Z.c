/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18002E130
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18002DCA8 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180027A34 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180027AB4 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180027E44 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002814C (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18002E254 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x18002E340 (--0CAnimationClock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  struct _GUID v4; // xmm0
  __int64 v5; // rax
  bool v6; // di
  int v7; // ebx
  CBaseObject *v8; // rax
  unsigned int v9; // ebx
  CAnimationClock *v10; // rax
  struct _GUID v12; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v13[40]; // [rsp+40h] [rbp-168h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"CreateAnimationClock");
  v4 = *a1;
  v13[0] = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  v12 = v4;
  AnimationClockLoggingTelemetry::CreateAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::CreateAnimationClock *)v13,
    &v12);
  *a2 = 0LL;
  v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  v6 = v5 == 0;
  v7 = -(v5 == 0);
  v8 = 0LL;
  v9 = v7 & 0x80070057;
  if ( v6 )
    goto LABEL_9;
  v10 = (CAnimationClock *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             152LL);
  if ( v10 )
    v10 = CAnimationClock::CAnimationClock(v10);
  *a2 = v10;
  if ( !v10 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2B7u);
    v8 = *a2;
LABEL_9:
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *a2 = 0LL;
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, v9);
  v13[0] = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return v9;
}
