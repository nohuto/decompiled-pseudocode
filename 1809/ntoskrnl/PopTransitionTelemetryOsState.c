/*
 * XREFs of PopTransitionTelemetryOsState @ 0x1407466B8
 * Callers:
 *     PopNotifyTelemetryOsState @ 0x1406DFA98 (PopNotifyTelemetryOsState.c)
 *     PopConnectedStandbySettingCallback @ 0x14071FE70 (PopConnectedStandbySettingCallback.c)
 *     PopDiagInitialize @ 0x1409D1B90 (PopDiagInitialize.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012A838 (TelemetryCoverageStringHashInternal.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopCurrentPowerState @ 0x14058EED4 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x14086EDD4 (PopMeasureEnergyChange.c)
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
  unsigned __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  int v35; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v37; // [rsp+A0h] [rbp-68h] BYREF
  int v38; // [rsp+A4h] [rbp-64h] BYREF
  int v39; // [rsp+A8h] [rbp-60h] BYREF
  int v40; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-38h] BYREF
  int v46; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v48[2]; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int16 *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __int16 *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  int *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  int *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  int *v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  int *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  int *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  ULONG *v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  ULONG *v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  __int64 *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]
  int *v82; // [rsp+228h] [rbp+120h]
  __int64 v83; // [rsp+230h] [rbp+128h]
  int *p_Ptr_low; // [rsp+238h] [rbp+130h]
  __int64 v85; // [rsp+240h] [rbp+138h]
  __int64 *v86; // [rsp+248h] [rbp+140h]
  __int64 v87; // [rsp+250h] [rbp+148h]

  memset(v48, 0, sizeof(v48));
  v4 = 0;
  if ( !TraceLoggingProviderEnabled(&pCallbackContext, 0, 0x800000000000uLL) || !byte_14041782C )
    return v4;
  switch ( a1 )
  {
    case 2:
      if ( a2 == 2 )
      {
        if ( (unsigned int)dword_1404029DC < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_1404029D8 )
            dword_1404029D8 = TelemetryCoverageStringHashInternal(off_1404029D0, &v32);
          v6 = &off_1404029D0;
          goto LABEL_66;
        }
      }
      else if ( (unsigned int)dword_1404029AC < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_1404029A8 )
          dword_1404029A8 = TelemetryCoverageStringHashInternal(off_1404029A0, &v33);
        v6 = &off_1404029A0;
        goto LABEL_66;
      }
      break;
    case 3:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_1404029C4 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_1404029C0 )
              dword_1404029C0 = TelemetryCoverageStringHashInternal(off_1404029B8, &v37);
            v6 = &off_1404029B8;
            goto LABEL_66;
          }
          break;
        case 4:
          if ( (unsigned int)dword_14040297C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140402978 )
              dword_140402978 = TelemetryCoverageStringHashInternal(off_140402970, &v36);
            v6 = &off_140402970;
            goto LABEL_66;
          }
          break;
        case 5:
          if ( (unsigned int)dword_140402994 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140402990 )
              dword_140402990 = TelemetryCoverageStringHashInternal(off_140402988, &v35);
            v6 = &off_140402988;
            goto LABEL_66;
          }
          break;
        case 6:
          if ( (unsigned int)dword_14040294C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140402948 )
              dword_140402948 = TelemetryCoverageStringHashInternal(off_140402940, &v40);
            v6 = &off_140402940;
            goto LABEL_66;
          }
          break;
        default:
          if ( a2 == 8 && (unsigned int)dword_140402964 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140402960 )
              dword_140402960 = TelemetryCoverageStringHashInternal(off_140402958, &v39);
            v6 = &off_140402958;
            goto LABEL_66;
          }
          break;
      }
      break;
    case 4:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_14040291C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140402918 )
              dword_140402918 = TelemetryCoverageStringHashInternal(off_140402910, &v38);
            v6 = &off_140402910;
            goto LABEL_66;
          }
          break;
        case 4:
          if ( (unsigned int)dword_140402934 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140402930 )
              dword_140402930 = TelemetryCoverageStringHashInternal(off_140402928, &v19);
            v6 = &off_140402928;
            goto LABEL_66;
          }
          break;
        case 5:
          if ( (unsigned int)dword_1404028EC < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_1404028E8 )
              dword_1404028E8 = TelemetryCoverageStringHashInternal(off_1404028E0, &v20);
            v6 = &off_1404028E0;
            goto LABEL_66;
          }
          break;
        case 6:
          if ( (unsigned int)dword_140402904 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140402900 )
              dword_140402900 = TelemetryCoverageStringHashInternal(off_1404028F8, &v21);
            v6 = &off_1404028F8;
            goto LABEL_66;
          }
          break;
        default:
          if ( a2 == 8 && (unsigned int)dword_1404028D4 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_1404028D0 )
              dword_1404028D0 = TelemetryCoverageStringHashInternal(off_1404028C8, &v22);
            v6 = &off_1404028C8;
LABEL_66:
            EtwTelemetryCoverageReport(v6);
          }
          break;
      }
      break;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v4 = dword_140417828;
  if ( a1 != 5 || dword_1404177F0 == 1 || (unsigned int)(dword_1404177F0 - 4) <= 1 )
  {
    v8 = (KiQueryUnbiasedInterruptTime() - qword_140417808) / 0x2710uLL;
    v9 = v8 - qword_140417818;
    v10 = (MEMORY[0xFFFFF78000000008] - qword_140417800) / 0x2710uLL;
    qword_140417818 = v8;
    v11 = v10 - qword_140417810;
    v33 = v10 - qword_140417810;
    v12 = v10 - qword_140417810;
    qword_140417810 = v10;
    if ( v9 <= v11 )
      v12 = v9;
    v32 = v12;
    v21 = v7 + dword_140417820;
    dword_140417820 += v7;
    v19 = dword_1404177F0;
    v20 = dword_1404177F4;
    if ( a1 != 5 )
    {
      dword_140417824 += v7;
      dword_1404177F0 = a1;
      dword_1404177F4 = a2;
    }
    if ( a1 == v7 || a1 == 4 )
      dword_140417828 += v7;
    v4 = dword_140417828;
    v22 = dword_140417824;
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
    PopCurrentPowerState(v48);
    v13 = 0;
    Size = v48[0].Size;
    if ( v48[0].Size )
      v13 = 100 * v48[0].Reserved / v48[0].Size;
    PopMeasureEnergyChange(&v46, &OsStateChangeEnergyCounter);
    v34 = qword_1404177F8;
    if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
    {
      v41 = v33;
      v15 = a1;
      v16 = a2;
      v23 = MEMORY[0xFFFFF780000002C4];
      v42 = v32;
      LOWORD(v17) = v19;
      LOWORD(v18) = v20;
      v24 = v21;
      v25 = v22;
      v45 = v47;
      v29 = v46;
      Ptr_low = LOBYTE(v48[0].Ptr);
      LODWORD(v31) = BYTE3(v48[0].Ptr);
      v50 = &v15;
      v52 = &v16;
      v54 = &v41;
      v56 = &v23;
      v58 = &v34;
      v60 = &v42;
      v62 = &v43;
      v64 = &v44;
      v66 = &v17;
      v68 = &v18;
      v70 = &v24;
      v72 = &v25;
      v74 = &v26;
      v76 = &v27;
      v78 = &v28;
      v80 = &v45;
      v82 = &v29;
      v43 = v10;
      v44 = v8;
      v26 = v4;
      v27 = Size;
      v28 = v13;
      v51 = 2LL;
      v53 = 2LL;
      v55 = 8LL;
      v57 = 4LL;
      v59 = 8LL;
      v61 = 8LL;
      v63 = 8LL;
      v65 = 8LL;
      v67 = 2LL;
      v69 = 2LL;
      v71 = 4LL;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 8LL;
      v83 = 4LL;
      p_Ptr_low = &Ptr_low;
      v86 = &v31;
      v85 = 4LL;
      v87 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14037117A, 0LL, 0LL, 0x15u, &pData);
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  }
  return v4;
}
