/*
 * XREFs of ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18023B294
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800C3658 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022D9B8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022DA20 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022DA4C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1802384FC (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180238614 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  int v2; // ebx
  _QWORD *v3; // rax
  const struct _TlgProvider_t *v4; // rsi
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
  int v19; // ecx
  const char *v20; // rax
  int v21; // r9d
  char v22; // cl
  int v23; // ecx
  int v24; // ecx
  const CHAR *v25; // rdx
  unsigned __int8 v26; // r9
  const CHAR *v27; // rdx
  const CHAR *v28; // r9
  const CHAR *v29; // rdx
  const CHAR *v30; // r9
  const CHAR *v31; // rdx
  const CHAR *v32; // r9
  const CHAR *v33; // rdx
  const CHAR *v34; // r9
  const CHAR *v35; // rdx
  const CHAR *v36; // r9
  const CHAR *v37; // rdx
  char v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  int v41; // [rsp+3Ch] [rbp-C4h] BYREF
  BOOL v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  const struct CInteraction *v44; // [rsp+48h] [rbp-B8h] BYREF
  char *v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  const struct CInteraction **v49; // [rsp+90h] [rbp-70h]
  int v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+9Ch] [rbp-64h]
  char **v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A8h] [rbp-58h]
  int v54; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C0h] [rbp-40h] BYREF
  int *v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D8h] [rbp-28h]
  int v59; // [rsp+DCh] [rbp-24h]
  __int64 *v60; // [rsp+E0h] [rbp-20h]
  int v61; // [rsp+E8h] [rbp-18h]
  int v62; // [rsp+ECh] [rbp-14h]
  int *v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+FCh] [rbp-4h]
  int *v66; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ch] [rbp+Ch]
  BOOL *v69; // [rsp+110h] [rbp+10h]
  int v70; // [rsp+118h] [rbp+18h]
  int v71; // [rsp+11Ch] [rbp+1Ch]
  int *v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+128h] [rbp+28h]
  int v74; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+130h] [rbp+30h] BYREF
  char *v76; // [rsp+140h] [rbp+40h]
  int v77; // [rsp+148h] [rbp+48h]
  int v78; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = **((_DWORD **)a1 + 7);
  v3 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v4 = (const struct _TlgProvider_t *)v3[1];
  if ( *(_DWORD *)v4 > 4u && TlgKeywordOn((TraceLoggingHProvider)v3[1], 0x800uLL) )
  {
    updated = InputTraceLogging::MidManipulationUpdateTypeToString(*(_DWORD *)a1);
    TlgCreateSz(&pDesc, updated);
    v6 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v51 = 0;
    v49 = &v44;
    v44 = v6;
    v50 = 8;
    if ( v6 )
      v7 = (char *)v6 + 8;
    else
      v7 = 0LL;
    v54 = 0;
    v45 = v7;
    v52 = &v45;
    v53 = 8;
    v8 = InputTraceLogging::InteractionSourceTypeToString(v6);
    TlgCreateSz(&v55, v8);
    v9 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
    TlgCreateSz(&v56, v9);
    v10 = *((_QWORD *)a1 + 2);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 1696);
    else
      v11 = 0;
    v59 = 0;
    v39 = v11;
    v57 = &v39;
    v12 = 0LL;
    v58 = 4;
    if ( v10 )
    {
      v13 = *(_QWORD *)(v10 + 96);
      if ( v13 )
        v12 = *(_QWORD *)(v13 + 64);
    }
    v62 = 0;
    v46 = v12;
    v60 = &v46;
    v61 = 8;
    v14 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v10);
    v15 = *((_QWORD *)a1 + 2);
    v65 = 0;
    v40 = v14;
    v63 = &v40;
    v64 = 4;
    if ( v15 )
      v16 = *(_BYTE *)(v15 + 184) & 1;
    else
      v16 = 0;
    v68 = 0;
    v41 = v16;
    v66 = &v41;
    v67 = 4;
    if ( v15 )
      v17 = (*(_BYTE *)(v15 + 184) & 4) != 0;
    else
      v17 = 0;
    v71 = 0;
    v42 = v17;
    v69 = &v42;
    v18 = 0;
    v70 = 4;
    if ( v15 )
      LOBYTE(v18) = *(_QWORD *)(v15 + 272) != 0LL;
    v74 = 0;
    v19 = *((_DWORD *)a1 + 10);
    v43 = v18;
    v72 = &v43;
    v73 = 4;
    v20 = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v19);
    TlgCreateSz(&v75, v20);
    v22 = *((_BYTE *)a1 + 64);
    v78 = 0;
    v38 = v21 & v22;
    v23 = *((_DWORD *)a1 + 11);
    v76 = &v38;
    v77 = v21;
    if ( v23 )
    {
      v24 = v23 - v21;
      if ( v24 )
      {
        if ( v24 == v21 )
          v25 = "Scale";
        else
          v25 = "UNKNOWN";
      }
      else
      {
        v25 = "Y";
      }
    }
    else
    {
      v25 = "X";
    }
    TlgCreateSz(&v79, v25);
    v27 = "PanX+";
    if ( ((unsigned __int8)v2 & v26) == 0 )
      v27 = byte_1802B2AA6;
    TlgCreateSz(&v80, v27);
    v29 = "PanX-";
    if ( (v2 & 2) == 0 )
      v29 = v28;
    TlgCreateSz(&v81, v29);
    v31 = "PanY+";
    if ( (v2 & 4) == 0 )
      v31 = v30;
    TlgCreateSz(&v82, v31);
    v33 = "PanY-";
    if ( (v2 & 8) == 0 )
      v33 = v32;
    TlgCreateSz(&v83, v33);
    v35 = "Zoom+";
    if ( (v2 & 0x10) == 0 )
      v35 = v34;
    TlgCreateSz(&v84, v35);
    v37 = "Zoom-";
    if ( (v2 & 0x20) == 0 )
      v37 = v36;
    TlgCreateSz(&v85, v37);
    TlgWrite(v4, &unk_1802DFCF5, 0LL, 0LL, 0x16u, &pData);
  }
}
