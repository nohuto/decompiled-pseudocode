/*
 * XREFs of ?Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGestureEndState@3@@Z @ 0x180390860
 * Callers:
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18038E510 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18038F1D0 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180148140 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::Stop(__int64 a1, WINBOOL a2)
{
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rsi
  TraceLoggingHProvider v7; // r10
  const struct _TlgProvider_t *v8; // rdi
  WINBOOL v9; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  WINBOOL *v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+128h] [rbp+20h] BYREF
  WINBOOL *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v36; // [rsp+158h] [rbp+50h]
  __int64 v37; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+178h] [rbp+70h] BYREF
  WINBOOL *v40; // [rsp+188h] [rbp+80h]
  __int64 v41; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+1A8h] [rbp+A0h] BYREF
  WINBOOL *v44; // [rsp+1B8h] [rbp+B0h]
  __int64 v45; // [rsp+1C0h] [rbp+B8h]

  v15[1] = -2LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD *)(v4 + 76);
  if ( v5 < 0 && v5 == *(_DWORD *)(v4 + 84) )
    v6 = v4 + 80;
  else
    v6 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v14 = *(_DWORD *)(v6 + 4);
      v24 = &v14;
      v25 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v6 + 48));
      v27 = v6 + 56;
      v28 = 4LL;
      TlgCreateSz(&v29, *(LPCSTR *)(v6 + 120));
      LODWORD(v15[0]) = *(_DWORD *)v6;
      v30 = v15;
      v31 = 4LL;
      TlgCreateWsz(&v32, *(LPCWSTR *)(v6 + 16));
      v9 = *(_DWORD *)(v6 + 24);
      v33 = &v9;
      v34 = 4LL;
      TlgCreateSz(&v35, *(LPCSTR *)(v6 + 64));
      CurrentThreadId = *(_DWORD *)(v6 + 72);
      v36 = &CurrentThreadId;
      v37 = 4LL;
      TlgCreateSz(&v38, *(LPCSTR *)(v6 + 80));
      TlgCreateWsz(&v39, *(LPCWSTR *)(v6 + 88));
      v11[0] = *(_DWORD *)(v6 + 96);
      v40 = v11;
      v41 = 4LL;
      TlgCreateSz(&v42, *(LPCSTR *)(v6 + 104));
      TlgCreateWsz(&v43, *(LPCWSTR *)(v6 + 112));
      v11[1] = a2;
      v44 = &v11[1];
      v45 = 4LL;
      TlgWrite(v7, &unk_180468F7A, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v11[1], &Context) && v11[1] )
    {
      Context = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v11[0] = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v17 = v11;
      v18 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v20 = 4LL;
      v9 = a2;
      v21 = &v9;
      v22 = 4LL;
      TlgWrite(v8, &unk_1804690E1, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &v16);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
