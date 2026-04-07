/*
 * XREFs of ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180080F50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180027FE8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002AD60 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180073E78 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180073EB0 (_TlgCreateWsz.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180083DE4 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::StopActivity(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r10
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
  DWORD v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+58h] [rbp-B0h] BYREF
  int *v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+80h] [rbp-88h]
  int v31; // [rsp+84h] [rbp-84h]
  DWORD *v32; // [rsp+88h] [rbp-80h]
  int v33; // [rsp+90h] [rbp-78h]
  int v34; // [rsp+94h] [rbp-74h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  int *v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  int *v40; // [rsp+D8h] [rbp-30h]
  int v41; // [rsp+E0h] [rbp-28h]
  int v42; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+E8h] [rbp-20h] BYREF
  int *v44; // [rsp+F8h] [rbp-10h]
  int v45; // [rsp+100h] [rbp-8h]
  int v46; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+108h] [rbp+0h] BYREF
  int *v48; // [rsp+118h] [rbp+10h]
  int v49; // [rsp+120h] [rbp+18h]
  int v50; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+128h] [rbp+20h] BYREF
  DWORD *v52; // [rsp+138h] [rbp+30h]
  int v53; // [rsp+140h] [rbp+38h]
  int v54; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+158h] [rbp+50h] BYREF
  int *v57; // [rsp+168h] [rbp+60h]
  int v58; // [rsp+170h] [rbp+68h]
  int v59; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+188h] [rbp+80h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v6 = wil::details::static_lazy<WindowFrameLogging>::get(
         v5,
         (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    v7 = v6[1];
    if ( *(_DWORD *)v7 > 5u
      && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = v4[1];
      v9 = (const CHAR *)*((_QWORD *)v4 + 6);
      v38 = 0;
      v25 = v8;
      v36 = &v25;
      v37 = 4;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 15);
      v42 = 0;
      v40 = v4 + 14;
      v41 = 4;
      TlgCreateSz(&v43, v10);
      v11 = *v4;
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v46 = 0;
      v26 = v11;
      v44 = &v26;
      v45 = 4;
      TlgCreateWsz(&v47, v12);
      v13 = v4[6];
      v14 = (const CHAR *)*((_QWORD *)v4 + 8);
      v50 = 0;
      v27 = v13;
      v48 = &v27;
      v49 = 4;
      TlgCreateSz(&v51, v14);
      v15 = v4[18];
      v16 = (const CHAR *)*((_QWORD *)v4 + 10);
      v54 = 0;
      v23 = v15;
      v52 = &v23;
      v53 = 4;
      TlgCreateSz(&v55, v16);
      TlgCreateWsz(&v56, *((LPCWSTR *)v4 + 11));
      v17 = v4[24];
      v18 = (const CHAR *)*((_QWORD *)v4 + 13);
      v59 = 0;
      v24 = v17;
      v57 = &v24;
      v58 = 4;
      TlgCreateSz(&v60, v18);
      TlgCreateWsz(&v61, *((LPCWSTR *)v4 + 14));
      TlgWrite(v19, &unk_1800C21AF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    v20 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v20 > 5u
      && (*((_QWORD *)v20 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v20 + 3) & 0x200000000000LL) == *((_QWORD *)v20 + 3) )
    {
      v21 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v31 = 0;
      v29 = &v24;
      v24 = v21;
      v30 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v34 = 0;
      v23 = CurrentThreadId;
      v33 = 4;
      v32 = &v23;
      TlgWrite(v20, &unk_1800C22BA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::StartDisplayCapture *)((char *)this + 8));
}
