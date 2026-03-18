/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C013B548
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C0031C04 (RIMIsRunningOnDesktop.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     RIMGetQDCActivePathsData @ 0x1C0046020 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0051738 (RIMFreeQDCActivePathsData.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A56B8 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013835C (RimDeviceTypeToRimInputTypeString.c)
 *     rimSetupPalmTelemetry @ 0x1C013ACE0 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C013B0DC (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C013B518 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C013CD28 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C013CFF0 (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C013D2F0 (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013D458 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C013DE8C (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C013E0D4 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C013E398 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C013E560 (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C013E6C0 (RIMIsEssentialUsage.c)
 *     RIMGetDeviceParent @ 0x1C0141278 (RIMGetDeviceParent.c)
 *     RIMIsInputUsagePresent @ 0x1C01414D8 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0143D70 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0143E7C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0144A88 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C014AA6C (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0159664 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C015A8E4 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C015A9DC (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C015B15C (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0177C9C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C019E350 (ApiSetRetrieveCalibrationData.c)
 *     ApiSetValidateDeviceSignature @ 0x1C019F130 (ApiSetValidateDeviceSignature.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v7; // r15
  _DWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v14; // r14
  int v15; // eax
  void *v16; // rdx
  const wchar_t *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r14d
  int v24; // edx
  int SpecificValueCaps; // eax
  int v26; // esi
  const wchar_t *v27; // rax
  UINT32 v28; // r10d
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rcx
  int v34; // ecx
  const wchar_t *v35; // rax
  UINT32 v36; // r10d
  const wchar_t *v37; // rax
  UINT32 v38; // r10d
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  _BYTE *v43; // rdx
  __int64 v44; // r8
  unsigned int v45; // eax
  unsigned int i; // r9d
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // xmm0_8
  __int64 v50; // r9
  __m128i *v51; // r14
  __int16 v52; // r15
  unsigned __int16 v53; // r15
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  __m128i v57; // xmm1
  __m128i v58; // xmm0
  __m128i v59; // xmm1
  __int16 v60; // ax
  __m128i v61; // xmm5
  __int64 v62; // xmm0_8
  __m128i v63; // xmm2
  __m128i v64; // xmm3
  __m128i v65; // xmm4
  struct _EVENT_DATA_DESCRIPTOR v66; // xmm5
  ULONGLONG v67; // xmm0_8
  EVENT_DATA_DESCRIPTOR v68; // xmm2
  __m128i v69; // xmm3
  struct _EVENT_DATA_DESCRIPTOR v70; // xmm4
  bool v71; // cf
  unsigned int *v72; // rax
  __int64 v73; // r8
  int v74; // ecx
  unsigned int *v75; // rsi
  __int64 *v76; // xmm0_8
  int v77; // edx
  const wchar_t *v78; // rax
  UINT32 v79; // r10d
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 *v83; // xmm0_8
  const wchar_t *v84; // rax
  UINT32 v85; // r10d
  __int64 v86; // rdx
  const wchar_t *v87; // rax
  UINT32 v88; // r10d
  const wchar_t *v89; // rax
  UINT32 v90; // r10d
  __int64 v91; // rcx
  int v92; // edx
  int cData; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v94; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v95; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v96[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v97; // [rsp+54h] [rbp-ACh]
  int v98; // [rsp+58h] [rbp-A8h] BYREF
  int v99; // [rsp+5Ch] [rbp-A4h]
  int v100; // [rsp+60h] [rbp-A0h]
  unsigned int v101; // [rsp+64h] [rbp-9Ch]
  __m128i *v102; // [rsp+68h] [rbp-98h]
  __int64 v103; // [rsp+70h] [rbp-90h]
  __int64 *v104; // [rsp+80h] [rbp-80h] BYREF
  int v105; // [rsp+88h] [rbp-78h]
  unsigned int v106; // [rsp+90h] [rbp-70h]
  __int64 v107; // [rsp+98h] [rbp-68h]
  __int64 v108; // [rsp+A0h] [rbp-60h]
  unsigned int *v109; // [rsp+A8h] [rbp-58h]
  __int128 v110; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v111[2]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v112[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v113; // [rsp+110h] [rbp+10h]
  _OWORD v114[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v115; // [rsp+160h] [rbp+60h]
  _DWORD v116[20]; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  __m128i v118; // [rsp+1D0h] [rbp+D0h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v122[144]; // [rsp+210h] [rbp+110h] BYREF

  v7 = a3;
  v100 = -1;
  v98 = -1;
  v103 = a5;
  v107 = a3;
  v95 = a1;
  v104 = a7;
  v108 = a6;
  v102 = 0LL;
  v94 = 0;
  memset(v122, 0, sizeof(v122));
  v96[0] = 0;
  v111[0] = 0LL;
  v111[1] = 0LL;
  v101 = 0;
  v109 = 0LL;
  memset(v116, 0, 0x48uLL);
  v11 = Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225628LL;
  v14 = v103;
  v11[180] = 1;
  *((_QWORD *)v11 + 109) = v11 + 216;
  *((_QWORD *)v11 + 108) = v11 + 216;
  v15 = RIMGetProductString(v11, v14, a6);
  v16 = &WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v16, 1, 14, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
    if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
    {
      v17 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
      TlgCreateWsz(&pDesc, v17);
      TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
      TlgCreateWsz(&v121, L"Failed to retrieve productString");
      TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, 5u, &pData);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(v14, a2 + 2104) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  v21 = *a4;
  v110 = *(_OWORD *)(v12 + 320);
  if ( (unsigned int)RIMIsDeviceExcluded(v21, &v110) )
    goto LABEL_20;
  v22 = *(_DWORD *)(a1 + 84);
  v23 = 1;
  if ( (v22 & 4) == 0 )
    goto LABEL_43;
  if ( *a4 == 2 )
  {
    *(_DWORD *)(v12 + 24) = 5;
    rimSetupPalmTelemetry(a1);
    if ( (int)RIMInitializeDeadzone() < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 15, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
      }
      gDeviceArbitrationType = 1;
    }
    goto LABEL_20;
  }
  if ( *a4 != 1 )
  {
LABEL_43:
    if ( (v22 & 0x18) != 0 && (unsigned __int16)(*a4 - 4) <= 1u )
    {
      *(_DWORD *)(v12 + 24) = 1;
      v26 = RIMAssignTouchType(v12, v7);
      if ( v26 == -1073741668 )
        goto LABEL_30;
      if ( *a4 == 5 )
      {
        v101 = *(_DWORD *)(v12 + 24);
        *(_DWORD *)(v12 + 24) = 7;
      }
      v34 = *(_DWORD *)(v95 + 84);
      if ( (v34 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
        v23 = 0;
      if ( (v34 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
        v23 = 0;
      if ( (v34 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
        v23 = 0;
      if ( !v23 )
      {
        v26 = RIMGetMaxCountFeatureDetails(a2, v95, v12, v7, (__int64)a4, v103, v108);
        if ( v26 == -1073741668 )
        {
          if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
          {
            v35 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v35);
            TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
            TlgCreateWsz(&v121, L"Failed to get max count feature details");
            TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, v36, &pData);
          }
          goto LABEL_30;
        }
        goto LABEL_20;
      }
    }
    else
    {
      if ( (v22 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
        goto LABEL_65;
      v23 = 0;
    }
    if ( v23 != 1 )
      goto LABEL_20;
LABEL_65:
    v26 = -1073741808;
    goto LABEL_30;
  }
  *(_DWORD *)(v12 + 24) = 6;
  if ( !RIMIsRunningOnDesktop() )
    goto LABEL_65;
LABEL_20:
  v94 = 1;
  if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v116, (__int64)&v94, v7) >= 0 )
  {
    if ( v116[10] >= v116[11] || v116[10] < 0 || v116[11] < 0xFFFF )
    {
      if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
      {
        v37 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v37);
        TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v121, L"Bad ScanTime minimum");
        TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, v38, &pData);
      }
LABEL_71:
      v26 = -1073741668;
      goto LABEL_30;
    }
    *(_DWORD *)(v12 + 312) |= 0x80u;
    *(_DWORD *)(v12 + 840) = v116[11];
  }
  v94 = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 728), 0, 0LL, (__int64)&v94, v7);
  v26 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
  {
    if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
    {
      v27 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
      TlgCreateWsz(&pDesc, v27);
      TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
      TlgCreateWsz(&v121, L"Coordinate usage missing");
      TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, v28, &pData);
    }
    goto LABEL_30;
  }
  v39 = 6LL;
  v40 = (_DWORD *)(v12 + 32);
  do
  {
    *v40 = -1;
    v40 += 4;
    --v39;
  }
  while ( v39 );
  if ( (int)RIMCmAllocPointerDeviceContacts(v12, 2020635474LL) >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 312) & 2) == 0
      || !*(_WORD *)(*(_QWORD *)(v12 + 712) + 8LL)
      || (v96[0] = 2,
          v26 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 712) + 8LL),
                  0,
                  (__int64)v122,
                  (__int64)v96,
                  v7),
          v26 >= 0) )
    {
      v41 = v94 + (unsigned int)v96[0];
      v106 = v94 + v96[0];
      v42 = Win32AllocPool(72 * v41, 0x78707352u);
      v102 = (__m128i *)v42;
      if ( !v42 )
        goto LABEL_30;
      v26 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 728), 0, v42, (__int64)&v94, v7);
      if ( v26 < 0 )
        goto LABEL_30;
      if ( (*(_DWORD *)(v12 + 312) & 2) == 0
        && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 728), v94, v7)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v43) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v43, 1, 16, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
      }
      v45 = 0;
      if ( v96[0] )
      {
        v44 = v94;
        v43 = v122;
        for ( i = 0; i < 2; ++i )
        {
          if ( (unsigned int)v44 >= (unsigned int)v41 )
            break;
          v47 = (__int64)v102;
          v48 = 9 * v44;
          *(__m128i *)((char *)v102 + 8 * v48) = *(__m128i *)v43;
          *(_OWORD *)(v47 + 8 * v48 + 16) = *((_OWORD *)v43 + 1);
          *(_OWORD *)(v47 + 8 * v48 + 32) = *((_OWORD *)v43 + 2);
          *(_OWORD *)(v47 + 8 * v48 + 48) = *((_OWORD *)v43 + 3);
          v49 = *((_QWORD *)v43 + 8);
          v43 += 72;
          *(_QWORD *)(v47 + 8 * v48 + 64) = v49;
          v44 = (unsigned int)(v44 + 1);
        }
        v45 = 0;
      }
      v99 = 0;
      v97 = 0;
      if ( (_DWORD)v41 )
      {
        v50 = 1LL;
        v51 = v102 + 1;
        while ( v45 < 6 )
        {
          if ( *(_DWORD *)(v12 + 24) == 4 && !v51->m128i_i8[0] )
          {
            v26 = -1073741668;
            break;
          }
          v52 = *a4;
          if ( *a4 == 2 )
            v52 = v50;
          v53 = v51[2].m128i_i16[4] | ((v51[-1].m128i_i16[0] | (unsigned __int16)(16 * v52)) << 8);
          if ( (unsigned int)RIMIsEssentialUsage(v53, v43, v44, v50) )
          {
            v54 = v97;
            v55 = 60LL * v97;
            v56 = 16LL * v97;
            *(_WORD *)(v55 + v12 + 352) = v51[-1].m128i_i16[0];
            *(_WORD *)(v55 + v12 + 364) = v51[2].m128i_i16[4];
            *(_DWORD *)(v55 + v12 + 356) = v51[-1].m128i_u8[2];
            *(_WORD *)(v55 + v12 + 362) = v51[-1].m128i_i16[5];
            *(_DWORD *)(v55 + v12 + 368) = v51->m128i_u8[0];
            *(_DWORD *)(v55 + v12 + 384) = v51[1].m128i_i32[2];
            *(_DWORD *)(v55 + v12 + 388) = v51[1].m128i_i32[3];
            *(_DWORD *)(v55 + v12 + 392) = v51[2].m128i_i32[0];
            *(_DWORD *)(v55 + v12 + 396) = v51[2].m128i_i32[1];
            *(_WORD *)(v55 + v12 + 408) = v51->m128i_i16[1];
            *(_DWORD *)(16 * (v54 + 2) + v12) = v54;
            *(_WORD *)(v56 + v12 + 28) = v51[-1].m128i_i16[0];
            *(_WORD *)(v56 + v12 + 30) = v51[2].m128i_i16[4];
            v57 = *v51;
            v112[0] = v51[-1];
            v58 = v51[1];
            v112[1] = v57;
            v59 = v51[2];
            v112[2] = v58;
            v113 = v51[3].m128i_i64[0];
            v112[3] = v59;
            RIMRetrieveNormalizationRange(v53, v112, v12 + v56 + 36);
            v60 = v51[2].m128i_i16[4];
            ++v97;
            if ( v60 == 48 && v51[-1].m128i_i16[0] == 1 )
            {
              v61 = v51[2];
              v62 = v51[3].m128i_i64[0];
              v63 = v51[-1];
              v100 = v99;
              v64 = *v51;
              v65 = v51[1];
              v115 = v62;
              v114[0] = v63;
              v114[1] = v64;
              v114[2] = v65;
              v114[3] = v61;
              *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v61, 4))
                                                      - _mm_cvtsi128_si32(v61)),
                                         v114)
                                     + 1;
              *(_DWORD *)(v12 + 124) = v51[1].m128i_i32[2];
              *(_DWORD *)(v12 + 132) = v51[1].m128i_i32[3] + 1;
              v60 = v51[2].m128i_i16[4];
            }
            if ( v60 == 49 && v51[-1].m128i_i16[0] == 1 )
            {
              v66 = (struct _EVENT_DATA_DESCRIPTOR)v51[2];
              v67 = v51[3].m128i_u64[0];
              v68 = (EVENT_DATA_DESCRIPTOR)v51[-1];
              v98 = v99;
              v69 = *v51;
              v70 = (struct _EVENT_DATA_DESCRIPTOR)v51[1];
              v121.Ptr = v67;
              pData = v68;
              v118 = v69;
              pDesc = v70;
              v120 = v66;
              *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v66, 4))
                                                      - _mm_cvtsi128_si32((__m128i)v66)),
                                         &pData)
                                     + 1;
              *(_DWORD *)(v12 + 128) = v51[1].m128i_i32[2];
              *(_DWORD *)(v12 + 136) = v51[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v95, v12, v53);
          }
          else
          {
            v50 = 1LL;
          }
          v51 = (__m128i *)((char *)v51 + 72);
          v71 = (int)v50 + v99 < v106;
          v99 += v50;
          v45 = v97;
          if ( !v71 )
            break;
        }
        v7 = v107;
      }
      *(_DWORD *)(v12 + 724) = v45;
      if ( v26 < 0 )
        goto LABEL_30;
      if ( v100 == -1 || v98 == -1 )
      {
        if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
        {
          v89 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v89);
          TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
          TlgCreateWsz(&v121, L"coordinate usage missing");
          TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, v90, &pData);
        }
      }
      else if ( v102[2].m128i_i32[18 * v100 + 3] == v102[2].m128i_i32[18 * v100 + 2]
             || v102[2].m128i_i32[18 * v98 + 3] == v102[2].m128i_i32[18 * v98 + 2] )
      {
        if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
        {
          v87 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v87);
          TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
          TlgCreateWsz(&v121, L"coordinate range invalid");
          TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, v88, &pData);
        }
      }
      else
      {
        v72 = RIMGetQDCActivePathsData((unsigned int *)v111, 9LL * v98, (__int64)v102);
        v74 = *(_DWORD *)(v12 + 24);
        v75 = v72;
        v109 = v72;
        if ( v74 == 7 )
        {
          v83 = (__int64 *)*v104;
          v105 = *((_DWORD *)v104 + 2);
          v104 = v83;
          if ( (int)ApiSetValidateDeviceSignature(v103, v108, v7, (_DWORD)a4, v12, (__int64)&v104, 0) < 0 )
          {
            v26 = -1073741668;
            if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
            {
              v84 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&pDesc, v84);
              TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
              TlgCreateWsz(&v121, L"Failed to validate device signature");
              TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, v85, &pData);
            }
            goto LABEL_30;
          }
        }
        else if ( v74 != 6 )
        {
          v98 = 0;
          *(_DWORD *)(a2 + 1336) = 1;
          RIMReadDigitizerToMonitorMappings(a2);
          rimFindMonitorForDigitizerWithQDCData(a2, v75, &v98);
          if ( *a4 == 4 )
          {
            v76 = (__int64 *)*v104;
            v105 = *((_DWORD *)v104 + 2);
            v104 = v76;
            if ( (int)ApiSetValidateDeviceSignature(v103, v108, v7, (_DWORD)a4, v12, (__int64)&v104, v98) < 0 )
            {
              v26 = -1073741668;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v77) = 3;
                WPP_RECORDER_SF_((_DWORD)gRimLog, v77, 1, 17, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
              }
              if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
              {
                v78 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                TlgCreateWsz(&pDesc, v78);
                TlgCreateWsz(&v120, *(LPCWSTR *)(a2 + 216));
                TlgCreateWsz(&v121, L"Failed to validate device signature");
                TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2AF2, 0LL, 0LL, v79, &pData);
              }
              v29 = v95;
              goto LABEL_31;
            }
            v80 = *(_DWORD *)(v12 + 312);
            if ( (v80 & 0x100) == 0 )
              *(_DWORD *)(v12 + 312) = v80 & 0xFFFFFF7F;
          }
        }
        if ( *(_DWORD *)(v12 + 148) - *(_DWORD *)(v12 + 140) <= 1
          || *(_DWORD *)(v12 + 152) - *(_DWORD *)(v12 + 144) <= 1 )
        {
          v81 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344), 1LL, v73);
          *(_OWORD *)(v12 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v110, v81);
        }
        RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v12);
        RIMPopulateExtendedPointerDeviceProperties(a2, v12);
        if ( *(_DWORD *)(v12 + 24) != 7
          || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
        {
          v29 = v95;
          v26 = RIMGetDeviceButtons(v95, v12, v7, (_DWORD)a4, cData);
          if ( v26 >= 0 )
          {
            if ( *(_DWORD *)(v12 + 24) != 7 )
            {
              v110 = *(_OWORD *)(a2 + 208);
              ApiSetRetrieveCalibrationData(v12, &v110);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v82) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v82, 1, 18, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
          }
          if ( a4[1] == 13
            && *a4 == 2
            && (unsigned int)RIMIsInputUsagePresent(v7, v82, 91LL)
            && (unsigned int)RIMIsInputUsagePresent(v7, v86, 146LL) )
          {
            *(_DWORD *)(v12 + 312) |= 0x10000u;
          }
          goto LABEL_31;
        }
      }
    }
    goto LABEL_71;
  }
