/*
 * XREFs of PopTransitionTelemetryOsState @ 0x14075B0D8
 * Callers:
 *     PopNotifyTelemetryOsState @ 0x140725E54 (PopNotifyTelemetryOsState.c)
 *     PopConnectedStandbySettingCallback @ 0x14073B180 (PopConnectedStandbySettingCallback.c)
 *     PopDiagInitialize @ 0x140A06004 (PopDiagInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     TraceLoggingProviderEnabled @ 0x14008A644 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012B1C4 (TelemetryCoverageStringHashInternal.c)
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCurrentPowerState @ 0x14067E620 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x1408AA6C4 (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned int v4; // esi
  char **v6; // rcx
  int v7; // r11d
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  ULONG v13; // r15d
  ULONG Size; // r14d
  __int16 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-A4h] BYREF
  ULONG v27; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-98h] BYREF
  int Ptr_low; // [rsp+74h] [rbp-94h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+98h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+ACh] [rbp-5Ch] BYREF
  int v39; // [rsp+B0h] [rbp-58h] BYREF
  int v40; // [rsp+B4h] [rbp-54h] BYREF
  int v41; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v45; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-20h] BYREF
  int v48; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR v49[2]; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  __int16 *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  __int16 *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  int *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int64 *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  int *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  int *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  int *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]
  int *v73; // [rsp+1E8h] [rbp+E0h]
  __int64 v74; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v75; // [rsp+1F8h] [rbp+F0h]
  __int64 v76; // [rsp+200h] [rbp+F8h]
  ULONG *v77; // [rsp+208h] [rbp+100h]
  __int64 v78; // [rsp+210h] [rbp+108h]
  ULONG *v79; // [rsp+218h] [rbp+110h]
  __int64 v80; // [rsp+220h] [rbp+118h]
  __int64 *v81; // [rsp+228h] [rbp+120h]
  __int64 v82; // [rsp+230h] [rbp+128h]
  int *v83; // [rsp+238h] [rbp+130h]
  __int64 v84; // [rsp+240h] [rbp+138h]
  int *p_Ptr_low; // [rsp+248h] [rbp+140h]
  __int64 v86; // [rsp+250h] [rbp+148h]
  __int64 *v87; // [rsp+258h] [rbp+150h]
  __int64 v88; // [rsp+260h] [rbp+158h]
  __int64 *v89; // [rsp+268h] [rbp+160h]
  __int64 v90; // [rsp+270h] [rbp+168h]

  memset(v49, 0, sizeof(v49));
  v35 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  v4 = 0;
  if ( !TraceLoggingProviderEnabled(&pCallbackContext, 0, 0x800000000000uLL) || !byte_1404420EC )
    return v4;
  switch ( a1 )
  {
    case 2:
      if ( a2 == 2 )
      {
        if ( (unsigned int)dword_140427DDC < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140427DD8 )
            dword_140427DD8 = TelemetryCoverageStringHashInternal(off_140427DD0, &v33);
          v6 = &off_140427DD0;
          goto LABEL_66;
        }
      }
      else if ( (unsigned int)dword_140427DAC < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140427DA8 )
          dword_140427DA8 = TelemetryCoverageStringHashInternal(off_140427DA0, &v34);
        v6 = &off_140427DA0;
        goto LABEL_66;
      }
      break;
    case 3:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_140427DC4 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427DC0 )
              dword_140427DC0 = TelemetryCoverageStringHashInternal(off_140427DB8, &v38);
            v6 = &off_140427DB8;
            goto LABEL_66;
          }
          break;
        case 4:
          if ( (unsigned int)dword_140427D7C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427D78 )
              dword_140427D78 = TelemetryCoverageStringHashInternal(off_140427D70, &v37);
            v6 = &off_140427D70;
            goto LABEL_66;
          }
          break;
        case 5:
          if ( (unsigned int)dword_140427D94 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427D90 )
              dword_140427D90 = TelemetryCoverageStringHashInternal(off_140427D88, &v48);
            v6 = &off_140427D88;
            goto LABEL_66;
          }
          break;
        case 6:
          if ( (unsigned int)dword_140427D4C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427D48 )
              dword_140427D48 = TelemetryCoverageStringHashInternal(off_140427D40, &v41);
            v6 = &off_140427D40;
            goto LABEL_66;
          }
          break;
        default:
          if ( a2 == 8 && (unsigned int)dword_140427D64 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427D60 )
              dword_140427D60 = TelemetryCoverageStringHashInternal(off_140427D58, &v40);
            v6 = &off_140427D58;
            goto LABEL_66;
          }
          break;
      }
      break;
    case 4:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_140427D1C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427D18 )
              dword_140427D18 = TelemetryCoverageStringHashInternal(off_140427D10, &v39);
            v6 = &off_140427D10;
            goto LABEL_66;
          }
          break;
        case 4:
          if ( (unsigned int)dword_140427D34 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427D30 )
              dword_140427D30 = TelemetryCoverageStringHashInternal(off_140427D28, &v19);
            v6 = &off_140427D28;
            goto LABEL_66;
          }
          break;
        case 5:
          if ( (unsigned int)dword_140427CEC < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427CE8 )
              dword_140427CE8 = TelemetryCoverageStringHashInternal(off_140427CE0, &v20);
            v6 = &off_140427CE0;
            goto LABEL_66;
          }
          break;
        case 6:
          if ( (unsigned int)dword_140427D04 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427D00 )
              dword_140427D00 = TelemetryCoverageStringHashInternal(off_140427CF8, &v21);
            v6 = &off_140427CF8;
            goto LABEL_66;
          }
          break;
        default:
          if ( a2 == 8 && (unsigned int)dword_140427CD4 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140427CD0 )
              dword_140427CD0 = TelemetryCoverageStringHashInternal(off_140427CC8, &v22);
            v6 = &off_140427CC8;
LABEL_66:
            EtwTelemetryCoverageReport((__int64)v6);
          }
          break;
      }
      break;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v4 = dword_1404420E8;
  if ( a1 != 5 || dword_1404420B0 == 1 || (unsigned int)(dword_1404420B0 - 4) <= 1 )
  {
    v8 = (KiQueryUnbiasedInterruptTime() - qword_1404420C8) / 0x2710uLL;
    v9 = v8 - qword_1404420D8;
    v10 = (MEMORY[0xFFFFF78000000008] - qword_1404420C0) / 0x2710uLL;
    qword_1404420D8 = v8;
    v11 = v10 - qword_1404420D0;
    v34 = v10 - qword_1404420D0;
    v12 = v10 - qword_1404420D0;
    qword_1404420D0 = v10;
    if ( v9 <= v11 )
      v12 = v9;
    v33 = v12;
    v21 = v7 + dword_1404420E0;
    dword_1404420E0 += v7;
    v19 = dword_1404420B0;
    v20 = dword_1404420B4;
    if ( a1 != 5 )
    {
      dword_1404420E4 += v7;
      dword_1404420B0 = a1;
      dword_1404420B4 = a2;
    }
    if ( a1 == v7 || a1 == 4 )
      dword_1404420E8 += v7;
    v4 = dword_1404420E8;
    v22 = dword_1404420E4;
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
    PopCurrentPowerState(v49);
    v13 = 0;
    Size = v49[0].Size;
    if ( v49[0].Size )
      v13 = 100 * v49[0].Reserved / v49[0].Size;
    PopMeasureEnergyChange(&v35, &OsStateChangeEnergyCounter);
    v32 = qword_1404420B8;
    if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
    {
      v42 = v34;
      v15 = a1;
      v16 = a2;
      v23 = MEMORY[0xFFFFF780000002C4];
      v43 = v33;
      LOWORD(v17) = v19;
      LOWORD(v18) = v20;
      v24 = v21;
      v25 = v22;
      v46 = v36;
      v29 = v35;
      Ptr_low = LOBYTE(v49[0].Ptr);
      LODWORD(v31) = BYTE3(v49[0].Ptr);
      v51 = &v15;
      v53 = &v16;
      v55 = &v42;
      v57 = &v23;
      v59 = &v32;
      v61 = &v43;
      v63 = &v44;
      v65 = &v45;
      v67 = &v17;
      v69 = &v18;
      v71 = &v24;
      v73 = &v25;
      v75 = &v26;
      v77 = &v27;
      v79 = &v28;
      v81 = &v46;
      v83 = &v29;
      v44 = v10;
      v45 = v8;
      v26 = v4;
      v27 = Size;
      v28 = v13;
      v47 = 0x1000000LL;
      v52 = 2LL;
      v54 = 2LL;
      v56 = 8LL;
      v58 = 4LL;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 8LL;
      v66 = 8LL;
      v68 = 2LL;
      v70 = 2LL;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 4LL;
      v78 = 4LL;
      v80 = 4LL;
      v82 = 8LL;
      v84 = 4LL;
      v86 = 4LL;
      p_Ptr_low = &Ptr_low;
      v87 = &v31;
      v89 = &v47;
      v88 = 4LL;
      v90 = 8LL;
      TlgWrite(&pCallbackContext, &unk_140390027, 0LL, 0LL, 0x16u, &pData);
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  }
  return v4;
}
