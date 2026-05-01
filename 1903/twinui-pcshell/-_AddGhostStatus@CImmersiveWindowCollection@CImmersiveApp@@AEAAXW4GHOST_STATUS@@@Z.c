/*
 * XREFs of ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800325E0
 * Callers:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@W4GHOST_STATUS@@@Z @ 0x1800159A8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180030BB0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800328C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0004@@@Z @ 0x180142230 (-AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0004@@@Z.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180145840 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x1801430F0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180149B88 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     WPP_SF_LSdL @ 0x18014C048 (WPP_SF_LSdL.c)
 */

ULONG __fastcall CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // esi
  __int64 v6; // r14
  ULONG result; // eax
  __int64 v8; // r10
  REGHANDLE v9; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp-69h] BYREF
  int v11; // [rsp+44h] [rbp-65h] BYREF
  int v12; // [rsp+48h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-51h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v17; // [rsp+80h] [rbp-29h]
  int v18; // [rsp+88h] [rbp-21h]
  int v19; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  int v23; // [rsp+ACh] [rbp+3h]
  int *v24; // [rsp+B0h] [rbp+7h]
  int v25; // [rsp+B8h] [rbp+Fh]
  int v26; // [rsp+BCh] [rbp+13h]
  int *v27; // [rsp+C0h] [rbp+17h]
  int v28; // [rsp+C8h] [rbp+1Fh]
  int v29; // [rsp+CCh] [rbp+23h]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_LSdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      22,
      (_DWORD)WPP_GLOBAL_Control,
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 592LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 160) + 600LL),
      *(_DWORD *)(a1 + 212));
  v4 = *(_DWORD *)(a1 + 212);
  Context = 0LL;
  v5 = a2 | v4;
  *(_DWORD *)(a1 + 212) = a2 | v4;
  v6 = *(_QWORD *)(a1 + 160);
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180599AE8;
    qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
    qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
  }
  result = (unsigned int)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(v6 + 592));
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v24 = &v11;
    v27 = &v12;
    v21 = v6 + 600;
    v22 = 4;
    v11 = v4;
    v25 = 4;
    v12 = v5;
    v28 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v8 + 8);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_1804B9B4F;
    UserData.Reserved = 2;
    v9 = *(_QWORD *)(v8 + 32);
    v18 = 77;
    v19 = 1;
    v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
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
