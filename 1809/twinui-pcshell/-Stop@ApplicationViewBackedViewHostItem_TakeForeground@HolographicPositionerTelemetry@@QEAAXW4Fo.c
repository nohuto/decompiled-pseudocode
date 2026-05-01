/*
 * XREFs of ?Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1801C3ABC
 * Callers:
 *     ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1801C44B0 (-TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableSh.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180112D88 (-zInternalStop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B8A68 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::Stop(
        __int64 a1,
        int a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const WCHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  int v15; // ecx
  const CHAR *v16; // rdx
  TraceLoggingHProvider v17; // r10
  const struct _TlgProvider_t *v18; // rsi
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v22; // [rsp+3Ch] [rbp-CCh] BYREF
  int v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+44h] [rbp-C4h] BYREF
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+58h] [rbp-B0h] BYREF
  int *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  DWORD *v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  int *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+F8h] [rbp-10h] BYREF
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+118h] [rbp+10h] BYREF
  int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+138h] [rbp+30h] BYREF
  int *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+168h] [rbp+60h] BYREF
  int *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+198h] [rbp+90h] BYREF
  int *v57; // [rsp+1A8h] [rbp+A0h]
  __int64 v58; // [rsp+1B0h] [rbp+A8h]
  DWORD *v59; // [rsp+1B8h] [rbp+B0h]
  __int64 v60; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v62; // [rsp+1D8h] [rbp+D0h]
  __int64 v63; // [rsp+1E0h] [rbp+D8h]

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  v8 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         v7,
         (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    if ( *(_DWORD *)v8[1] > 4u )
    {
      v9 = (const CHAR *)*((_QWORD *)v6 + 6);
      v24 = v6[1];
      v37 = &v24;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v6 + 15);
      v40 = v6 + 14;
      v41 = 4LL;
      TlgCreateSz(&v42, v10);
      v11 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v25 = *v6;
      v43 = &v25;
      v44 = 4LL;
      TlgCreateWsz(&v45, v11);
      v12 = (const CHAR *)*((_QWORD *)v6 + 8);
      v26 = v6[6];
      v46 = &v26;
      v47 = 4LL;
      TlgCreateSz(&v48, v12);
      v13 = (const CHAR *)*((_QWORD *)v6 + 10);
      v27 = v6[18];
      v49 = &v27;
      v50 = 4LL;
      TlgCreateSz(&v51, v13);
      TlgCreateWsz(&v52, *((LPCWSTR *)v6 + 11));
      v14 = (const CHAR *)*((_QWORD *)v6 + 13);
      v28 = v6[24];
      v53 = &v28;
      v54 = 4LL;
      TlgCreateSz(&v55, v14);
      TlgCreateWsz(&v56, *((LPCWSTR *)v6 + 14));
      v15 = v6[2];
      v16 = (const CHAR *)*((_QWORD *)v6 + 5);
      v57 = &v21;
      v22 = v6[15];
      v21 = v15;
      v59 = &v22;
      v58 = 4LL;
      v60 = 4LL;
      TlgCreateSz(&v61, v16);
      v23 = a2;
      v62 = &v23;
      v63 = 4LL;
      TlgWrite(v17, &unk_18045650C, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    v18 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v18 > 4u )
    {
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v30 = &v23;
      v23 = v19;
      v31 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 4LL;
      v22 = CurrentThreadId;
      v21 = a2;
      v32 = &v22;
      v34 = &v21;
      v35 = 4LL;
      TlgWrite(v18, &unk_18045665F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &v29);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
