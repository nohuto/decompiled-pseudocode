/*
 * XREFs of ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005A600
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x1800539C0 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
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

void __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
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
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK v13; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v16[144]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  int *v18; // [rsp+108h] [rbp+0h]
  int v19; // [rsp+110h] [rbp+8h]
  int v20; // [rsp+114h] [rbp+Ch]
  PSRWLOCK *v21; // [rsp+118h] [rbp+10h]
  int v22; // [rsp+120h] [rbp+18h]
  int v23; // [rsp+124h] [rbp+1Ch]

  LODWORD(v13) = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v2 )
  {
    v3 = v2 + 31;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &v13;
    v13 = v3;
    v5 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v3 = 0LL;
    v5 = 2;
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
    memset_0(v16, 0, sizeof(v16));
    wil::details::WilFailFast((wil::details *)v16, v9);
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
    if ( InitOnceBeginInitialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_18050F870;
      qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u )
    {
      v15 = 0;
      v20 = 0;
      v18 = &v15;
      v19 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v23 = 0;
      LODWORD(v13) = CurrentThreadId;
      v21 = &v13;
      v22 = 4;
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
