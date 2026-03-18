/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C01540B8
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C0152A00 (RIMEndAllStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0139BA8 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C013A26C (WPP_RECORDER_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C014CBD0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C014CCB0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C014D3B0 (RIMStartPointerDeviceFrame.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0152500 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0152AF4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C0152C3C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBegin @ 0x1C0159380 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0159498 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01594EC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01597E0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01599B8 (RIMCmIsContactDeliveringPointerData.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C015A4AC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  int v7; // r12d
  int v8; // edi
  int v9; // r13d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  _DWORD *v16; // rbx
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // rcx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // r8
  __int64 v25; // rbx
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v28; // [rsp+44h] [rbp-BCh]
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int128 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  _BYTE v38[24]; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  char *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  char *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]

  v4 = *(_QWORD *)(a2 + 480);
  v28 = a4;
  v7 = 0;
  v33 = a3;
  v8 = 0;
  v9 = *(_DWORD *)(v4 + 744) + *(_DWORD *)(v4 + 788);
  v31 = *(_QWORD *)(v4 + 752) + *(_QWORD *)(v4 + 816);
  active = RIMCmActiveContactsBegin(&v36, v4);
  v11 = *(_QWORD *)(active + 16);
  v34 = *(_OWORD *)active;
  v35 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v38, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v37 = v14;
    v36 = v13;
    if ( (_QWORD)v34 == v15 && DWORD2(v34) == DWORD2(v36) && v35 == v37 )
      break;
    v16 = (_DWORD *)(v35 - 16);
    if ( (*(_DWORD *)(v35 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v34);
    if ( v28 > *(_DWORD *)(v4 + 744) + v16[11] )
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
      if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
      {
        v20 = *(_QWORD *)(a2 + 464);
        v41 = 2LL;
        v43 = 2LL;
        v45 = 2LL;
        v47 = 4LL;
        v40 = v20 + 110;
        v42 = v20 + 112;
        v44 = v20 + 114;
        v29 = v16[580];
        v46 = &v29;
        v30 = v18 - v16[581];
        v48 = &v30;
        v50 = &v26;
        v52 = &v27;
        v54 = &v32;
        v49 = 4LL;
        v26 = 0;
        v51 = v19;
        v27 = v19;
        v53 = v19;
        v32 = 0x1000000LL;
        v55 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E3BDF, 0LL, 0LL, 0xAu, &pData);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
      {
        if ( !v7 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, v33) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_29;
            LOBYTE(v21) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v21, 1, 50, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
            break;
          }
          v7 = 1;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_dDD(
            v22,
            v21,
            v23,
            51,
            (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
            *v16,
            v16[2],
            v16[665]);
        }
        v16[585] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame(a1, a2, (__int64)v16, v31, v9, 0);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_dDD(
            v22,
            v21,
            v23,
            49,
            (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
            *v16,
            v16[2],
            v16[665]);
        }
        RIMCmDeactivateContact(v4, v16);
      }
    }
  }
  if ( v7 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer((const struct RIMDEV *)a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, a2, v31, v9);
    RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2, v24);
    RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 2LL);
  }
LABEL_29:
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
