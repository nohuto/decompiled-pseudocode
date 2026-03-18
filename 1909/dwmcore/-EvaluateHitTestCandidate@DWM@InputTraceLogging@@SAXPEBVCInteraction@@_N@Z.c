/*
 * XREFs of ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18022C024
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800A940C (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x1800154E4 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C2A8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18022C2F4 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022C310 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C33C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 */

void __fastcall InputTraceLogging::DWM::EvaluateHitTestCandidate(const struct CInteraction *a1, unsigned __int8 a2)
{
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // rdi
  char *v6; // rax
  const CHAR *v7; // rax
  const CHAR *v8; // rax
  int v9; // eax
  void *v10; // rax
  int v11; // r9d
  const struct CInteraction *v12; // rcx
  unsigned int v13; // eax
  unsigned __int8 v14; // al
  bool v15; // al
  int v16; // eax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  BOOL v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  const struct CInteraction *v23; // [rsp+48h] [rbp-B8h] BYREF
  char *v24; // [rsp+50h] [rbp-B0h] BYREF
  void *v25; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
  const struct CInteraction **v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  char **v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp-40h] BYREF
  int *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  void **v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  unsigned int *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  int *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]
  BOOL *v50; // [rsp+110h] [rbp+10h]
  int v51; // [rsp+118h] [rbp+18h]
  int v52; // [rsp+11Ch] [rbp+1Ch]
  int *v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+128h] [rbp+28h]
  int v55; // [rsp+12Ch] [rbp+2Ch]

  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v5 = (const struct _TlgProvider_t *)v4[1];
  if ( *(_DWORD *)v5 > 4u && TlgKeywordOn((TraceLoggingHProvider)v4[1], 2uLL) )
  {
    v29 = 0;
    v32 = 0;
    v17 = a2;
    v27 = &v17;
    v30 = &v23;
    v28 = 4;
    v23 = a1;
    v31 = 8;
    if ( a1 )
      v6 = (char *)a1 + 8;
    else
      v6 = 0LL;
    v35 = 0;
    v24 = v6;
    v33 = &v24;
    v34 = 8;
    v7 = InputTraceLogging::InteractionSourceTypeToString(a1);
    TlgCreateSz(&pDesc, v7);
    v8 = InputTraceLogging::InteractionDefaultToString(a1);
    TlgCreateSz(&v37, v8);
    if ( a1 )
      v9 = *((_DWORD *)a1 + 424);
    else
      v9 = 0;
    v40 = 0;
    v18 = v9;
    v38 = &v18;
    v39 = 4;
    v10 = InputTraceLogging::InteractionInputSink(a1);
    v43 = 0;
    v25 = v10;
    v41 = &v25;
    v42 = v11;
    v13 = InputTraceLogging::InteractionProcessId(v12);
    v46 = 0;
    v19 = v13;
    v44 = &v19;
    v45 = 4;
    if ( a1 )
      v14 = *((_BYTE *)a1 + 184) & 1;
    else
      v14 = 0;
    v49 = 0;
    v20 = v14;
    v47 = &v20;
    v48 = 4;
    if ( a1 )
      v15 = (*((_BYTE *)a1 + 184) & 4) != 0;
    else
      v15 = 0;
    v52 = 0;
    v21 = v15;
    v50 = &v21;
    v16 = 0;
    v51 = 4;
    if ( a1 )
      LOBYTE(v16) = *((_QWORD *)a1 + 34) != 0LL;
    v55 = 0;
    v22 = v16;
    v53 = &v22;
    v54 = 4;
    TlgWrite(v5, &unk_1802DBC39, 0LL, 0LL, 0xDu, &pData);
  }
  InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(a1);
}
