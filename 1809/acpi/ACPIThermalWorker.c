/*
 * XREFs of ACPIThermalWorker @ 0x1C0097860
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIThermalLoop @ 0x1C0012500 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C0012DD4 (WPP_RECORDER_SF_ddqssdddd.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C001424C (WPP_RECORDER_SF_dqssdddd.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C00143B4 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0014550 (ACPIThermalUpdateConstraints.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIThermalStopZoneWorker @ 0x1C005DFB8 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C008F5E0 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0095A5C (ACPIThermalGetOverrideHandle.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C00975C0 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C0097674 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalGetParameter @ 0x1C00985F4 (ACPIThermalGetParameter.c)
 *     ACPIThermalReadTemperature @ 0x1C00B16F8 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(union _LARGE_INTEGER *a1, int a2)
{
  int v2; // r15d
  LONG result; // eax
  union _LARGE_INTEGER v5; // rdi
  __int64 *QuadPart; // r14
  void *OverrideHandle; // r13
  union _LARGE_INTEGER v8; // rax
  char *v9; // r12
  char *v10; // r14
  union _LARGE_INTEGER v11; // rax
  char *v12; // r12
  char *v13; // r14
  union _LARGE_INTEGER v14; // rax
  int v15; // eax
  char *v16; // r12
  char *v17; // r14
  union _LARGE_INTEGER v18; // rax
  union _LARGE_INTEGER v19; // r15
  __int64 v20; // r14
  union _LARGE_INTEGER v21; // rax
  int Parameter; // eax
  unsigned __int64 v23; // r14
  char *v24; // r12
  union _LARGE_INTEGER v25; // rax
  char *v26; // r14
  union _LARGE_INTEGER v27; // rax
  int v28; // eax
  unsigned __int64 v29; // r14
  union _LARGE_INTEGER v30; // rax
  char *v31; // r12
  char *v32; // r14
  union _LARGE_INTEGER v33; // rax
  int v34; // eax
  unsigned int v35; // esi
  __int64 *v36; // rax
  __int64 v37; // r12
  __int64 *v38; // rax
  __int64 v39; // rsi
  __int64 *v40; // rax
  __int64 v41; // rsi
  _WORD *v42; // r8
  _WORD *v43; // rax
  __int64 v44; // r9
  signed int v45; // edx
  __int16 v46; // cx
  __int16 v47; // cx
  __int64 *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // [rsp+28h] [rbp-E0h]
  int v57; // [rsp+28h] [rbp-E0h]
  int v58; // [rsp+28h] [rbp-E0h]
  int v59; // [rsp+28h] [rbp-E0h]
  int v60; // [rsp+28h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-E0h]
  int v62; // [rsp+28h] [rbp-E0h]
  int v63; // [rsp+28h] [rbp-E0h]
  int v64; // [rsp+28h] [rbp-E0h]
  int v65; // [rsp+28h] [rbp-E0h]
  int v66; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER v68; // [rsp+90h] [rbp-78h] BYREF
  int v69; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  union _LARGE_INTEGER Time; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v72; // [rsp+B0h] [rbp-58h] BYREF
  int v73; // [rsp+B4h] [rbp-54h]
  __int64 v74; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER v75; // [rsp+C0h] [rbp-48h] BYREF
  union _LARGE_INTEGER v76; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v77; // [rsp+D0h] [rbp-38h] BYREF
  union _LARGE_INTEGER v78; // [rsp+D8h] [rbp-30h] BYREF
  union _LARGE_INTEGER v79; // [rsp+E0h] [rbp-28h] BYREF
  union _LARGE_INTEGER v80; // [rsp+E8h] [rbp-20h] BYREF
  union _LARGE_INTEGER v81; // [rsp+F0h] [rbp-18h] BYREF
  union _LARGE_INTEGER v82; // [rsp+F8h] [rbp-10h] BYREF
  union _LARGE_INTEGER v83; // [rsp+100h] [rbp-8h] BYREF
  union _LARGE_INTEGER v84; // [rsp+108h] [rbp+0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+110h] [rbp+8h] BYREF
  __int128 v86; // [rsp+118h] [rbp+10h] BYREF
  __int128 v87; // [rsp+128h] [rbp+20h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+138h] [rbp+30h] BYREF
  struct _TIME_FIELDS v89; // [rsp+148h] [rbp+40h] BYREF
  struct _TIME_FIELDS v90; // [rsp+158h] [rbp+50h] BYREF
  struct _TIME_FIELDS v91; // [rsp+168h] [rbp+60h] BYREF
  struct _TIME_FIELDS v92; // [rsp+178h] [rbp+70h] BYREF
  struct _TIME_FIELDS v93; // [rsp+188h] [rbp+80h] BYREF
  struct _TIME_FIELDS v94; // [rsp+198h] [rbp+90h] BYREF
  struct _TIME_FIELDS v95; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _TIME_FIELDS v96; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _TIME_FIELDS v97; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _TIME_FIELDS v98; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _TIME_FIELDS v99; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v100[48]; // [rsp+1F8h] [rbp+F0h] BYREF
  _DWORD v101[10]; // [rsp+228h] [rbp+120h] BYREF
  _DWORD v102[10]; // [rsp+250h] [rbp+148h] BYREF

  v69 = a2;
  v2 = a2;
  result = MEMORY[0xFFFFF78000000008];
  v68.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker((__int64)a1);
  if ( (a1[24].LowPart & 0x8000000) == 0 )
  {
    v5 = a1[25];
    QuadPart = (__int64 *)a1[89].QuadPart;
    v73 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5.QuadPart + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v101, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v101));
    *(_BYTE *)(v5.QuadPart + 273) = (int)ACPIThermalCheckPolicySupport((__int64)a1) >= 0;
    v34 = ACPIThermalCheckNativeTemperatureSupport((__int64)a1);
    *(_DWORD *)(v5.QuadPart + 100) = 1;
    v35 = 0;
    *(_BYTE *)(v5.QuadPart + 274) = v34 >= 0;
    do
    {
      v36 = AMLIGetNamedChild(QuadPart, v101[v35]);
      v37 = (__int64)v36;
      if ( !v36 )
        break;
      ACPIThermalBuildConstraints((unsigned __int64 *)v36, (__int64)a1, 0, v35);
      AMLIDereferenceHandleEx(v37);
      ++v35;
    }
    while ( v35 < 0xA );
    v38 = AMLIGetNamedChild(QuadPart, 1280528479);
    v2 = v69;
    v39 = (__int64)v38;
    if ( v38 )
    {
      ACPIThermalBuildConstraints((unsigned __int64 *)v38, (__int64)a1, 1, 1u);
      AMLIDereferenceHandleEx(v39);
    }
    v40 = AMLIGetNamedChild(QuadPart, 1146770527);
    v41 = (__int64)v40;
    if ( v40 )
    {
      ACPIThermalBuildConstraints((unsigned __int64 *)v40, (__int64)a1, 1, 0);
      AMLIDereferenceHandleEx(v41);
    }
    *(_QWORD *)(v5.QuadPart + 120) = AMLIGetNamedChild(QuadPart, 1230259295);
    P = 0LL;
    if ( (int)ACPIGet((__int64 *)a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v72) < 0 )
      goto LABEL_7;
    if ( v72 <= 2 || (v72 & 1) != 0 )
      goto LABEL_74;
    v42 = P;
    if ( *((_WORD *)P + ((unsigned __int64)v72 >> 1) - 1) )
      goto LABEL_75;
    *(_QWORD *)(v5.QuadPart + 304) = 0LL;
    *(_QWORD *)(v5.QuadPart + 312) = 0LL;
    if ( !v42 )
      goto LABEL_73;
    v43 = v42;
    v44 = 0x7FFFLL;
    do
    {
      if ( !*v43 )
        break;
      ++v43;
      --v44;
    }
    while ( v44 );
    v45 = v44 == 0 ? 0xC000000D : 0;
    if ( v44 )
      v46 = 0x7FFF - v44;
    else
      v46 = 0;
    if ( v44 )
    {
      if ( v5.QuadPart == -304 )
      {
        v45 = -1073741811;
      }
      else
      {
        v47 = 2 * v46;
        *(_QWORD *)(v5.QuadPart + 312) = v42;
        *(_WORD *)(v5.QuadPart + 304) = v47;
        *(_WORD *)(v5.QuadPart + 306) = v47 + 2;
      }
    }
    if ( v45 < 0 )
    {
LABEL_74:
      v42 = P;
    }
    else
    {
LABEL_73:
      v42 = 0LL;
      P = 0LL;
    }
LABEL_75:
    if ( v42 )
      ExFreePoolWithTag(v42, 0);
LABEL_7:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints((__int64)a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v102, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v102));
      OverrideHandle = ACPIThermalGetOverrideHandle((__int64)a1);
      ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v67);
      v8 = v68;
      *(_DWORD *)(v5.QuadPart + 4) = v67;
      v9 = byte_1C006E28A;
      Time = v8;
      v10 = byte_1C006E28A;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v11 = a1[1];
      if ( (v11.QuadPart & 0x200000000000LL) != 0 )
      {
        v9 = (char *)a1[70].QuadPart;
        if ( (v11.QuadPart & 0x400000000000LL) != 0 )
          v10 = (char *)a1[71].QuadPart;
      }
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)TimeFields.Minute,
        (unsigned int)TimeFields.Hour,
        0x17u,
        v56,
        *(_DWORD *)(v5.QuadPart + 4),
        (char)a1,
        (__int64)v9,
        (__int64)v10);
      ACPIThermalGetParameter(a1, OverrideHandle, 843273311LL, &v67);
      *(_DWORD *)(v5.QuadPart + 8) = v67;
      v12 = byte_1C006E28A;
      v75 = v68;
      v13 = byte_1C006E28A;
      RtlTimeToTimeFields(&v75, &v89);
      v14 = a1[1];
      if ( (v14.QuadPart & 0x200000000000LL) != 0 )
      {
        v12 = (char *)a1[70].QuadPart;
        if ( (v14.QuadPart & 0x400000000000LL) != 0 )
          v13 = (char *)a1[71].QuadPart;
      }
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v89.Minute,
        (unsigned int)v89.Hour,
        0x18u,
        v57,
        *(_DWORD *)(v5.QuadPart + 8),
        (char)a1,
        (__int64)v12,
        (__int64)v13);
      ACPIThermalGetParameter(a1, OverrideHandle, 1448300639LL, &v67);
      *(_DWORD *)(v5.QuadPart + 20) = v67;
      v76 = v68;
      RtlTimeToTimeFields(&v76, &v90);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 20) / 0xAu,
        (unsigned int)v90.Minute,
        0x19u,
        v58);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414677343LL, &v67);
      *(_DWORD *)(v5.QuadPart + 28) = v67;
      v77 = v68;
      RtlTimeToTimeFields(&v77, &v91);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 28) / 0xAu,
        (unsigned int)v91.Minute,
        0x1Au,
        v59);
      if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, 1346786399LL, &v67) >= 0
        || (int)ACPIThermalGetParameter(a1, OverrideHandle, 1347638367LL, &v67) < 0 )
      {
        v15 = v67;
      }
      else
      {
        v15 = 100 * v67;
        v67 *= 100LL;
      }
      *(_DWORD *)(v5.QuadPart + 12) = v15;
      v78 = v68;
      v16 = byte_1C006E28A;
      v17 = byte_1C006E28A;
      RtlTimeToTimeFields(&v78, &v92);
      v18 = a1[1];
      if ( (v18.QuadPart & 0x200000000000LL) != 0 )
      {
        v16 = (char *)a1[70].QuadPart;
        if ( (v18.QuadPart & 0x400000000000LL) != 0 )
          v17 = (char *)a1[71].QuadPart;
      }
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v92.Minute,
        (unsigned int)v92.Hour,
        0x1Bu,
        v60,
        *(_DWORD *)(v5.QuadPart + 12),
        (char)a1,
        (__int64)v16,
        (__int64)v17);
      ACPIThermalGetParameter(a1, OverrideHandle, 861029215LL, &v67);
      *(_DWORD *)(v5.QuadPart + 24) = v67;
      v79 = v68;
      RtlTimeToTimeFields(&v79, &v93);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 24) / 0xAu,
        (unsigned int)v93.Minute,
        0x1Cu,
        v61);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414482015LL, &v67);
      *(_DWORD *)(v5.QuadPart + 76) = v67;
      v80 = v68;
      RtlTimeToTimeFields(&v80, &v94);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 76) / 0xAu,
        (unsigned int)v94.Minute,
        0x1Du,
        v62);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414811231LL, &v67);
      *(_DWORD *)(v5.QuadPart + 104) = v67;
      v81 = v68;
      RtlTimeToTimeFields(&v81, &v95);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 104) / 0xAu,
        (unsigned int)v95.Minute,
        0x1Eu,
        v63);
      v19 = v68;
      v20 = 0LL;
      do
      {
        if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, (unsigned int)v102[v20], &v67) < 0 )
          break;
        *(_DWORD *)(v5.QuadPart + 4 * v20 + 36) = v67;
        Time.QuadPart = (__int64)byte_1C006E28A;
        v82 = v19;
        RtlTimeToTimeFields(&v82, &v96);
        v21 = a1[1];
        if ( (v21.QuadPart & 0x200000000000LL) != 0 && (v21.QuadPart & 0x400000000000LL) != 0 )
          Time = a1[71];
        WPP_RECORDER_SF_Dddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 4 * v20 + 36) / 0xAu,
          (unsigned int)v96.Minute,
          (unsigned int)v96.Hour,
          v64);
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < 0xA );
      *(_BYTE *)(v5.QuadPart + 32) = v20;
      Parameter = ACPIThermalGetParameter(a1, OverrideHandle, 1280593247LL, &v67);
      v2 = v69;
      if ( Parameter < 0
        && (*(_DWORD *)(v5.QuadPart + 128) & 2) != 0
        && (memset(v100, 0, sizeof(v100)),
            v48 = (__int64 *)a1[89].QuadPart,
            v86 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v48, (__int64)&v86, 0, 1u, (__int64)v100, &v74) >= 0) )
      {
        if ( *(_WORD *)(v74 + 2) == 1 )
          v23 = *(unsigned int *)(v74 + 16);
        else
          v23 = v67;
        AMLIFreeDataBuffs(v74, v49, v50, v51);
      }
      else
      {
        v23 = v67;
      }
      v24 = byte_1C006E28A;
      if ( v23 > 0x64 )
        LODWORD(v23) = 100;
      v25 = v68;
      *(_DWORD *)(v5.QuadPart + 80) = v23;
      v26 = byte_1C006E28A;
      v83 = v25;
      RtlTimeToTimeFields(&v83, &v97);
      v27 = a1[1];
      if ( (v27.QuadPart & 0x200000000000LL) != 0 )
      {
        v24 = (char *)a1[70].QuadPart;
        if ( (v27.QuadPart & 0x400000000000LL) != 0 )
          v26 = (char *)a1[71].QuadPart;
      }
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v97.Minute,
        (unsigned int)v97.Hour,
        0x20u,
        v64,
        *(_DWORD *)(v5.QuadPart + 80),
        (char)a1,
        (__int64)v24,
        (__int64)v26);
      v28 = *(_DWORD *)(v5.QuadPart + 128);
      v29 = 0LL;
      v67 = 0LL;
      if ( (v28 & 8) != 0 )
      {
        memset(v100, 0, sizeof(v100));
        v52 = (__int64 *)a1[89].QuadPart;
        v87 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v52, (__int64)&v87, 0, 3u, (__int64)v100, &v74) >= 0 )
        {
          if ( *(_WORD *)(v74 + 2) == 1 )
            v29 = *(unsigned int *)(v74 + 16);
          AMLIFreeDataBuffs(v74, v53, v54, v55);
          if ( v29 > 0x64 )
            v29 = 100LL;
          v67 = v29;
        }
      }
      v30 = v68;
      *(_DWORD *)(v5.QuadPart + 84) = v29;
      v84 = v30;
      v31 = byte_1C006E28A;
      v32 = byte_1C006E28A;
      RtlTimeToTimeFields(&v84, &v98);
      v33 = a1[1];
      if ( (v33.QuadPart & 0x200000000000LL) != 0 )
      {
        v31 = (char *)a1[70].QuadPart;
        if ( (v33.QuadPart & 0x400000000000LL) != 0 )
          v32 = (char *)a1[71].QuadPart;
      }
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v98.Minute,
        (unsigned int)v98.Hour,
        0x21u,
        v65,
        *(_DWORD *)(v5.QuadPart + 84),
        (char)a1,
        (__int64)v31,
        (__int64)v32);
      ACPIThermalGetParameter(a1, OverrideHandle, 1348097119LL, &v67);
      *(_DWORD *)(v5.QuadPart + 88) = v67;
      RtlTimeToTimeFields(&v68, &v99);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 88) / 0xAu,
        (unsigned int)v99.Minute,
        0x22u,
        v66);
    }
    if ( v73 && *(_BYTE *)(v5.QuadPart + 272) )
    {
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( (v2 & 2) != 0 )
      ACPIThermalReadTemperature(a1, 1LL);
    if ( (v2 & 0x200) != 0 )
      ACPIThermalReadTemperature(a1, 0LL);
    return ACPIThermalLoop((__int64)a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
