/*
 * XREFs of ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A8E80
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800A9EA0 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C2A8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022C310 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C33C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180236F04 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::RailsUpdate(const struct CInteraction **a1)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rdi
  const CHAR *updated; // rax
  const struct CInteraction *v5; // rcx
  char *v6; // rax
  const CHAR *v7; // rax
  const CHAR *v8; // rax
  int v9; // r9d
  const struct CInteraction *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  const struct CInteraction *v15; // rcx
  unsigned __int8 v16; // al
  bool v17; // al
  int v18; // eax
  int v19; // ecx
  bool v20; // al
  const CHAR *v21; // rdx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  const struct CInteraction *v28; // [rsp+50h] [rbp-B8h] BYREF
  char *v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  const struct CInteraction **v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+A4h] [rbp-64h]
  char **v36; // [rsp+A8h] [rbp-60h]
  int v37; // [rsp+B0h] [rbp-58h]
  int v38; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C8h] [rbp-40h] BYREF
  int *v41; // [rsp+D8h] [rbp-30h]
  int v42; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+E4h] [rbp-24h]
  __int64 *v44; // [rsp+E8h] [rbp-20h]
  int v45; // [rsp+F0h] [rbp-18h]
  int v46; // [rsp+F4h] [rbp-14h]
  unsigned int *v47; // [rsp+F8h] [rbp-10h]
  int v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+104h] [rbp-4h]
  int *v50; // [rsp+108h] [rbp+0h]
  int v51; // [rsp+110h] [rbp+8h]
  int v52; // [rsp+114h] [rbp+Ch]
  BOOL *v53; // [rsp+118h] [rbp+10h]
  int v54; // [rsp+120h] [rbp+18h]
  int v55; // [rsp+124h] [rbp+1Ch]
  int *v56; // [rsp+128h] [rbp+20h]
  int v57; // [rsp+130h] [rbp+28h]
  int v58; // [rsp+134h] [rbp+2Ch]
  int *v59; // [rsp+138h] [rbp+30h]
  int v60; // [rsp+140h] [rbp+38h]
  int v61; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+148h] [rbp+40h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(v2 + 8), 0x800uLL) )
  {
    updated = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*(unsigned int *)a1);
    TlgCreateSz(&pDesc, updated);
    v5 = a1[2];
    v35 = 0;
    v33 = &v28;
    v28 = v5;
    v34 = 8;
    if ( v5 )
      v6 = (char *)v5 + 8;
    else
      v6 = 0LL;
    v38 = 0;
    v29 = v6;
    v36 = &v29;
    v37 = 8;
    v7 = InputTraceLogging::InteractionSourceTypeToString(v5);
    TlgCreateSz(&v39, v7);
    v8 = InputTraceLogging::InteractionDefaultToString(a1[2]);
    TlgCreateSz(&v40, v8);
    v10 = a1[2];
    if ( v10 )
      v11 = *((_DWORD *)v10 + 424);
    else
      v11 = 0;
    v43 = 0;
    v23 = v11;
    v41 = &v23;
    v12 = 0LL;
    v42 = 4;
    if ( v10 )
    {
      v13 = *((_QWORD *)v10 + 12);
      if ( v13 )
        v12 = *(_QWORD *)(v13 + 64);
    }
    v46 = 0;
    v30 = v12;
    v44 = &v30;
    v45 = v9;
    v14 = InputTraceLogging::InteractionProcessId(v10);
    v15 = a1[2];
    v49 = 0;
    v24 = v14;
    v47 = &v24;
    v48 = 4;
    if ( v15 )
      v16 = *((_BYTE *)v15 + 184) & 1;
    else
      v16 = 0;
    v52 = 0;
    v25 = v16;
    v50 = &v25;
    v51 = 4;
    if ( v15 )
      v17 = (*((_BYTE *)v15 + 184) & 4) != 0;
    else
      v17 = 0;
    v55 = 0;
    v26 = v17;
    v53 = &v26;
    v18 = 0;
    v54 = 4;
    if ( v15 )
      LOBYTE(v18) = *((_QWORD *)v15 + 34) != 0LL;
    v58 = 0;
    v61 = 0;
    v19 = *((_DWORD *)a1 + 11);
    v27 = v18;
    v56 = &v27;
    v20 = ((_BYTE)a1[8] & 2) != 0;
    v57 = 4;
    LOBYTE(v22) = v20;
    v59 = &v22;
    v60 = 1;
    if ( v19 )
    {
      if ( v19 == 1 )
        v21 = "Y";
      else
        v21 = "UNKNOWN";
    }
    else
    {
      v21 = "X";
    }
    TlgCreateSz(&v62, v21);
    TlgWrite(v3, &unk_1802DE1C8, 0LL, 0LL, 0xFu, &pData);
  }
}
