/*
 * XREFs of ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180027E44
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180027844 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18002E130 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18002E554 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18002E8C0 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180039610 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800AE74C (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180027D9C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180027EEC (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180027F70 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180027FE8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        unsigned int a2)
{
  char v4; // al
  PSRWLOCK v5; // rcx
  char v6; // di
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v9; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  DWORD *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v4 = wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         a2,
         &v9);
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
      v14 = 0;
      LODWORD(SRWLock) = a2;
      v13 = 4;
      p_SRWLock = &SRWLock;
      CurrentThreadId = GetCurrentThreadId();
      v17 = 0;
      v9 = CurrentThreadId;
      v15 = &v9;
      v16 = 4;
      TlgWrite(v7, &unk_1800C2A73, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
