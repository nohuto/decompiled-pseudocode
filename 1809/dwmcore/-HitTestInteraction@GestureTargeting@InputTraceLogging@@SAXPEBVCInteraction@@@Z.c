/*
 * XREFs of ?HitTestInteraction@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180017D10
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
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

void __fastcall InputTraceLogging::GestureTargeting::HitTestInteraction(const struct CInteraction *a1)
{
  const struct CInteraction *v1; // rbx
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rdi
  const CHAR *v4; // rax
  const CHAR *v5; // rax
  int v6; // eax
  void *v7; // rax
  const struct CInteraction *v8; // rcx
  unsigned int v9; // eax
  unsigned __int8 v10; // al
  int v11; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  const struct CInteraction *v16; // [rsp+40h] [rbp-C0h] BYREF
  void *v17; // [rsp+48h] [rbp-B8h] BYREF
  const struct CInteraction *v18; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  const struct CInteraction **v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+A0h] [rbp-60h] BYREF
  int *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  void **v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  unsigned int *v31; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+DCh] [rbp-24h]
  int *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  int *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  const struct CInteraction **v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]

  v1 = a1;
  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(v2 + 8), 0x800uLL) )
  {
    v22 = 0;
    v20 = &v16;
    v16 = v1;
    v21 = 8;
    v4 = InputTraceLogging::InteractionSourceTypeToString(v1);
    TlgCreateSz(&pDesc, v4);
    v5 = InputTraceLogging::InteractionDefaultToString(v1);
    TlgCreateSz(&v24, v5);
    if ( v1 )
      v6 = *((_DWORD *)v1 + 424);
    else
      v6 = 0;
    v27 = 0;
    v12 = v6;
    v25 = &v12;
    v26 = 4;
    v7 = InputTraceLogging::InteractionInputSink(v1);
    v30 = 0;
    v17 = v7;
    v28 = &v17;
    v29 = 8;
    v9 = InputTraceLogging::InteractionProcessId(v8);
    v33 = 0;
    v13 = v9;
    v31 = &v13;
    v32 = 4;
    if ( v1 )
      v10 = *((_BYTE *)v1 + 184) & 1;
    else
      v10 = 0;
    v36 = 0;
    v14 = v10;
    v34 = &v14;
    v11 = 0;
    v35 = 4;
    if ( v1 )
      LOBYTE(v11) = *((_QWORD *)v1 + 34) != 0LL;
    v39 = 0;
    v15 = v11;
    v37 = &v15;
    v38 = 4;
    if ( v1 )
      v1 = (const struct CInteraction *)((char *)v1 + 8);
    v42 = 0;
    v40 = &v18;
    v18 = v1;
    v41 = 8;
    TlgWrite(v3, &unk_1802B8748, 0LL, 0LL, 0xBu, &pData);
  }
}
