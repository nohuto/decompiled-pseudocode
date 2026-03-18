/*
 * XREFs of ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801ED874
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800E2D04 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA650 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x1801EA708 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA730 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801EA864 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::UpdateCapture(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  const struct _TlgProvider_t *v4; // rdi
  const char *updated; // rax
  const struct CInteraction *v6; // rcx
  const CHAR *v7; // rax
  const CHAR *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  int v16; // eax
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  const struct CInteraction *v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  const struct CInteraction **v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp-50h] BYREF
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  __int64 *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  int *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  int *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  int *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  char *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  char *v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+12Ch] [rbp+2Ch]
  char *v52; // [rsp+130h] [rbp+30h]
  int v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+13Ch] [rbp+3Ch]
  char *v55; // [rsp+140h] [rbp+40h]
  int v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+14Ch] [rbp+4Ch]

  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 2) + 224LL))(
          *((_QWORD *)a1 + 2),
          *((unsigned int *)a1 + 6),
          0LL);
  v3 = wil::details::static_lazy<InputTraceLogging>::get(
         v2,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v4 = (const struct _TlgProvider_t *)v3[1];
  if ( *(_DWORD *)v4 > 4u && TlgKeywordOn((TraceLoggingHProvider)v3[1], 0x800uLL) )
  {
    updated = InputTraceLogging::MidManipulationUpdateTypeToString(*(_DWORD *)a1);
    TlgCreateSz(&pDesc, updated);
    v6 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v28 = 0;
    v26 = &v22;
    v22 = v6;
    v27 = 8;
    v7 = InputTraceLogging::InteractionSourceTypeToString(v6);
    TlgCreateSz(&v29, v7);
    v8 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
    TlgCreateSz(&v30, v8);
    v9 = *((_QWORD *)a1 + 2);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1696);
    else
      v10 = 0;
    v33 = 0;
    v18 = v10;
    v31 = &v18;
    v11 = 0LL;
    v32 = 4;
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 96);
      if ( v12 )
        v11 = *(_QWORD *)(v12 + 64);
    }
    v36 = 0;
    v23 = v11;
    v34 = &v23;
    v35 = 8;
    v13 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v9);
    v14 = *((_QWORD *)a1 + 2);
    v39 = 0;
    v19 = v13;
    v37 = &v19;
    v38 = 4;
    if ( v14 )
      v15 = *(_BYTE *)(v14 + 184) & 1;
    else
      v15 = 0;
    v42 = 0;
    v20 = v15;
    v40 = &v20;
    v16 = 0;
    v41 = 4;
    if ( v14 )
      LOBYTE(v16) = *(_QWORD *)(v14 + 272) != 0LL;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v54 = 0;
    v57 = 0;
    v21 = v16;
    v43 = &v21;
    v49 = (char *)a1 + 28;
    v52 = (char *)a1 + 32;
    v55 = &v17;
    v44 = 4;
    v46 = (char *)a1 + 24;
    v47 = 4;
    v50 = 4;
    v53 = 8;
    v56 = 1;
    TlgWrite(v4, &unk_1802B6C3A, 0LL, 0LL, 0xFu, &pData);
  }
}