LABEL_30:
  v29 = v95;
LABEL_31:
  RIMFreeQDCActivePathsData(v109);
  if ( v102 )
    Win32FreePool((__int64)v102);
  if ( v26 < 0 )
    goto LABEL_160;
  if ( *(_DWORD *)(v12 + 24) == 7 )
    v26 = RIMValidatePTPProperties(v101, v12);
  if ( v26 < 0 )
  {
LABEL_160:
    if ( *(_QWORD *)(v12 + 736) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
    RIMFreePointerDevice(v29);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(v29 + 532) += *(_DWORD *)(v12 + 720);
      *(_DWORD *)(v12 + 312) |= 0x400u;
      if ( *(_DWORD *)(v29 + 532) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
    }
    *(_DWORD *)(v12 + 744) = 100;
    *(_QWORD *)(v12 + 752) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v12;
    *(_QWORD *)(v12 + 16) = a2;
    v33 = *(_QWORD **)(v29 + 440);
    if ( *v33 != v29 + 432 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 872) = v33;
    *(_QWORD *)(v12 + 864) = v29 + 432;
    *v33 = v12 + 864;
    v91 = v103;
    *(_QWORD *)(v29 + 440) = v12 + 864;
    *(_QWORD *)(v12 + 736) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v91, a2) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v92) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v92, 1, 19, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
  }
  return (unsigned int)v26;
}
