/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C01296D4
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C0128014 (RIMEndAllStaleContacts.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C011178C (WPP_RECORDER_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0122E84 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0123534 (RIMStartPointerDeviceFrame.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0127B18 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C012E594 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C012E9F0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C012F5EC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  int v7; // r12d
  int v8; // edi
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  _DWORD *v16; // rbx
  int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  int v24; // r9d
  __int64 v25; // rbx
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  __int64 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  char v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+41h] [rbp-BFh] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h]
  char v40[32]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v41; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  unsigned int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  char *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  char *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]

  v4 = *(_QWORD *)(a2 + 480);
  v34 = a3;
  v7 = 0;
  v8 = 0;
  v33 = *(_DWORD *)(v4 + 736) + *(_DWORD *)(v4 + 780);
  v35 = *(_QWORD *)(v4 + 744) + *(_QWORD *)(v4 + 808);
  active = RIMCmActiveContactsBegin(&v38, v4);
  v11 = *(_QWORD *)(active + 16);
  v36 = *(_OWORD *)active;
  v37 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v40, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v39 = v14;
    v38 = v13;
    if ( (_QWORD)v36 == v15 && DWORD2(v36) == DWORD2(v38) && v37 == v39 )
      break;
    v16 = (_DWORD *)(v37 - 16);
    if ( (*(_DWORD *)(v37 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v36);
    if ( a4 > *(_DWORD *)(v4 + 736) + v16[11] )
    {
      v17 = *(_DWORD *)(v4 + 24);
      if ( (unsigned int)(v17 - 5) > 1 )
      {
        if ( (unsigned int)(v17 - 1) <= 3 )
          v8 = 1;
      }
      else
      {
        v8 = 2;
      }
      if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
      {
        v19 = *(_QWORD *)(a2 + 464);
        v43 = 2LL;
        v45 = 2LL;
        v47 = 2LL;
        v49 = 4LL;
        v42 = v19 + 110;
        v44 = v19 + 112;
        v46 = v19 + 114;
        v31 = v16[580];
        v48 = &v31;
        v32 = a4 - v16[581];
        v50 = &v32;
        v52 = &v29;
        v54 = &v30;
        v51 = 4LL;
        v29 = 0;
        v53 = v18;
        v30 = v18;
        v55 = v18;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019FA29, 0LL, 0LL, 9u, &v41);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
      {
        if ( !v7 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, v34) )
          {
            WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x32u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
            break;
          }
          v7 = 1;
        }
        LODWORD(v28) = v16[659];
        LODWORD(v27) = v16[2];
        LODWORD(pData) = *v16;
        WPP_RECORDER_SF_dDD(
          v21,
          v20,
          v22,
          0x33u,
          (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids,
          pData,
          v27,
          v28);
        v23 = v33;
        v24 = v35;
        v16[585] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame(a1, a2, (__int64)v16, v24, v23, 0);
      }
      else
      {
        LODWORD(v28) = v16[659];
        LODWORD(v27) = v16[2];
        LODWORD(pData) = *v16;
        WPP_RECORDER_SF_dDD(
          v21,
          v20,
          v22,
          0x31u,
          (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids,
          pData,
          v27,
          v28);
        RIMCmDeactivateContact(v4, v16);
      }
    }
  }
  if ( v7 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer((const struct RIMDEV *)a2);
    RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2);
    RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 2u);
  }
  v25 = *(_QWORD *)(a1 + 856);
  if ( v25 )
  {
    if ( v8 )
    {
      PalmTelemetry::_ResetTelemetryData(*(PalmTelemetry **)(a1 + 856));
      if ( *(_DWORD *)v25 )
      {
        if ( v8 == 1 )
          *(_DWORD *)(v25 + 4) = 1;
        else
          *(_QWORD *)v25 = 0LL;
      }
    }
  }
}
