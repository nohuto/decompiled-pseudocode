/*
 * XREFs of ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801ED488
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800E2D04 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1801EA628 (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA650 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x1801EA708 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA730 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801EA864 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  _QWORD *v2; // rax
  const struct _TlgProvider_t *v3; // rdi
  const char *updated; // rax
  const struct CInteraction *v5; // rcx
  const CHAR *v6; // rax
  const CHAR *v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  int v16; // eax
  int v17; // ecx
  const char *v18; // rax
  char v19; // cl
  int v20; // ecx
  int v21; // ecx
  const CHAR *v22; // rdx
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  const struct CInteraction *v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  const struct CInteraction **v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+B0h] [rbp-50h] BYREF
  int *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  __int64 *v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  int *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  int *v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  int *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+110h] [rbp+10h] BYREF
  char *v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+128h] [rbp+28h]
  int v55; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+130h] [rbp+30h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = (const struct _TlgProvider_t *)v2[1];
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn((TraceLoggingHProvider)v2[1], 0x800uLL) )
  {
    updated = InputTraceLogging::MidManipulationUpdateTypeToString(*(_DWORD *)a1);
    TlgCreateSz(&pDesc, updated);
    v5 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v34 = 0;
    v32 = &v28;
    v28 = v5;
    v33 = 8;
    v6 = InputTraceLogging::InteractionSourceTypeToString(v5);
    TlgCreateSz(&v35, v6);
    v7 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
    TlgCreateSz(&v36, v7);
    v9 = *((_QWORD *)a1 + 2);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1696);
    else
      v10 = 0;
    v39 = 0;
    v24 = v10;
    v37 = &v24;
    v11 = 0LL;
    v38 = 4;
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 96);
      if ( v12 )
        v11 = *(_QWORD *)(v12 + 64);
    }
    v42 = 0;
    v29 = v11;
    v40 = &v29;
    v41 = v8;
    v13 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v9);
    v14 = *((_QWORD *)a1 + 2);
    v45 = 0;
    v25 = v13;
    v43 = &v25;
    v44 = 4;
    if ( v14 )
      v15 = *(_BYTE *)(v14 + 184) & 1;
    else
      v15 = 0;
    v48 = 0;
    v26 = v15;
    v46 = &v26;
    v16 = 0;
    v47 = 4;
    if ( v14 )
      LOBYTE(v16) = *(_QWORD *)(v14 + 272) != 0LL;
    v51 = 0;
    v17 = *((_DWORD *)a1 + 10);
    v27 = v16;
    v49 = &v27;
    v50 = 4;
    v18 = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v17);
    TlgCreateSz(&v52, v18);
    v19 = *((_BYTE *)a1 + 64);
    v55 = 0;
    v23 = v19 & 1;
    v20 = *((_DWORD *)a1 + 11);
    v53 = &v23;
    v54 = 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
          v22 = "Scale";
        else
          v22 = "UNKNOWN";
      }
      else
      {
        v22 = "Y";
      }
    }
    else
    {
      v22 = "X";
    }
    TlgCreateSz(&v56, v22);
    TlgWrite(v3, &unk_1802B6B82, 0LL, 0LL, 0xEu, &pData);
  }
}
