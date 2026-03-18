/*
 * XREFs of ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x18023A8F8
 * Callers:
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18023AE50 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022D9B8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18022DA04 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022DA20 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022DA4C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetPointerResult(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const struct TargetingInfo *a5)
{
  const struct TargetingInfo *v5; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rsi
  int v11; // ecx
  int v12; // ecx
  const CHAR *v13; // rdx
  __int64 v14; // rax
  const CHAR *v15; // rax
  const CHAR *v16; // rax
  int v17; // eax
  const struct CInteraction *v18; // rcx
  unsigned __int8 v19; // al
  bool v20; // al
  int v21; // eax
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v25; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  void *v31; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  int *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+118h] [rbp+10h] BYREF
  int *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  void **v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  int *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  int *v54; // [rsp+158h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+58h]
  BOOL *v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  __int64 *v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  int v60; // [rsp+1E8h] [rbp+E0h] BYREF
  int v61; // [rsp+1F0h] [rbp+E8h] BYREF

  v61 = a4;
  v60 = a3;
  v5 = a5;
  v8 = *((_QWORD *)a5 + 1);
  v9 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 4u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x800uLL) )
  {
    v11 = *(_DWORD *)v5;
    v33 = &v27;
    v35 = &v28;
    v37 = &v60;
    v39 = &v61;
    v27 = a1;
    v34 = 8LL;
    v28 = a2;
    v36 = 8LL;
    v38 = 4LL;
    v40 = 4LL;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v13 = "Release";
        else
          v13 = "UNKNOWN";
      }
      else
      {
        v13 = "Drop";
        if ( *((_QWORD *)v5 + 1) )
          v13 = "Send";
      }
    }
    else
    {
      v13 = "Buffer";
    }
    TlgCreateSz(&pDesc, v13);
    v29 = v8;
    v42 = &v29;
    v14 = v8 + 8;
    v43 = 8LL;
    if ( !v8 )
      v14 = 0LL;
    v30 = v14;
    v45 = 8LL;
    v44 = &v30;
    v15 = InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)v8);
    TlgCreateSz(&v46, v15);
    v16 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v8);
    TlgCreateSz(&v47, v16);
    if ( v8 )
      v17 = *(_DWORD *)(v8 + 1696);
    else
      v17 = 0;
    v22 = v17;
    v49 = 4LL;
    v48 = &v22;
    v31 = InputTraceLogging::InteractionInputSink((const struct CInteraction *)v8);
    v50 = &v31;
    v51 = 8LL;
    v23 = InputTraceLogging::InteractionProcessId(v18);
    v52 = &v23;
    v53 = 4LL;
    if ( v8 )
      v19 = *(_BYTE *)(v8 + 184) & 1;
    else
      v19 = 0;
    v24 = v19;
    v54 = &v24;
    v55 = 4LL;
    if ( v8 )
      v20 = (*(_BYTE *)(v8 + 184) & 4) != 0;
    else
      v20 = 0;
    v25 = v20;
    v56 = &v25;
    v21 = 0;
    v57 = 4LL;
    if ( v8 )
      LOBYTE(v21) = *(_QWORD *)(v8 + 272) != 0LL;
    LODWORD(v26) = v21;
    v58 = &v26;
    v59 = 4LL;
    TlgWrite(v10, &unk_1802E0118, 0LL, 0LL, 0x11u, &pData);
  }
}
