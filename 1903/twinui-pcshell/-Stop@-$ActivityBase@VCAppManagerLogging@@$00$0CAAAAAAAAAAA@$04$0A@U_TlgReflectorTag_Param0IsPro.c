/*
 * XREFs of ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065238
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180012AF0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     _lambda_b5963e117fe1767c779e8f4655192291_::operator() @ 0x18002BF14 (_lambda_b5963e117fe1767c779e8f4655192291_--operator().c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18011CF90 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180138674 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801049D0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v5; // di
  __int64 v6; // rax
  int v7; // edi
  int v8; // edi
  const struct wil::FailureInfo *v9; // rdx
  const struct _TlgProvider_t *Ptr; // rdi
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-69h] BYREF
  PSRWLOCK v13; // [rsp+40h] [rbp-61h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-59h] BYREF
  int v15; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v16; // [rsp+50h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v18; // [rsp+78h] [rbp-29h]
  int v19; // [rsp+80h] [rbp-21h]
  int v20; // [rsp+84h] [rbp-1Dh]
  int *v21; // [rsp+88h] [rbp-19h]
  int v22; // [rsp+90h] [rbp-11h]
  int v23; // [rsp+94h] [rbp-Dh]
  PSRWLOCK *v24; // [rsp+98h] [rbp-9h]
  int v25; // [rsp+A0h] [rbp-1h]
  int v26; // [rsp+A4h] [rbp+3h]

  LODWORD(v13) = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v2 )
  {
    v3 = v2 + 31;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &v13;
    v5 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v5 = 2;
    v3 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v5 & 1) != 0 && v13 )
    ReleaseSRWLockExclusive(v13);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_DWORD *)(v6 + 72);
  if ( v7 < 1 )
  {
    memset_0(&pData, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)&pData, v9);
  }
  if ( *(int *)(v6 + 76) >= 0 )
    *(_DWORD *)(v6 + 76) = 0;
  v8 = v7 - 1;
  *(_DWORD *)(v6 + 72) = v8;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v8 )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)&qword_180599AE8;
      qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
      qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x200000000000uLL) )
    {
      v20 = 0;
      v15 = 0;
      v23 = 0;
      v18 = &v16;
      v21 = &v15;
      v16 = 0x1000000LL;
      v19 = 8;
      v22 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v26 = 0;
      LODWORD(v13) = CurrentThreadId;
      v24 = &v13;
      v25 = 4;
      TlgWrite(Ptr, &unk_1804B7455, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
