/*
 * XREFs of ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800A9EA0
 * Callers:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800A8FC0 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A8E80 (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A9F34 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C2A8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022C310 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C33C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180236F04 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180239B84 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180239EC0 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::InteractionUpdate(const struct CInteraction **a1)
{
  _QWORD *v2; // rax
  const struct _TlgProvider_t *v3; // rdi
  const CHAR *updated; // rax
  const struct CInteraction *v5; // rcx
  char *v6; // rax
  const CHAR *v7; // rax
  const CHAR *v8; // rax
  const struct CInteraction *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  const struct CInteraction *v14; // rcx
  unsigned __int8 v15; // al
  bool v16; // al
  int v17; // eax
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v21; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  const struct CInteraction *v23; // [rsp+50h] [rbp-B8h] BYREF
  char *v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  const struct CInteraction *v26; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  const struct CInteraction **v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B4h] [rbp-54h]
  char **v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+C0h] [rbp-48h]
  int v34; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D8h] [rbp-30h] BYREF
  int *v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+F0h] [rbp-18h]
  int v39; // [rsp+F4h] [rbp-14h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+104h] [rbp-4h]
  unsigned int *v43; // [rsp+108h] [rbp+0h]
  int v44; // [rsp+110h] [rbp+8h]
  int v45; // [rsp+114h] [rbp+Ch]
  int *v46; // [rsp+118h] [rbp+10h]
  int v47; // [rsp+120h] [rbp+18h]
  int v48; // [rsp+124h] [rbp+1Ch]
  BOOL *v49; // [rsp+128h] [rbp+20h]
  int v50; // [rsp+130h] [rbp+28h]
  int v51; // [rsp+134h] [rbp+2Ch]
  __int64 *v52; // [rsp+138h] [rbp+30h]
  int v53; // [rsp+140h] [rbp+38h]
  int v54; // [rsp+144h] [rbp+3Ch]
  const struct CInteraction **v55; // [rsp+148h] [rbp+40h]
  int v56; // [rsp+150h] [rbp+48h]
  int v57; // [rsp+154h] [rbp+4Ch]

  if ( *(int *)a1 >= 5 )
  {
    if ( *(int *)a1 <= 6 )
    {
      InputTraceLogging::GestureTargeting::UpdateCapture((const struct CManipulationManager::InteractionUpdate *)a1);
      return;
    }
    switch ( *(_DWORD *)a1 )
    {
      case 7:
        InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
        return;
      case 8:
        InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
        return;
      case 9:
        InputTraceLogging::GestureTargeting::RailsUpdate(a1);
        return;
    }
  }
  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = (const struct _TlgProvider_t *)v2[1];
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn((TraceLoggingHProvider)v2[1], 0x800uLL) )
  {
    updated = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*(unsigned int *)a1);
    TlgCreateSz(&pDesc, updated);
    v5 = a1[2];
    v31 = 0;
    v29 = &v23;
    v23 = v5;
    v30 = 8;
    if ( v5 )
      v6 = (char *)v5 + 8;
    else
      v6 = 0LL;
    v34 = 0;
    v24 = v6;
    v32 = &v24;
    v33 = 8;
    v7 = InputTraceLogging::InteractionSourceTypeToString(v5);
    TlgCreateSz(&v35, v7);
    v8 = InputTraceLogging::InteractionDefaultToString(a1[2]);
    TlgCreateSz(&v36, v8);
    v9 = a1[2];
    if ( v9 )
      v10 = *((_DWORD *)v9 + 424);
    else
      v10 = 0;
    v39 = 0;
    v18 = v10;
    v37 = &v18;
    v11 = 0LL;
    v38 = 4;
    if ( v9 )
    {
      v12 = *((_QWORD *)v9 + 12);
      if ( v12 )
        v11 = *(_QWORD *)(v12 + 64);
    }
    v42 = 0;
    v25 = v11;
    v40 = &v25;
    v41 = 8;
    v13 = InputTraceLogging::InteractionProcessId(v9);
    v14 = a1[2];
    v45 = 0;
    v19 = v13;
    v43 = &v19;
    v44 = 4;
    if ( v14 )
      v15 = *((_BYTE *)v14 + 184) & 1;
    else
      v15 = 0;
    v48 = 0;
    v20 = v15;
    v46 = &v20;
    v47 = 4;
    if ( v14 )
      v16 = (*((_BYTE *)v14 + 184) & 4) != 0;
    else
      v16 = 0;
    v51 = 0;
    v21 = v16;
    v49 = &v21;
    v17 = 0;
    v50 = 4;
    if ( v14 )
      LOBYTE(v17) = *((_QWORD *)v14 + 34) != 0LL;
    v54 = 0;
    v57 = 0;
    LODWORD(v22) = v17;
    v52 = &v22;
    v26 = a1[1];
    v55 = &v26;
    v53 = 4;
    v56 = 8;
    TlgWrite(v3, &unk_1802DDF54, 0LL, 0LL, 0xEu, &pData);
  }
}
