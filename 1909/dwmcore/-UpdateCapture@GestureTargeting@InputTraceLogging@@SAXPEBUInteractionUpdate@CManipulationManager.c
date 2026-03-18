/*
 * XREFs of ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180239EC0
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800A9EA0 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C2A8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022C310 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C33C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180236F04 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::UpdateCapture(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  const struct _TlgProvider_t *v4; // rdi
  const char *updated; // rax
  const struct CInteraction *v6; // rcx
  char *v7; // rax
  const CHAR *v8; // rax
  const CHAR *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  bool v17; // al
  int v18; // eax
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  BOOL v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  const struct CInteraction *v25; // [rsp+48h] [rbp-B8h] BYREF
  char *v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  const struct CInteraction **v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  char **v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp-40h] BYREF
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int64 *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  BOOL *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  char *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  char *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  char *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]

  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 2) + 224LL))(
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
    v30 = &v25;
    v25 = v6;
    v31 = 8LL;
    v7 = (char *)v6 + 8;
    if ( !v6 )
      v7 = 0LL;
    v26 = v7;
    v32 = &v26;
    v33 = 8LL;
    v8 = InputTraceLogging::InteractionSourceTypeToString(v6);
    TlgCreateSz(&v34, v8);
    v9 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
    TlgCreateSz(&v35, v9);
    v10 = *((_QWORD *)a1 + 2);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 1696);
    else
      v11 = 0;
    v20 = v11;
    v36 = &v20;
    v12 = 0LL;
    v37 = 4LL;
    if ( v10 )
    {
      v13 = *(_QWORD *)(v10 + 96);
      if ( v13 )
        v12 = *(_QWORD *)(v13 + 64);
    }
    v27 = v12;
    v38 = &v27;
    v39 = 8LL;
    v14 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v10);
    v15 = *((_QWORD *)a1 + 2);
    v21 = v14;
    v40 = &v21;
    v41 = 4LL;
    if ( v15 )
      v16 = *(_BYTE *)(v15 + 184) & 1;
    else
      v16 = 0;
    v22 = v16;
    v42 = &v22;
    v43 = 4LL;
    if ( v15 )
      v17 = (*(_BYTE *)(v15 + 184) & 4) != 0;
    else
      v17 = 0;
    v23 = v17;
    v44 = &v23;
    v18 = 0;
    v45 = 4LL;
    if ( v15 )
      LOBYTE(v18) = *(_QWORD *)(v15 + 272) != 0LL;
    v24 = v18;
    v46 = &v24;
    v50 = (char *)a1 + 28;
    v52 = (char *)a1 + 32;
    v54 = &v19;
    v47 = 4LL;
    v48 = (char *)a1 + 24;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 8LL;
    v55 = 1LL;
    TlgWrite(v4, &unk_1802DE3EB, 0LL, 0LL, 0x11u, &pData);
  }
}
