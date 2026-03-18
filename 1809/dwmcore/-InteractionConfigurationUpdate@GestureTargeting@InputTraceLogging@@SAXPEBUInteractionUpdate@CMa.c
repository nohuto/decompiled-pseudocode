/*
 * XREFs of ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18002B010
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180073FB8 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180075370 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
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

void __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate(unsigned __int64 a1)
{
  unsigned int *v1; // rbx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rdi
  const CHAR *updated; // rax
  const struct CInteraction *v8; // rcx
  const CHAR *v9; // rax
  const CHAR *v10; // rax
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  __int64 v20; // rcx
  const CHAR *v21; // rax
  const CHAR *v22; // rax
  LPCSTR v23; // r9
  LPCSTR v24; // r9
  LPCSTR v25; // r9
  LPCSTR v26; // r9
  LPCSTR v27; // r9
  LPCSTR v28; // r9
  LPCSTR v29; // r9
  LPCSTR v30; // r9
  LPCSTR v31; // r9
  LPCSTR v32; // r9
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  const struct CInteraction *v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  const struct CInteraction **v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+A0h] [rbp-60h] BYREF
  int *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  __int64 *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  unsigned int *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  int *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  int *v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+1C0h] [rbp+C0h] BYREF

  v1 = (unsigned int *)a1;
  if ( !*(_QWORD *)(a1 + 56) )
    goto LABEL_6;
  v2 = *(_DWORD *)(a1 + 44) - 1;
  if ( !v2 )
    goto LABEL_13;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_13;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_13;
  a1 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)a1 )
  {
    InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMouseInteractionConfigurationPrimitive>(v1);
    return;
  }
  if ( (_DWORD)a1 != 1 )
  {
LABEL_6:
    v5 = wil::details::static_lazy<InputTraceLogging>::get(
           a1,
           lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v6 = *(const struct _TlgProvider_t **)(v5 + 8);
    if ( *(_DWORD *)v6 > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(v5 + 8), 0x800uLL) )
    {
      updated = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*v1);
      TlgCreateSz(&pDesc, updated);
      v8 = (const struct CInteraction *)*((_QWORD *)v1 + 2);
      v43 = 0;
      v41 = &v37;
      v37 = v8;
      v42 = 8;
      v9 = InputTraceLogging::InteractionSourceTypeToString(v8);
      TlgCreateSz(&v44, v9);
      v10 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)v1 + 2));
      TlgCreateSz(&v45, v10);
      v12 = *((_QWORD *)v1 + 2);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 1696);
      else
        v13 = 0;
      v48 = 0;
      v33 = v13;
      v46 = &v33;
      v14 = 0LL;
      v47 = 4;
      if ( v12 )
      {
        v15 = *(_QWORD *)(v12 + 96);
        if ( v15 )
          v14 = *(_QWORD *)(v15 + 64);
      }
      v51 = 0;
      v38 = v14;
      v49 = &v38;
      v50 = v11;
      v16 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v12);
      v17 = *((_QWORD *)v1 + 2);
      v54 = 0;
      v34 = v16;
      v52 = &v34;
      v53 = 4;
      if ( v17 )
        v18 = *(_BYTE *)(v17 + 184) & 1;
      else
        v18 = 0;
      v57 = 0;
      v35 = v18;
      v55 = &v35;
      v19 = 0;
      v56 = 4;
      if ( v17 )
        LOBYTE(v19) = *(_QWORD *)(v17 + 272) != 0LL;
      v60 = 0;
      v20 = v1[10];
      v36 = v19;
      v58 = &v36;
      v59 = 4;
      v21 = (const CHAR *)InputTraceLogging::InteractionConfigurationUpdateTypeToString(v20);
      TlgCreateSz(&v61, v21);
      v22 = (const CHAR *)InputTraceLogging::InteractionInputTypeToString(v1[11]);
      TlgCreateSz(&v62, v22);
      TlgCreateSz(&v63, psz);
      TlgCreateSz(&v64, v23);
      TlgCreateSz(&v65, v24);
      TlgCreateSz(&v66, v25);
      TlgCreateSz(&v67, v26);
      TlgCreateSz(&v68, v27);
      TlgCreateSz(&v69, v28);
      TlgCreateSz(&v70, v29);
      TlgCreateSz(&v71, v30);
      TlgCreateSz(&v72, v31);
      TlgCreateSz(&v73, v32);
      TlgWrite(v6, &unk_1802B6E60, 0LL, 0LL, 0x18u, &pData);
    }
  }
  else
  {
LABEL_13:
    InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>(v1);
  }
}
