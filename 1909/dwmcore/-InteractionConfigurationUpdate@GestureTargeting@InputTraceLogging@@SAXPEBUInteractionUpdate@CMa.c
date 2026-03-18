/*
 * XREFs of ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A9F34
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800A9EA0 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A8EF8 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800AA120 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800ACC70 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C2A8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022C310 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022C33C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x180236DEC (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180236F04 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  const CHAR *updated; // rax
  const struct CInteraction *v9; // rcx
  char *v10; // rax
  const CHAR *v11; // rax
  const CHAR *v12; // rax
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  bool v21; // al
  int v22; // eax
  __int64 v23; // rcx
  const CHAR *v24; // rax
  int v25; // ecx
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v29; // [rsp+44h] [rbp-C4h] BYREF
  int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  const struct CInteraction *v32; // [rsp+50h] [rbp-B8h] BYREF
  char *v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  const struct CInteraction **v37; // [rsp+98h] [rbp-70h]
  int v38; // [rsp+A0h] [rbp-68h]
  int v39; // [rsp+A4h] [rbp-64h]
  char **v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C8h] [rbp-40h] BYREF
  int *v45; // [rsp+D8h] [rbp-30h]
  int v46; // [rsp+E0h] [rbp-28h]
  int v47; // [rsp+E4h] [rbp-24h]
  __int64 *v48; // [rsp+E8h] [rbp-20h]
  int v49; // [rsp+F0h] [rbp-18h]
  int v50; // [rsp+F4h] [rbp-14h]
  unsigned int *v51; // [rsp+F8h] [rbp-10h]
  int v52; // [rsp+100h] [rbp-8h]
  int v53; // [rsp+104h] [rbp-4h]
  int *v54; // [rsp+108h] [rbp+0h]
  int v55; // [rsp+110h] [rbp+8h]
  int v56; // [rsp+114h] [rbp+Ch]
  BOOL *v57; // [rsp+118h] [rbp+10h]
  int v58; // [rsp+120h] [rbp+18h]
  int v59; // [rsp+124h] [rbp+1Ch]
  int *v60; // [rsp+128h] [rbp+20h]
  int v61; // [rsp+130h] [rbp+28h]
  int v62; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+138h] [rbp+30h] BYREF
  int *v64; // [rsp+148h] [rbp+40h]
  int v65; // [rsp+150h] [rbp+48h]
  int v66; // [rsp+154h] [rbp+4Ch]
  char *v67; // [rsp+158h] [rbp+50h]
  int v68; // [rsp+160h] [rbp+58h]
  int v69; // [rsp+164h] [rbp+5Ch]

  v2 = *((_DWORD *)a1 + 11) - 1;
  if ( v2 && (v3 = v2 - 1) != 0 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 == 1 )
        {
          InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>(a1);
        }
        else
        {
          v6 = wil::details::static_lazy<InputTraceLogging>::get(
                 v5,
                 (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
          v7 = (const struct _TlgProvider_t *)v6[1];
          if ( *(_DWORD *)v7 > 4u && TlgKeywordOn((TraceLoggingHProvider)v6[1], 0x800uLL) )
          {
            updated = (const CHAR *)InputTraceLogging::MidManipulationUpdateTypeToString(*(unsigned int *)a1);
            TlgCreateSz(&pDesc, updated);
            v9 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
            v39 = 0;
            v37 = &v32;
            v32 = v9;
            v38 = 8;
            if ( v9 )
              v10 = (char *)v9 + 8;
            else
              v10 = 0LL;
            v42 = 0;
            v33 = v10;
            v40 = &v33;
            v41 = 8;
            v11 = InputTraceLogging::InteractionSourceTypeToString(v9);
            TlgCreateSz(&v43, v11);
            v12 = InputTraceLogging::InteractionDefaultToString(*((const struct CInteraction **)a1 + 2));
            TlgCreateSz(&v44, v12);
            v14 = *((_QWORD *)a1 + 2);
            if ( v14 )
              v15 = *(_DWORD *)(v14 + 1696);
            else
              v15 = 0;
            v47 = 0;
            v26 = v15;
            v45 = &v26;
            v16 = 0LL;
            v46 = 4;
            if ( v14 )
            {
              v17 = *(_QWORD *)(v14 + 96);
              if ( v17 )
                v16 = *(_QWORD *)(v17 + 64);
            }
            v50 = 0;
            v34 = v16;
            v48 = &v34;
            v49 = v13;
            v18 = InputTraceLogging::InteractionProcessId((const struct CInteraction *)v14);
            v19 = *((_QWORD *)a1 + 2);
            v53 = 0;
            v27 = v18;
            v51 = &v27;
            v52 = 4;
            if ( v19 )
              v20 = *(_BYTE *)(v19 + 184) & 1;
            else
              v20 = 0;
            v56 = 0;
            v28 = v20;
            v54 = &v28;
            v55 = 4;
            if ( v19 )
              v21 = (*(_BYTE *)(v19 + 184) & 4) != 0;
            else
              v21 = 0;
            v59 = 0;
            v29 = v21;
            v57 = &v29;
            v22 = 0;
            v58 = 4;
            if ( v19 )
              LOBYTE(v22) = *(_QWORD *)(v19 + 272) != 0LL;
            v62 = 0;
            v23 = *((unsigned int *)a1 + 10);
            v30 = v22;
            v60 = &v30;
            v61 = 4;
            v24 = (const CHAR *)InputTraceLogging::InteractionConfigurationUpdateTypeToString(v23);
            TlgCreateSz(&v63, v24);
            v66 = 0;
            v25 = *((_DWORD *)a1 + 11);
            v69 = 0;
            v64 = &v31;
            v67 = (char *)a1 + 48;
            v31 = v25;
            v65 = 4;
            v68 = 4;
            TlgWrite(v7, &unk_1802DDE55, 0LL, 0LL, 0x10u, &pData);
          }
        }
      }
      else
      {
        InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMouseInteractionConfigurationPrimitive>(a1);
      }
    }
    else
    {
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmTouchpadInteractionConfigurationPrimitive>((unsigned int *)a1);
    }
  }
  else
  {
    InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmTouchpadInteractionConfigurationPrimitive>((unsigned int *)a1);
  }
}
