/*
 * XREFs of ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x18019C508
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019A50C (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180112D88 (-zInternalStop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x18019CF68 (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OfficeInstalled::Stop(
        PenWorkspaceBrokerTelemetry::OfficeInstalled *this,
        char a2)
{
  int *v2; // rdi
  int v4; // eax
  int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  int v11; // ecx
  const WCHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  DWORD v15; // ecx
  const CHAR *v16; // rdx
  int v17; // ecx
  const CHAR *v18; // rdx
  TraceLoggingHProvider v19; // r10
  const struct _TlgProvider_t *v20; // rdi
  int v21; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+50h] [rbp-B0h] BYREF
  int *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  DWORD *v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  char *v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+F0h] [rbp-10h] BYREF
  int *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF
  int *v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+130h] [rbp+30h] BYREF
  DWORD *v55; // [rsp+140h] [rbp+40h]
  int v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+160h] [rbp+60h] BYREF
  int *v60; // [rsp+170h] [rbp+70h]
  int v61; // [rsp+178h] [rbp+78h]
  int v62; // [rsp+17Ch] [rbp+7Ch]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+190h] [rbp+90h] BYREF
  char *v65; // [rsp+1A0h] [rbp+A0h]
  int v66; // [rsp+1A8h] [rbp+A8h]
  int v67; // [rsp+1ACh] [rbp+ACh]
  char v68; // [rsp+1E8h] [rbp+E8h] BYREF

  v68 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v7 = wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
         v6,
         lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_);
  if ( v5 )
  {
    if ( **(_DWORD **)(v7 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x200000000000uLL) )
    {
      v8 = v5[1];
      v9 = (const CHAR *)*((_QWORD *)v5 + 6);
      v41 = 0;
      v25 = v8;
      v39 = &v25;
      v40 = 4;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v5 + 15);
      v45 = 0;
      v43 = v5 + 14;
      v44 = 4;
      TlgCreateSz(&v46, v10);
      v11 = *v5;
      v12 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v49 = 0;
      v26 = v11;
      v47 = &v26;
      v48 = 4;
      TlgCreateWsz(&v50, v12);
      v13 = v5[6];
      v14 = (const CHAR *)*((_QWORD *)v5 + 8);
      v53 = 0;
      v27 = v13;
      v51 = &v27;
      v52 = 4;
      TlgCreateSz(&v54, v14);
      v15 = v5[18];
      v16 = (const CHAR *)*((_QWORD *)v5 + 10);
      v57 = 0;
      v23 = v15;
      v55 = &v23;
      v56 = 4;
      TlgCreateSz(&v58, v16);
      TlgCreateWsz(&v59, *((LPCWSTR *)v5 + 11));
      v17 = v5[24];
      v18 = (const CHAR *)*((_QWORD *)v5 + 13);
      v62 = 0;
      v24 = v17;
      v60 = &v24;
      v61 = 4;
      TlgCreateSz(&v63, v18);
      TlgCreateWsz(&v64, *((LPCWSTR *)v5 + 14));
      v67 = 0;
      v65 = &v68;
      v66 = 1;
      TlgWrite(v19, &unk_180454EA8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    v20 = *(const struct _TlgProvider_t **)(v7 + 8);
    if ( *(_DWORD *)v20 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x200000000000uLL) )
    {
      v21 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v31 = 0;
      v29 = &v24;
      v24 = v21;
      v30 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v34 = 0;
      v37 = 0;
      v23 = CurrentThreadId;
      v32 = &v23;
      v35 = &v68;
      v33 = 4;
      v36 = 1;
      TlgWrite(v20, &unk_180454E54, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((PenWorkspaceBrokerTelemetry::OfficeInstalled *)((char *)this + 8));
}
