/*
 * XREFs of ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003BA00
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800E2270 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v7; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v9; // bl
  RTL_SRWLOCK *v10; // rsi
  __int64 v11; // rbx
  const struct _TlgProvider_t *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  signed __int64 *v16; // rsi
  signed __int64 v17; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v19; // rax
  signed __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // rax
  const struct wil::FailureInfo *v23; // rdx
  BOOL v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v27; // [rsp+44h] [rbp-BCh] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v31; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp-98h] BYREF
  PSRWLOCK v34[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[144]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  BOOL *v42; // [rsp+160h] [rbp+60h]
  __int64 v43; // [rsp+168h] [rbp+68h]

  v34[1] = (PSRWLOCK)-2LL;
  v24 = 0;
  v25 = 0LL;
  (**a2)(a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v25);
  pv = 0LL;
  (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v25 + 32LL))(v25, &pv);
  v7 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v7 )
  {
    v10 = v7 + 31;
    AcquireSRWLockExclusive(v10);
    v34[0] = v10;
    p_SRWLock = v34;
    v9 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v9 = 2;
    v10 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v9 & 1) != 0 && v34[0] )
    ReleaseSRWLockExclusive(v34[0]);
  v11 = *(_QWORD *)(a1 + 48);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F870;
    qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v11 + 8));
  else
    *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)v11 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v31 = 0LL;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v27, &v31) && v27 )
  {
    v31 = qword_18050F870;
    qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
  }
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)v31 + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v38 = 4LL;
    TlgCreateWsz(&pDesc, (LPCWSTR)pv);
    v29 = a3;
    v40 = &v29;
    v41 = 4LL;
    v24 = a4 != 0;
    v42 = &v24;
    v43 = 4LL;
    v22 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v12, &unk_18044B689, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v22, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v13 = a1 + 8;
    if ( *(_DWORD *)(v13 + 24) )
    {
      memset_0(v35, 0, sizeof(v35));
      wil::details::WilFailFast((wil::details *)v35, v23);
    }
    v14 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_35;
    v15 = GetCurrentThreadId();
    v16 = (signed __int64 *)(v14 + 8 * (v15 % 0xA));
    v17 = *v16;
    if ( *v16 )
    {
      while ( *(_DWORD *)(v17 + 8) != (_DWORD)v15 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_25;
      }
      goto LABEL_28;
    }
LABEL_25:
    ProcessHeap = GetProcessHeap();
    v19 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v17 = (signed __int64)v19;
    if ( v19 )
    {
      *(_QWORD *)v19 = 0LL;
      v19[2] = v15;
      *((_QWORD *)v19 + 2) = 0LL;
      _m_prefetchw(v16);
      do
      {
        v20 = *v16;
        *(_QWORD *)(v17 + 16) = *v16;
      }
      while ( v20 != _InterlockedCompareExchange64(v16, v17, v20) );
    }
    else
    {
LABEL_35:
      v17 = 0LL;
    }
LABEL_28:
    *(_QWORD *)v13 = v17;
    if ( v17 )
    {
      *(_QWORD *)(v13 + 16) = *(_QWORD *)v17;
      *(_QWORD *)v17 = v13;
      *(_DWORD *)(v13 + 24) = GetCurrentThreadId();
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
}
