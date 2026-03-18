/*
 * XREFs of ACPIThermalWorker @ 0x1C0091ED0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     ACPIThermalLoop @ 0x1C0008C3C (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C0009528 (WPP_RECORDER_SF_ddqssdddd.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C0009920 (WPP_RECORDER_SF_dqssdddd.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C0009A88 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0009C24 (ACPIThermalUpdateConstraints.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIThermalStopZoneWorker @ 0x1C005FE80 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C0091944 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C0091A0C (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalGetParameter @ 0x1C0092FF8 (ACPIThermalGetParameter.c)
 *     ACPIThermalBuildConstraints @ 0x1C0093090 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00933B4 (ACPIThermalGetOverrideHandle.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalReadTemperature @ 0x1C00B50C8 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(__int64 a1, int a2)
{
  int v2; // r12d
  LONG result; // eax
  __int64 v5; // rdi
  __int64 *v6; // r14
  int v7; // eax
  unsigned int v8; // esi
  __int64 *v9; // rax
  volatile signed __int32 *v10; // r15
  __int64 *v11; // rax
  __int64 v12; // r8
  volatile signed __int32 *v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // r8
  volatile signed __int32 *v16; // rsi
  _WORD *v17; // rcx
  _WORD *v18; // rax
  __int64 v19; // r9
  signed int v20; // r8d
  __int16 v21; // dx
  __int16 v22; // dx
  union _LARGE_INTEGER v23; // r13
  char *v24; // r15
  char *v25; // rsi
  __int64 v26; // rax
  char *v27; // r15
  char *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  char *v31; // r15
  char *v32; // rsi
  __int64 v33; // rax
  union _LARGE_INTEGER v34; // r13
  union _LARGE_INTEGER v35; // r12
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  union _LARGE_INTEGER v40; // r13
  char *v41; // r15
  char *v42; // rsi
  __int64 v43; // rax
  int v44; // eax
  unsigned __int64 v45; // rsi
  __int64 v46; // rcx
  char *v47; // r15
  char *v48; // rsi
  __int64 v49; // rax
  int Timeout; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER v52; // [rsp+90h] [rbp-78h]
  int v53; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  union _LARGE_INTEGER v55; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v56; // [rsp+B0h] [rbp-58h] BYREF
  int v57; // [rsp+B4h] [rbp-54h]
  _QWORD *v58; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp-48h] BYREF
  union _LARGE_INTEGER Time; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v61; // [rsp+D0h] [rbp-38h] BYREF
  union _LARGE_INTEGER v62; // [rsp+D8h] [rbp-30h] BYREF
  union _LARGE_INTEGER v63; // [rsp+E0h] [rbp-28h] BYREF
  union _LARGE_INTEGER v64; // [rsp+E8h] [rbp-20h] BYREF
  union _LARGE_INTEGER v65; // [rsp+F0h] [rbp-18h] BYREF
  union _LARGE_INTEGER v66; // [rsp+F8h] [rbp-10h] BYREF
  union _LARGE_INTEGER v67; // [rsp+100h] [rbp-8h] BYREF
  union _LARGE_INTEGER v68; // [rsp+108h] [rbp+0h] BYREF
  union _LARGE_INTEGER v69; // [rsp+110h] [rbp+8h] BYREF
  union _LARGE_INTEGER v70; // [rsp+118h] [rbp+10h] BYREF
  __int128 v71; // [rsp+128h] [rbp+20h] BYREF
  __int128 v72; // [rsp+138h] [rbp+30h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+148h] [rbp+40h] BYREF
  struct _TIME_FIELDS v74; // [rsp+158h] [rbp+50h] BYREF
  struct _TIME_FIELDS v75; // [rsp+168h] [rbp+60h] BYREF
  struct _TIME_FIELDS v76; // [rsp+178h] [rbp+70h] BYREF
  struct _TIME_FIELDS v77; // [rsp+188h] [rbp+80h] BYREF
  struct _TIME_FIELDS v78; // [rsp+198h] [rbp+90h] BYREF
  struct _TIME_FIELDS v79; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _TIME_FIELDS v80; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _TIME_FIELDS v81; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _TIME_FIELDS v82; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _TIME_FIELDS v83; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _TIME_FIELDS v84; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v85[48]; // [rsp+208h] [rbp+100h] BYREF
  _DWORD v86[10]; // [rsp+238h] [rbp+130h] BYREF
  _DWORD v87[10]; // [rsp+260h] [rbp+158h] BYREF

  v53 = a2;
  v2 = a2;
  Interval.QuadPart = 0LL;
  memset(v85, 0, sizeof(v85));
  result = MEMORY[0xFFFFF78000000008];
  v52.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (v2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x8000000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 200);
    v6 = *(__int64 **)(a1 + 712);
    v57 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5 + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_34;
    qmemcpy(v86, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v86));
    *(_BYTE *)(v5 + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v7 = ACPIThermalCheckNativeTemperatureSupport(a1);
    *(_DWORD *)(v5 + 100) = 1;
    v8 = 0;
    *(_BYTE *)(v5 + 274) = v7 >= 0;
    do
    {
      v9 = AMLIGetNamedChild(v6, v86[v8]);
      v10 = (volatile signed __int32 *)v9;
      if ( !v9 )
        break;
      ACPIThermalBuildConstraints(v9, a1, 0LL, v8);
      AMLIDereferenceHandleEx(v10);
      ++v8;
    }
    while ( v8 < 0xA );
    v11 = AMLIGetNamedChild(v6, 1280528479);
    v2 = v53;
    v13 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      LOBYTE(v12) = 1;
      ACPIThermalBuildConstraints(v11, a1, v12, 1LL);
      AMLIDereferenceHandleEx(v13);
      *(_BYTE *)(v5 + 33) = 1;
    }
    v14 = AMLIGetNamedChild(v6, 1146770527);
    v16 = (volatile signed __int32 *)v14;
    if ( v14 )
    {
      LOBYTE(v15) = 1;
      ACPIThermalBuildConstraints(v14, a1, v15, 0LL);
      AMLIDereferenceHandleEx(v16);
      *(_BYTE *)(v5 + 33) = 1;
    }
    *(_QWORD *)(v5 + 120) = AMLIGetNamedChild(v6, 1230259295);
    P = 0LL;
    if ( (int)ACPIGet((__int64 *)a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v56) < 0 )
      goto LABEL_34;
    if ( v56 <= 2 || (v56 & 1) != 0 )
      goto LABEL_31;
    v17 = P;
    if ( *((_WORD *)P + ((unsigned __int64)v56 >> 1) - 1) )
      goto LABEL_32;
    *(_QWORD *)(v5 + 304) = 0LL;
    *(_QWORD *)(v5 + 312) = 0LL;
    if ( !v17 )
      goto LABEL_30;
    v18 = v17;
    v19 = 0x7FFFLL;
    do
    {
      if ( !*v18 )
        break;
      ++v18;
      --v19;
    }
    while ( v19 );
    v20 = v19 == 0 ? 0xC000000D : 0;
    if ( v19 )
      v21 = 0x7FFF - v19;
    else
      v21 = 0;
    if ( v19 )
    {
      if ( v5 == -304 )
      {
        v20 = -1073741811;
      }
      else
      {
        v22 = 2 * v21;
        *(_QWORD *)(v5 + 312) = v17;
        *(_WORD *)(v5 + 304) = v22;
        *(_WORD *)(v5 + 306) = v22 + 2;
      }
    }
    if ( v20 < 0 )
    {
LABEL_31:
      v17 = P;
    }
    else
    {
LABEL_30:
      v17 = 0LL;
      P = 0LL;
    }
LABEL_32:
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
LABEL_34:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints(a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v87, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v87));
      v55.QuadPart = ACPIThermalGetOverrideHandle(a1);
      v23 = v55;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v55.QuadPart,
        826496095LL,
        &v51);
      *(_DWORD *)(v5 + 4) = v51;
      *(_QWORD *)&TimeFields.Year = 0LL;
      *(_QWORD *)&TimeFields.Minute = 0LL;
      v24 = byte_1C006FE7D;
      Time = v52;
      v25 = byte_1C006FE7D;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v26 = *(_QWORD *)(a1 + 8);
      if ( (v26 & 0x200000000000LL) != 0 )
      {
        v24 = *(char **)(a1 + 560);
        if ( (v26 & 0x400000000000LL) != 0 )
          v25 = *(char **)(a1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x17u,
          Timeout,
          *(_DWORD *)(v5 + 4),
          a1,
          (__int64)v24,
          (__int64)v25);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v23.QuadPart,
        843273311LL,
        &v51);
      *(_DWORD *)(v5 + 8) = v51;
      v27 = byte_1C006FE7D;
      *(_QWORD *)&v74.Year = 0LL;
      v28 = byte_1C006FE7D;
      *(_QWORD *)&v74.Minute = 0LL;
      v61 = v52;
      RtlTimeToTimeFields(&v61, &v74);
      v29 = *(_QWORD *)(a1 + 8);
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v27 = *(char **)(a1 + 560);
        if ( (v29 & 0x400000000000LL) != 0 )
          v28 = *(char **)(a1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v74.Minute,
          (unsigned int)v74.Hour,
          0x18u,
          Timeout,
          *(_DWORD *)(v5 + 8),
          a1,
          (__int64)v27,
          (__int64)v28);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v23.QuadPart,
        1448300639LL,
        &v51);
      *(_DWORD *)(v5 + 20) = v51;
      *(_QWORD *)&v75.Year = 0LL;
      *(_QWORD *)&v75.Minute = 0LL;
      v62 = v52;
      RtlTimeToTimeFields(&v62, &v75);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 20) / 0xAu,
          (unsigned int)v75.Minute,
          0x19u,
          Timeout);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v23.QuadPart,
        1414677343LL,
        &v51);
      *(_DWORD *)(v5 + 28) = v51;
      *(_QWORD *)&v76.Year = 0LL;
      *(_QWORD *)&v76.Minute = 0LL;
      v63 = v52;
      RtlTimeToTimeFields(&v63, &v76);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 28) / 0xAu,
          (unsigned int)v76.Minute,
          0x1Au,
          Timeout);
      if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
                  a1,
                  (union _LARGE_INTEGER)v23.QuadPart,
                  1346786399LL,
                  &v51) >= 0
        || (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
                  a1,
                  (union _LARGE_INTEGER)v23.QuadPart,
                  1347638367LL,
                  &v51) < 0 )
      {
        v30 = v51;
      }
      else
      {
        v30 = 100 * v51;
        v51 *= 100LL;
      }
      *(_DWORD *)(v5 + 12) = v30;
      *(_QWORD *)&v77.Year = 0LL;
      v31 = byte_1C006FE7D;
      *(_QWORD *)&v77.Minute = 0LL;
      v32 = byte_1C006FE7D;
      v64 = v52;
      RtlTimeToTimeFields(&v64, &v77);
      v33 = *(_QWORD *)(a1 + 8);
      if ( (v33 & 0x200000000000LL) != 0 )
      {
        v31 = *(char **)(a1 + 560);
        if ( (v33 & 0x400000000000LL) != 0 )
          v32 = *(char **)(a1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v77.Minute,
          (unsigned int)v77.Hour,
          0x1Bu,
          Timeout,
          *(_DWORD *)(v5 + 12),
          a1,
          (__int64)v31,
          (__int64)v32);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v23.QuadPart,
        861029215LL,
        &v51);
      *(_DWORD *)(v5 + 24) = v51;
      *(_QWORD *)&v78.Year = 0LL;
      *(_QWORD *)&v78.Minute = 0LL;
      v65 = v52;
      RtlTimeToTimeFields(&v65, &v78);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 24) / 0xAu,
          (unsigned int)v78.Minute,
          0x1Cu,
          Timeout);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v23.QuadPart,
        1414482015LL,
        &v51);
      *(_DWORD *)(v5 + 76) = v51;
      *(_QWORD *)&v79.Year = 0LL;
      *(_QWORD *)&v79.Minute = 0LL;
      v66 = v52;
      RtlTimeToTimeFields(&v66, &v79);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 76) / 0xAu,
          (unsigned int)v79.Minute,
          0x1Du,
          Timeout);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v23.QuadPart,
        1414811231LL,
        &v51);
      v34 = v52;
      *(_DWORD *)(v5 + 104) = v51;
      v67 = v34;
      *(_QWORD *)&v80.Year = 0LL;
      *(_QWORD *)&v80.Minute = 0LL;
      RtlTimeToTimeFields(&v67, &v80);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 104) / 0xAu,
          (unsigned int)v80.Minute,
          0x1Eu,
          Timeout);
      v35 = v55;
      v36 = 0LL;
      do
      {
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
                    a1,
                    (union _LARGE_INTEGER)v35.QuadPart,
                    (unsigned int)v87[v36],
                    &v51) < 0 )
          break;
        *(_DWORD *)(v5 + 4 * v36 + 36) = v51;
        *(_QWORD *)&v81.Year = 0LL;
        *(_QWORD *)&v81.Minute = 0LL;
        v68 = v52;
        RtlTimeToTimeFields(&v68, &v81);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dddqssdddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(_DWORD *)(v5 + 4 * v36 + 36) / 0xAu,
            (unsigned int)v81.Minute,
            (unsigned int)v81.Hour,
            Timeout);
        v36 = (unsigned int)(v36 + 1);
      }
      while ( (unsigned int)v36 < 0xA );
      *(_BYTE *)(v5 + 32) = v36;
      v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
              a1,
              (union _LARGE_INTEGER)v35.QuadPart,
              1280593247LL,
              &v51);
      v2 = v53;
      if ( v37 < 0
        && (*(_DWORD *)(v5 + 128) & 2) != 0
        && (memset(v85, 0, sizeof(v85)),
            v38 = *(_QWORD *)(a1 + 712),
            v71 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v38, (unsigned int)&v71, 0, 1, (__int64)v85, (__int64)&v58) >= 0) )
      {
        if ( *((_WORD *)v58 + 1) == 1 )
          v39 = *((unsigned int *)v58 + 4);
        else
          v39 = v51;
        AMLIFreeDataBuffs(v58);
      }
      else
      {
        v39 = v51;
      }
      v40 = v52;
      v69 = v52;
      v41 = byte_1C006FE7D;
      if ( v39 > 0x64 )
        LODWORD(v39) = 100;
      *(_DWORD *)(v5 + 80) = v39;
      v42 = byte_1C006FE7D;
      *(_QWORD *)&v82.Year = 0LL;
      *(_QWORD *)&v82.Minute = 0LL;
      RtlTimeToTimeFields(&v69, &v82);
      v43 = *(_QWORD *)(a1 + 8);
      if ( (v43 & 0x200000000000LL) != 0 )
      {
        v41 = *(char **)(a1 + 560);
        if ( (v43 & 0x400000000000LL) != 0 )
          v42 = *(char **)(a1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v82.Minute,
          (unsigned int)v82.Hour,
          0x20u,
          Timeout,
          *(_DWORD *)(v5 + 80),
          a1,
          (__int64)v41,
          (__int64)v42);
      v44 = *(_DWORD *)(v5 + 128);
      v45 = 0LL;
      v51 = 0LL;
      if ( (v44 & 8) != 0 )
      {
        memset(v85, 0, sizeof(v85));
        v46 = *(_QWORD *)(a1 + 712);
        v72 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v46, (unsigned int)&v72, 0, 3, (__int64)v85, (__int64)&v58) >= 0 )
        {
          if ( *((_WORD *)v58 + 1) == 1 )
            v45 = *((unsigned int *)v58 + 4);
          AMLIFreeDataBuffs(v58);
          if ( v45 > 0x64 )
            v45 = 100LL;
          v51 = v45;
        }
      }
      *(_DWORD *)(v5 + 84) = v45;
      *(_QWORD *)&v83.Year = 0LL;
      *(_QWORD *)&v83.Minute = 0LL;
      v47 = byte_1C006FE7D;
      v70 = v40;
      v48 = byte_1C006FE7D;
      RtlTimeToTimeFields(&v70, &v83);
      v49 = *(_QWORD *)(a1 + 8);
      if ( (v49 & 0x200000000000LL) != 0 )
      {
        v47 = *(char **)(a1 + 560);
        if ( (v49 & 0x400000000000LL) != 0 )
          v48 = *(char **)(a1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v83.Minute,
          (unsigned int)v83.Hour,
          0x21u,
          Timeout,
          *(_DWORD *)(v5 + 84),
          a1,
          (__int64)v47,
          (__int64)v48);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v55.QuadPart,
        1348097119LL,
        &v51);
      *(_DWORD *)(v5 + 88) = v51;
      *(_QWORD *)&v84.Year = 0LL;
      *(_QWORD *)&v84.Minute = 0LL;
      v55 = v40;
      RtlTimeToTimeFields(&v55, &v84);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 88) / 0xAu,
          (unsigned int)v84.Minute,
          0x22u,
          Timeout);
    }
    if ( v57 )
    {
      if ( *(_BYTE *)(v5 + 272) )
      {
        Interval.QuadPart = -10000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      KeWaitForSingleObject((PVOID)(v5 + 248), Executive, 0, 0, 0LL);
      ACPIThermalLoop(a1, 0x4000000LL);
      if ( (v2 & 2) != 0 )
        ACPIThermalReadTemperature(a1, 1LL);
      if ( (v2 & 0x200) != 0 )
        ACPIThermalReadTemperature(a1, 0LL);
    }
    return ACPIThermalLoop(a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
