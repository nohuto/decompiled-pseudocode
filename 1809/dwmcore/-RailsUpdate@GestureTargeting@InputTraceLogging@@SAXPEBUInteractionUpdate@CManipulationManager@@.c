/*
 * XREFs of ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180073914
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800E2D04 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA650 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x1801EA708 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA730 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801EA864 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::RailsUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  _QWORD *v2; // rax
  const struct _TlgProvider_t *v3; // rdi
  const CHAR *updated; // rax
  const struct CInteraction *v5; // rcx
  const CHAR *v6; // rax
  const CHAR *v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  int v16; // eax
  int v17; // ecx
  bool v18; // al
  const CHAR *v19; // rdx
  bool v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  const struct CInteraction *v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  const struct CInteraction **v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  __int64 *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  unsigned int *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  int *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  int *v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ch] [rbp+Ch]
  bool *v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+120h] [rbp+20h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = (const struct _TlgProvider_t *)v2[1];
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn((TraceLoggingHProvider)v2[1], 0x800uLL) )
  {
    updated = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*(unsigned int *)a1);
    TlgCreateSz(&pDesc, updated);
    v5 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v31 = 0;
    v29 = &v25;
    v25 = v5;
    v30 = 8;
    v6 = InputTraceLogging::InteractionSourceTypeToString(v5);
    TlgCreateSz(&v32, v6);
    v7 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
    TlgCreateSz(&v33, v7);
    v9 = *((_QWORD *)a1 + 2);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1696);
    else
      v10 = 0;
    v36 = 0;
    v21 = v10;
    v34 = &v21;
    v11 = 0LL;
    v35 = 4;
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 96);
      if ( v12 )
        v11 = *(_QWORD *)(v12 + 64);
    }
    v39 = 0;
    v26 = v11;
    v37 = &v26;
    v38 = v8;
    v13 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v9);
    v14 = *((_QWORD *)a1 + 2);
    v42 = 0;
    v22 = v13;
    v40 = &v22;
    v41 = 4;
    if ( v14 )
      v15 = *(_BYTE *)(v14 + 184) & 1;
    else
      v15 = 0;
    v45 = 0;
    v23 = v15;
    v43 = &v23;
    v16 = 0;
    v44 = 4;
    if ( v14 )
      LOBYTE(v16) = *(_QWORD *)(v14 + 272) != 0LL;
    v48 = 0;
    v51 = 0;
    v17 = *((_DWORD *)a1 + 11);
    v24 = v16;
    v46 = &v24;
    v18 = (*((_BYTE *)a1 + 64) & 2) != 0;
    v47 = 4;
    v20 = v18;
    v49 = &v20;
    v50 = 1;
    if ( v17 )
    {
      if ( v17 == 1 )
        v19 = "Y";
      else
        v19 = "UNKNOWN";
    }
    else
    {
      v19 = "X";
    }
    TlgCreateSz(&v52, v19);
    TlgWrite(v3, &unk_1802B6D10, 0LL, 0LL, 0xDu, &pData);
  }
}
