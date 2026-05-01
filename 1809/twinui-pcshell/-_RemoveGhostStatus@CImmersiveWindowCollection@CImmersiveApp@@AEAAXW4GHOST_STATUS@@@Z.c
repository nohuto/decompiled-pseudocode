/*
 * XREFs of ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800439C4
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x1800436D0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180043818 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18011C9EC (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x18011CEF0 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18011DF20 (-OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0004@@@Z @ 0x18011F210 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0004@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18011AFB0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180120538 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     WPP_SF_LSdL @ 0x1801228D8 (WPP_SF_LSdL.c)
 */

ULONG __fastcall CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(__int64 a1, int a2)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // r14
  ULONG result; // eax
  __int64 v8; // r10
  REGHANDLE v9; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp-69h] BYREF
  int v11; // [rsp+44h] [rbp-65h] BYREF
  int v12; // [rsp+48h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v16; // [rsp+80h] [rbp-29h]
  int v17; // [rsp+88h] [rbp-21h]
  int v18; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-9h]
  int v21; // [rsp+A8h] [rbp-1h]
  int v22; // [rsp+ACh] [rbp+3h]
  int *v23; // [rsp+B0h] [rbp+7h]
  int v24; // [rsp+B8h] [rbp+Fh]
  int v25; // [rsp+BCh] [rbp+13h]
  int *v26; // [rsp+C0h] [rbp+17h]
  int v27; // [rsp+C8h] [rbp+1Fh]
  int v28; // [rsp+CCh] [rbp+23h]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_LSdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      23,
      (_DWORD)WPP_GLOBAL_Control,
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 560LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 160) + 568LL),
      *(_DWORD *)(a1 + 212));
  v4 = *(_DWORD *)(a1 + 212);
  Context = 0LL;
  v5 = v4 & ~a2;
  *(_DWORD *)(a1 + 212) = v5;
  v6 = *(_QWORD *)(a1 + 160);
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F7D0;
    qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
  }
  result = (unsigned int)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(v6 + 560));
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v23 = &v11;
    v26 = &v12;
    v20 = v6 + 568;
    v21 = 4;
    v11 = v4;
    v24 = 4;
    v12 = v5;
    v27 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v8 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18044A054 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v9 = *(_QWORD *)(v8 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_18044A05F;
    UserData.Reserved = 2;
    v17 = 77;
    v18 = 1;
    result = EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v4) & 2) != 0 )
  {
    if ( (v5 & 2) != 0 )
      return CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(a1, 0LL, 2LL);
    else
      return CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(a1, 2LL);
  }
  return result;
}
