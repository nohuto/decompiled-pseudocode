/*
 * XREFs of ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801F90E8
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801F7678 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1801F7910 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801F80D0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
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

void __fastcall InputTraceLogging::GestureTargeting::SetInteractionChain(__int64 a1, const struct CInteraction *a2)
{
  const struct CInteraction *v2; // rbx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  _QWORD *v5; // rax
  const struct _TlgProvider_t *v6; // rsi
  const CHAR *v7; // rax
  const CHAR *v8; // rax
  int v9; // eax
  void *v10; // rax
  const struct CInteraction *v11; // rcx
  int v12; // eax
  unsigned __int8 v13; // al
  int v14; // eax
  char *v15; // rax
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  const struct CInteraction *v20; // [rsp+40h] [rbp-C0h] BYREF
  void *v21; // [rsp+48h] [rbp-B8h] BYREF
  char *v22; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-A0h] BYREF
  int *v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  const struct CInteraction **v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+B0h] [rbp-50h] BYREF
  int *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  void **v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  int *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  int *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  int *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  char **v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  int v49; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *v51; // [rsp+140h] [rbp+40h]
  int v52; // [rsp+148h] [rbp+48h]
  int v53; // [rsp+14Ch] [rbp+4Ch]
  int v54; // [rsp+180h] [rbp+80h] BYREF

  v54 = a1;
  v2 = a2;
  if ( a2 )
  {
    do
    {
      v5 = wil::details::static_lazy<InputTraceLogging>::get(
             a1,
             (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      v6 = (const struct _TlgProvider_t *)v5[1];
      if ( *(_DWORD *)v6 > 4u && TlgKeywordOn((TraceLoggingHProvider)v5[1], 0x800uLL) )
      {
        v26 = 0;
        v29 = 0;
        v24 = &v54;
        v27 = &v20;
        v25 = 4;
        v20 = v2;
        v28 = 8;
        v7 = InputTraceLogging::InteractionSourceTypeToString(v2);
        TlgCreateSz(&pDesc, v7);
        v8 = InputTraceLogging::InteractionDefaultToString(v2);
        TlgCreateSz(&v31, v8);
        if ( v2 )
          v9 = *((_DWORD *)v2 + 424);
        else
          v9 = 0;
        v34 = 0;
        v16 = v9;
        v32 = &v16;
        v33 = 4;
        v10 = InputTraceLogging::InteractionInputSink(v2);
        v37 = 0;
        v21 = v10;
        v35 = &v21;
        v36 = 8;
        v12 = InputTraceLogging::InteractionProcessId(v11);
        v40 = 0;
        v17 = v12;
        v38 = &v17;
        v39 = 4;
        if ( v2 )
          v13 = *((_BYTE *)v2 + 184) & 1;
        else
          v13 = 0;
        v43 = 0;
        v18 = v13;
        v41 = &v18;
        v14 = 0;
        v42 = 4;
        if ( v2 )
          LOBYTE(v14) = *((_QWORD *)v2 + 34) != 0LL;
        v46 = 0;
        v19 = v14;
        v44 = &v19;
        v45 = 4;
        if ( v2 )
          v15 = (char *)v2 + 8;
        else
          v15 = 0LL;
        v49 = 0;
        v22 = v15;
        v47 = &v22;
        v48 = 8;
        TlgWrite(v6, &unk_1802B8D74, 0LL, 0LL, 0xCu, &v23);
      }
      v2 = (const struct CInteraction *)*((_QWORD *)v2 + 26);
    }
    while ( v2 );
  }
  else
  {
    v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                          a1,
                                          (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v3 > 4u )
    {
      if ( TlgKeywordOn(v3, 0x800uLL) )
      {
        v53 = 0;
        v51 = &v54;
        v52 = 4;
        TlgWrite(v4, &unk_1802B8D2F, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
