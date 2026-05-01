/*
 * XREFs of ?Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18023B108
 * Callers:
 *     ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18023BC10 (-TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableSh.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180159A3C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::Stop(
        __int64 a1,
        int a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  __int64 v7; // rcx
  LPVOID v8; // rax
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
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  int *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  DWORD *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+118h] [rbp+10h] BYREF
  int *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+138h] [rbp+30h] BYREF
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+158h] [rbp+50h] BYREF
  int *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+178h] [rbp+70h] BYREF
  int *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v60; // [rsp+1B8h] [rbp+B0h]
  __int64 v61; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v64; // [rsp+1E8h] [rbp+E0h]
  __int64 v65; // [rsp+1F0h] [rbp+E8h]
  DWORD *v66; // [rsp+1F8h] [rbp+F0h]
  __int64 v67; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+208h] [rbp+100h] BYREF
  int *v69; // [rsp+218h] [rbp+110h]
  __int64 v70; // [rsp+220h] [rbp+118h]

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  v8 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         v7,
         (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    if ( **((_DWORD **)v8 + 1) > 4u )
    {
      v9 = (const CHAR *)*((_QWORD *)v6 + 6);
      v40 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v41 = 8LL;
      v42 = &v29;
      v24 = v6[1];
      v44 = &v24;
      v29 = 0x1000000LL;
      v43 = 8LL;
      v45 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v6 + 15);
      v47 = v6 + 14;
      v48 = 4LL;
      TlgCreateSz(&v49, v10);
      v11 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v25 = *v6;
      v50 = &v25;
      v51 = 4LL;
      TlgCreateWsz(&v52, v11);
      v12 = (const CHAR *)*((_QWORD *)v6 + 8);
      v26 = v6[6];
      v53 = &v26;
      v54 = 4LL;
      TlgCreateSz(&v55, v12);
      v13 = (const CHAR *)*((_QWORD *)v6 + 10);
      v27 = v6[18];
      v56 = &v27;
      v57 = 4LL;
      TlgCreateSz(&v58, v13);
      TlgCreateWsz(&v59, *((LPCWSTR *)v6 + 11));
      v14 = (const CHAR *)*((_QWORD *)v6 + 13);
      v28 = v6[24];
      v60 = &v28;
      v61 = 4LL;
      TlgCreateSz(&v62, v14);
      TlgCreateWsz(&v63, *((LPCWSTR *)v6 + 14));
      v15 = v6[2];
      v16 = (const CHAR *)*((_QWORD *)v6 + 5);
      v64 = &v21;
      v22 = v6[15];
      v21 = v15;
      v66 = &v22;
      v65 = 4LL;
      v67 = 4LL;
      TlgCreateSz(&v68, v16);
      v23 = a2;
      v69 = &v23;
      v70 = 4LL;
      TlgWrite(v17, &unk_1804F1424, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x16u, &pData);
    }
  }
  else
  {
    v18 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
    if ( *(_DWORD *)v18 > 4u )
    {
      v32 = 8LL;
      v31 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v33 = &v23;
      v23 = v19;
      v34 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v36 = 4LL;
      v22 = CurrentThreadId;
      v21 = a2;
      v35 = &v22;
      v37 = &v21;
      v38 = 4LL;
      TlgWrite(v18, &unk_1804F1597, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 6u, &v30);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
