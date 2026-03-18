/*
 * XREFs of ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023E9D8
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x18023CF50 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x18023D1F0 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18023D9A0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180016B38 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
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

void __fastcall InputTraceLogging::GestureTargeting::SetInteractionChain(__int64 a1, const struct CInteraction *a2)
{
  const struct CInteraction *v2; // rbx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  _QWORD *v5; // rax
  const struct _TlgProvider_t *v6; // rsi
  char *v7; // rax
  const CHAR *v8; // rax
  const CHAR *v9; // rax
  int v10; // eax
  void *v11; // rax
  const struct CInteraction *v12; // rcx
  int v13; // eax
  unsigned __int8 v14; // al
  bool v15; // al
  int v16; // eax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  const struct CInteraction *v22; // [rsp+48h] [rbp-B8h] BYREF
  char *v23; // [rsp+50h] [rbp-B0h] BYREF
  void *v24; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  const struct CInteraction **v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  char **v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-40h] BYREF
  int *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  void **v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  int *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  int *v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ch] [rbp+Ch]
  BOOL *v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+11Ch] [rbp+1Ch]
  int *v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+128h] [rbp+28h]
  int v54; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  int *v56; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+15Ch] [rbp+5Ch]
  int v59; // [rsp+190h] [rbp+90h] BYREF

  v59 = a1;
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
        v28 = 0;
        v31 = 0;
        v26 = &v59;
        v29 = &v22;
        v27 = 4;
        v22 = v2;
        v30 = 8;
        if ( v2 )
          v7 = (char *)v2 + 8;
        else
          v7 = 0LL;
        v34 = 0;
        v23 = v7;
        v32 = &v23;
        v33 = 8;
        v8 = InputTraceLogging::InteractionSourceTypeToString(v2);
        TlgCreateSz(&pDesc, v8);
        v9 = InputTraceLogging::InteractionDefaultToString(v2);
        TlgCreateSz(&v36, v9);
        if ( v2 )
          v10 = *((_DWORD *)v2 + 424);
        else
          v10 = 0;
        v39 = 0;
        v17 = v10;
        v37 = &v17;
        v38 = 4;
        v11 = InputTraceLogging::InteractionInputSink(v2);
        v42 = 0;
        v24 = v11;
        v40 = &v24;
        v41 = 8;
        v13 = InputTraceLogging::InteractionProcessId(v12);
        v45 = 0;
        v18 = v13;
        v43 = &v18;
        v44 = 4;
        if ( v2 )
          v14 = *((_BYTE *)v2 + 184) & 1;
        else
          v14 = 0;
        v48 = 0;
        v19 = v14;
        v46 = &v19;
        v47 = 4;
        if ( v2 )
          v15 = (*((_BYTE *)v2 + 184) & 4) != 0;
        else
          v15 = 0;
        v51 = 0;
        v20 = v15;
        v49 = &v20;
        v16 = 0;
        v50 = 4;
        if ( v2 )
          LOBYTE(v16) = *((_QWORD *)v2 + 34) != 0LL;
        v54 = 0;
        v21 = v16;
        v52 = &v21;
        v53 = 4;
        TlgWrite(v6, &unk_1802E0B40, 0LL, 0LL, 0xDu, &v25);
      }
      InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(v2);
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
        v58 = 0;
        v56 = &v59;
        v57 = 4;
        TlgWrite(v4, &unk_1802E0AFB, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
