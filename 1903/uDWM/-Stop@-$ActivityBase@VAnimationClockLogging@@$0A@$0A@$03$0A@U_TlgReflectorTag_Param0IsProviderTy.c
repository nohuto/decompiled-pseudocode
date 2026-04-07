/*
 * XREFs of ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000A464
 * Callers:
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800082A8 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x1800083B0 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x1800084D4 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000920C (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180009E54 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800B29AC (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180009B98 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000A3BC (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000A54C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000A5C0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18000AA7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  bool v4; // al
  PSRWLOCK v5; // rcx
  bool v6; // di
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v9; // [rsp+38h] [rbp-29h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-21h] BYREF
  __int64 v11; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+17h]
  int v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+84h] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]
  int *v19; // [rsp+98h] [rbp+37h]
  int v20; // [rsp+A0h] [rbp+3Fh]
  int v21; // [rsp+A4h] [rbp+43h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v4 = wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         a2,
         (int *)&v9);
  v5 = SRWLock;
  v6 = v4;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<AnimationClockLogging>::get(
                                          (__int64)v5,
                                          (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v7 > 5u )
    {
      v15 = 0;
      v18 = 0;
      v13 = &v11;
      LODWORD(SRWLock) = a2;
      p_SRWLock = &SRWLock;
      v11 = 0x1000000LL;
      v14 = 8;
      v17 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v21 = 0;
      v9 = CurrentThreadId;
      v19 = (int *)&v9;
      v20 = 4;
      TlgWrite(v7, &unk_1800C8D2B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
