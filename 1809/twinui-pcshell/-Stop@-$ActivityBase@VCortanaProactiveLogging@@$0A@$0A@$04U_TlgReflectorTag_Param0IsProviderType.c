/*
 * XREFs of ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180063EC8
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800236DC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800259FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180189B70 (-OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800E2270 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v4; // di
  __int64 v5; // rax
  int v6; // edi
  int v7; // edi
  const struct wil::FailureInfo *v8; // rdx
  const struct _TlgProvider_t *Ptr; // rdi
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK v12; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v15[144]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  int *v17; // [rsp+108h] [rbp+0h]
  int v18; // [rsp+110h] [rbp+8h]
  int v19; // [rsp+114h] [rbp+Ch]
  PSRWLOCK *v20; // [rsp+118h] [rbp+10h]
  int v21; // [rsp+120h] [rbp+18h]
  int v22; // [rsp+124h] [rbp+1Ch]

  LODWORD(v12) = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v2 )
  {
    v2 += 31;
    AcquireSRWLockExclusive(v2);
    p_SRWLock = &v12;
    v12 = v2;
    v4 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  *p_SRWLock = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 && v12 )
    ReleaseSRWLockExclusive(v12);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_DWORD *)(v5 + 72);
  if ( v6 < 1 )
  {
    memset_0(v15, 0, sizeof(v15));
    wil::details::WilFailFast((wil::details *)v15, v8);
  }
  if ( *(int *)(v5 + 76) >= 0 )
    *(_DWORD *)(v5 + 76) = 0;
  v7 = v6 - 1;
  *(_DWORD *)(v5 + 72) = v7;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v7 )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_18050F960;
      qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u )
    {
      v14 = 0;
      v19 = 0;
      v17 = &v14;
      v18 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v22 = 0;
      LODWORD(v12) = CurrentThreadId;
      v20 = &v12;
      v21 = 4;
      TlgWrite(Ptr, &unk_180447A4F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
