/*
 * XREFs of ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1801ECAA8
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801ED050 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800E2D04 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA650 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x1801EA69C (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x1801EA708 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA730 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
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
  const CHAR *v14; // rax
  const CHAR *v15; // rax
  int v16; // eax
  const struct CInteraction *v17; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  void *v27; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+F0h] [rbp-10h] BYREF
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  void **v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  int *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+1B0h] [rbp+B0h] BYREF
  int v53; // [rsp+1B8h] [rbp+B8h] BYREF

  v53 = a4;
  v52 = a3;
  v5 = a5;
  v8 = *((_QWORD *)a5 + 1);
  v9 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 4u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x800uLL) )
  {
    v11 = *(_DWORD *)v5;
    v29 = &v24;
    v31 = &v25;
    v33 = &v52;
    v35 = &v53;
    v24 = a1;
    v30 = 8LL;
    v25 = a2;
    v32 = 8LL;
    v34 = 4LL;
    v36 = 4LL;
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
    v26 = v8;
    v38 = &v26;
    v39 = 8LL;
    v14 = InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)v8);
    TlgCreateSz(&v40, v14);
    v15 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v8);
    TlgCreateSz(&v41, v15);
    if ( v8 )
      v16 = *(_DWORD *)(v8 + 1696);
    else
      v16 = 0;
    v20 = v16;
    v43 = 4LL;
    v42 = &v20;
    v27 = InputTraceLogging::InteractionInputSink((const struct CInteraction *)v8);
    v44 = &v27;
    v45 = 8LL;
    v21 = InputTraceLogging::InteractionProcessId(v17);
    v46 = &v21;
    v47 = 4LL;
    if ( v8 )
      v18 = *(_BYTE *)(v8 + 184) & 1;
    else
      v18 = 0;
    v22 = v18;
    v48 = &v22;
    v19 = 0;
    v49 = 4LL;
    if ( v8 )
      LOBYTE(v19) = *(_QWORD *)(v8 + 272) != 0LL;
    v23 = v19;
    v50 = &v23;
    v51 = 4LL;
    TlgWrite(v10, &unk_1802B6FAB, 0LL, 0LL, 0xFu, &pData);
  }
}
