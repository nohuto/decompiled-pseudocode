/*
 * XREFs of ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800085A4
 * Callers:
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180006B28 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180006C08 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180006D10 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180006E34 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180008334 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800B2620 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180008074 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180008A2C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18003B8B0 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  _DWORD *v3; // rcx
  char v4; // si
  int v5; // edx
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 38;
  if ( !a1[38] )
    goto LABEL_2;
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v4 )
  {
LABEL_2:
    v3 = (_DWORD *)a1[6];
    if ( *v3 == 1 )
    {
      LODWORD(SRWLock[0]) = v3[21];
      v5 = -2147024322;
      if ( SLODWORD(SRWLock[0]) < 0 )
        v5 = (int)SRWLock[0];
      wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v3,
        v5,
        (int *)SRWLock);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
