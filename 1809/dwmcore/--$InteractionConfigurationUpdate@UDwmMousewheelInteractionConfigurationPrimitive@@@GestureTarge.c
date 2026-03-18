/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180073FB8
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18002B010 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800E2D04 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1801EA628 (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA650 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z @ 0x1801EA6B8 (-InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x1801EA708 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801EA730 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801EA864 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

char __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>(
        unsigned int *a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rax
  const struct _TlgProvider_t *v4; // rdi
  const CHAR *updated; // rax
  const struct CInteraction *v6; // rcx
  const CHAR *v7; // rax
  const CHAR *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  int v16; // eax
  __int64 v17; // rcx
  const CHAR *v18; // rax
  const CHAR *v19; // rax
  const CHAR *v20; // rdx
  const CHAR *v21; // r9
  const CHAR *v22; // rdx
  const CHAR *v23; // r9
  const CHAR *v24; // rdx
  const CHAR *v25; // r9
  const CHAR *v26; // rdx
  const CHAR *v27; // r9
  const CHAR *v28; // rdx
  const CHAR *v29; // r9
  const CHAR *v30; // rdx
  const CHAR *v31; // r9
  const CHAR *v32; // rdx
  const CHAR *v33; // r9
  const CHAR *v34; // rdx
  const CHAR *v35; // r9
  const CHAR *v36; // rdx
  const CHAR *v37; // r9
  const CHAR *v38; // rdx
  const CHAR *v39; // r9
  const CHAR *v40; // rdx
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  const struct CInteraction *v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  const struct CInteraction **v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+88h] [rbp-78h]
  int v52; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+A0h] [rbp-60h] BYREF
  int *v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+BCh] [rbp-44h]
  __int64 *v58; // [rsp+C0h] [rbp-40h]
  int v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+CCh] [rbp-34h]
  unsigned int *v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+DCh] [rbp-24h]
  int *v64; // [rsp+E0h] [rbp-20h]
  int v65; // [rsp+E8h] [rbp-18h]
  int v66; // [rsp+ECh] [rbp-14h]
  int *v67; // [rsp+F0h] [rbp-10h]
  int v68; // [rsp+F8h] [rbp-8h]
  int v69; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v83; // [rsp+1D0h] [rbp+D0h]
  int v84; // [rsp+1D8h] [rbp+D8h]
  int v85; // [rsp+1DCh] [rbp+DCh]
  __int64 v86; // [rsp+1E0h] [rbp+E0h]
  int v87; // [rsp+1E8h] [rbp+E8h]
  int v88; // [rsp+1ECh] [rbp+ECh]

  v1 = *((_QWORD *)a1 + 7);
  v3 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v4 = (const struct _TlgProvider_t *)v3[1];
  if ( *(_DWORD *)v4 > 4u )
  {
    LOBYTE(v3) = TlgKeywordOn((TraceLoggingHProvider)v3[1], 0x800uLL);
    if ( (_BYTE)v3 )
    {
      updated = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*a1);
      TlgCreateSz(&pDesc, updated);
      v6 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
      v52 = 0;
      v50 = &v46;
      v46 = v6;
      v51 = 8;
      v7 = InputTraceLogging::InteractionSourceTypeToString(v6);
      TlgCreateSz(&v53, v7);
      v8 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
      TlgCreateSz(&v54, v8);
      v9 = *((_QWORD *)a1 + 2);
      if ( v9 )
        v10 = *(_DWORD *)(v9 + 1696);
      else
        v10 = 0;
      v57 = 0;
      v42 = v10;
      v55 = &v42;
      v11 = 0LL;
      v56 = 4;
      if ( v9 )
      {
        v12 = *(_QWORD *)(v9 + 96);
        if ( v12 )
          v11 = *(_QWORD *)(v12 + 64);
      }
      v60 = 0;
      v47 = v11;
      v58 = &v47;
      v59 = 8;
      v13 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v9);
      v14 = *((_QWORD *)a1 + 2);
      v63 = 0;
      v43 = v13;
      v61 = &v43;
      v62 = 4;
      if ( v14 )
        v15 = *(_BYTE *)(v14 + 184) & 1;
      else
        v15 = 0;
      v66 = 0;
      v44 = v15;
      v64 = &v44;
      v16 = 0;
      v65 = 4;
      if ( v14 )
        LOBYTE(v16) = *(_QWORD *)(v14 + 272) != 0LL;
      v69 = 0;
      v17 = a1[10];
      v45 = v16;
      v67 = &v45;
      v68 = 4;
      v18 = (const CHAR *)InputTraceLogging::InteractionConfigurationUpdateTypeToString(v17);
      TlgCreateSz(&v70, v18);
      v19 = (const CHAR *)InputTraceLogging::InteractionInputTypeToString(a1[11]);
      TlgCreateSz(&v71, v19);
      v20 = "PanX+";
      if ( (*(_BYTE *)(v1 + 8) & 1) == 0 )
        v20 = psz;
      TlgCreateSz(&v72, v20);
      v22 = "PanX-";
      if ( (*(_BYTE *)(v1 + 8) & 2) == 0 )
        v22 = v21;
      TlgCreateSz(&v73, v22);
      v24 = "PanY+";
      if ( (*(_BYTE *)(v1 + 8) & 4) == 0 )
        v24 = v23;
      TlgCreateSz(&v74, v24);
      v26 = "PanY-";
      if ( (*(_BYTE *)(v1 + 8) & 8) == 0 )
        v26 = v25;
      TlgCreateSz(&v75, v26);
      v28 = "Zoom+";
      if ( (*(_BYTE *)(v1 + 8) & 0x10) == 0 )
        v28 = v27;
      TlgCreateSz(&v76, v28);
      v30 = "Zoom-";
      if ( (*(_BYTE *)(v1 + 8) & 0x20) == 0 )
        v30 = v29;
      TlgCreateSz(&v77, v30);
      v32 = "Tap";
      if ( (*(_BYTE *)(v1 + 8) & 0x40) == 0 )
        v32 = v31;
      TlgCreateSz(&v78, v32);
      v34 = "Hold";
      if ( *(char *)(v1 + 8) >= 0 )
        v34 = v33;
      TlgCreateSz(&v79, v34);
      v36 = "Button";
      if ( (*(_DWORD *)(v1 + 8) & 0x100) == 0 )
        v36 = v35;
      TlgCreateSz(&v80, v36);
      v38 = "Eraser";
      if ( (*(_DWORD *)(v1 + 8) & 0x200) == 0 )
        v38 = v37;
      TlgCreateSz(&v81, v38);
      v40 = "AllWheel";
      if ( (*(_DWORD *)(v1 + 8) & 0x8000) == 0 )
        v40 = v39;
      TlgCreateSz(&v82, v40);
      v85 = 0;
      v88 = 0;
      v86 = v1 + 4;
      v83 = v1;
      v84 = 4;
      v87 = 4;
      LOBYTE(v3) = TlgWrite(v4, &unk_1802B689C, 0LL, 0LL, 0x1Au, &pData);
    }
  }
  return (char)v3;
}
