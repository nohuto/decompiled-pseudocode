/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C00EA954
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00535D4 (RIMFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00E5E3C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMComputePTPCurtainRegions @ 0x1C00E8C80 (RIMComputePTPCurtainRegions.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C00E91F0 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C00E9364 (RIMReadDigitizerToMonitorMappings.c)
 *     rimSetupPalmTelemetry @ 0x1C00E9FE4 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C00EA3D4 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C00EA924 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C00EBFB4 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C00EC198 (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C00EC48C (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C00ECAA4 (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C00ECC88 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C00ECF30 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C00ED0D4 (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C00ED218 (RIMIsEssentialUsage.c)
 *     RIMGetDeviceParent @ 0x1C00EFA6C (RIMGetDeviceParent.c)
 *     RIMIsRunningOnDesktop @ 0x1C00F25F0 (RIMIsRunningOnDesktop.c)
 *     RIMIsRunningOnMobile @ 0x1C00F2610 (RIMIsRunningOnMobile.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C010699C (RIMCmAllocPointerDeviceContacts.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0107200 (RIMUpdateMonitorQuirk.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C0108488 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0108568 (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C010929C (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0124FE0 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0141CFC (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     ApiSetValidateDeviceSignature @ 0x1C0141D50 (ApiSetValidateDeviceSignature.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r12
  _DWORD *v12; // rax
  __int64 v13; // rbx
  const wchar_t *v14; // rax
  LPCGUID v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // r14d
  struct _HIDP_PREPARSED_DATA *v21; // rsi
  int SpecificValueCaps; // eax
  int v23; // esi
  const wchar_t *v24; // rax
  LPCGUID v25; // r9
  UINT32 v26; // r10d
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  struct _HIDP_PREPARSED_DATA *v31; // rdx
  int v32; // ecx
  const wchar_t *v33; // rax
  LPCGUID v34; // r9
  UINT32 v35; // r10d
  const wchar_t *v36; // rax
  LPCGUID v37; // r9
  UINT32 v38; // r10d
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r14
  int v43; // eax
  __int64 v44; // r8
  struct _HIDP_VALUE_CAPS *v45; // rdx
  unsigned int v46; // r9d
  __int64 v47; // rcx
  __int64 v48; // xmm0_8
  __int64 v49; // rdx
  int v50; // r10d
  __int64 v51; // r8
  int v52; // r11d
  __int64 v53; // r9
  int v54; // ecx
  __m128i *v55; // r14
  __int16 v56; // r12
  unsigned __int16 v57; // r12
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  __m128i v61; // xmm1
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __m128i v64; // xmm5
  __int64 v65; // xmm0_8
  __m128i v66; // xmm2
  __m128i v67; // xmm3
  __m128i v68; // xmm4
  __int32 v69; // eax
  __int32 v70; // eax
  __int32 v71; // ecx
  __int32 v72; // edx
  __int32 v73; // eax
  struct _EVENT_DATA_DESCRIPTOR v74; // xmm5
  ULONGLONG v75; // xmm0_8
  EVENT_DATA_DESCRIPTOR v76; // xmm2
  __m128i v77; // xmm3
  struct _EVENT_DATA_DESCRIPTOR v78; // xmm4
  __int32 v79; // eax
  __int32 v80; // eax
  __int32 v81; // ecx
  __int32 v82; // edx
  __int32 v83; // eax
  _QWORD *v84; // rax
  const wchar_t *v85; // rdx
  int v86; // ecx
  __int64 v87; // r14
  __int64 v88; // r9
  int v89; // esi
  __int64 v90; // xmm0_8
  const wchar_t *v91; // rax
  LPCGUID v92; // r9
  UINT32 v93; // r10d
  int v94; // eax
  __int64 v95; // xmm0_8
  const wchar_t *v96; // rax
  LPCGUID v97; // r9
  UINT32 v98; // r10d
  __int128 v99; // xmm6
  const wchar_t *v100; // rax
  LPCGUID v101; // r9
  UINT32 v102; // r10d
  const wchar_t *v103; // rax
  LPCGUID v104; // r9
  UINT32 v105; // r10d
  int cData; // [rsp+28h] [rbp-E0h]
  __int64 v107; // [rsp+78h] [rbp-90h] BYREF
  __int64 v108; // [rsp+80h] [rbp-88h]
  unsigned __int16 v109[2]; // [rsp+88h] [rbp-80h] BYREF
  int v110; // [rsp+8Ch] [rbp-7Ch]
  int v111; // [rsp+90h] [rbp-78h]
  unsigned int v112; // [rsp+94h] [rbp-74h]
  int v113[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v114; // [rsp+A8h] [rbp-60h] BYREF
  struct _HIDP_PREPARSED_DATA *v115; // [rsp+B8h] [rbp-50h]
  int v116; // [rsp+C0h] [rbp-48h]
  __int32 v117; // [rsp+C4h] [rbp-44h]
  __int32 v118; // [rsp+C8h] [rbp-40h]
  __int32 v119; // [rsp+CCh] [rbp-3Ch]
  __int32 v120; // [rsp+D0h] [rbp-38h]
  __int32 v121; // [rsp+D4h] [rbp-34h]
  __int32 v122; // [rsp+D8h] [rbp-30h]
  int v123; // [rsp+DCh] [rbp-2Ch]
  __int32 v124; // [rsp+E0h] [rbp-28h]
  unsigned int v125; // [rsp+E4h] [rbp-24h]
  __int32 v126; // [rsp+E8h] [rbp-20h]
  __int32 v127; // [rsp+ECh] [rbp-1Ch]
  __int32 v128; // [rsp+F0h] [rbp-18h]
  __int128 v129; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v130; // [rsp+108h] [rbp+0h]
  __int64 v131; // [rsp+110h] [rbp+8h]
  unsigned int v132; // [rsp+118h] [rbp+10h]
  _QWORD *v133; // [rsp+120h] [rbp+18h]
  _QWORD v134[2]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v135[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v136; // [rsp+178h] [rbp+70h]
  _OWORD v137[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v138; // [rsp+1C8h] [rbp+C0h]
  struct _HIDP_VALUE_CAPS v139; // [rsp+1D8h] [rbp+D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+228h] [rbp+120h] BYREF
  __m128i v141; // [rsp+238h] [rbp+130h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+248h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+258h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v144; // [rsp+268h] [rbp+160h] BYREF
  struct _HIDP_VALUE_CAPS v145[2]; // [rsp+278h] [rbp+170h] BYREF

  v123 = -1;
  v113[0] = -1;
  v9 = 0LL;
  v115 = a3;
  v108 = a1;
  v131 = a5;
  v130 = a6;
  *(_QWORD *)&v129 = a7;
  LOWORD(v107) = 0;
  memset(v145, 0, sizeof(v145));
  v109[0] = 0;
  v134[0] = 0LL;
  v134[1] = 0LL;
  v125 = 0;
  v133 = 0LL;
  memset(&v139, 0, sizeof(v139));
  if ( (unsigned int)RIMIsRunningOnMobile() && !gbPenOnPhoneFeatureEnabled && a4[1] == 13 && *a4 == 2 )
    return 3221225488LL;
  v12 = Win32AllocPoolZInit(0x4A0uLL, 0x63707352u);
  v13 = (__int64)v12;
  if ( !v12 )
    return 3221225628LL;
  v12[170] = 1;
  *((_QWORD *)v12 + 104) = v12 + 206;
  *((_QWORD *)v12 + 103) = v12 + 206;
  if ( (int)RIMGetProductString(v12, a5, a6) < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xEu,
      (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
    if ( dword_1C019EBC0 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
      {
        v14 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v14);
        TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v144, L"Failed to retrieve productString");
        TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v15, 5u, &pData);
      }
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(a5, a2 + 1608) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
  v18 = (unsigned __int16)*a4;
  v114 = *(_OWORD *)(v13 + 280);
  if ( (unsigned int)RIMIsDeviceExcluded(v18, &v114) )
    goto LABEL_21;
  v19 = *(_DWORD *)(a1 + 76);
  v20 = 1;
  if ( (v19 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(v13 + 24) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0xFu,
          (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
        gDeviceArbitrationType = 1;
      }
      goto LABEL_21;
    }
    if ( *a4 == 1 )
    {
      *(_DWORD *)(v13 + 24) = 6;
      if ( (unsigned int)RIMIsRunningOnDesktop() )
        goto LABEL_21;
      goto LABEL_68;
    }
  }
  if ( (v19 & 0x18) == 0 || (unsigned __int16)(*a4 - 4) > 1u )
  {
    if ( (v19 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
    {
LABEL_68:
      v23 = -1073741808;
      goto LABEL_31;
    }
    v20 = 0;
    goto LABEL_67;
  }
  v31 = v115;
  *(_DWORD *)(v13 + 24) = 1;
  v23 = RIMAssignTouchType(v13, v31);
  if ( v23 != -1073741668 )
  {
    if ( *a4 == 5 )
    {
      v125 = *(_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 24) = 7;
    }
    v32 = *(_DWORD *)(v108 + 76);
    if ( (v32 & 4) != 0 && (unsigned int)(*(_DWORD *)(v13 + 24) - 5) <= 1 )
      v20 = 0;
    if ( (v32 & 8) != 0 && *(_DWORD *)(v13 + 24) == 7 )
      v20 = 0;
    if ( (v32 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v13 + 24) - 1) <= 3 )
      v20 = 0;
    if ( !v20 )
    {
      v23 = RIMGetMaxCountFeatureDetails(v108, v13, (_DWORD)v115, (_DWORD)a4, v131, v130);
      if ( v23 == -1073741668 )
      {
        if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
        {
          v33 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v33);
          TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
          TlgCreateWsz(&v144, L"Failed to get max count feature details");
          TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v34, v35, &pData);
        }
        goto LABEL_31;
      }
LABEL_21:
      v21 = v115;
      LOWORD(v107) = 1;
      if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &v139, (unsigned __int16 *)&v107, v115) >= 0 )
      {
        if ( v139.LogicalMin >= v139.LogicalMax || v139.LogicalMin < 0 || v139.LogicalMax < 0xFFFF )
        {
          if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
          {
            v36 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v36);
            TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
            TlgCreateWsz(&v144, L"Bad ScanTime minimum");
            TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v37, v38, &pData);
          }
LABEL_74:
          v23 = -1073741668;
          goto LABEL_31;
        }
        *(_DWORD *)(v13 + 276) |= 0x200u;
        *(_DWORD *)(v13 + 800) = v139.LogicalMax;
      }
      LOWORD(v107) = 0;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                            HidP_Input,
                            0,
                            *(_WORD *)(v13 + 688),
                            0,
                            0LL,
                            (unsigned __int16 *)&v107,
                            v21);
      v23 = SpecificValueCaps;
      if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      {
        if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
        {
          v24 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v24);
          TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
          TlgCreateWsz(&v144, L"Coordinate usage missing");
          TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v25, v26, &pData);
        }
        goto LABEL_31;
      }
      v39 = 6LL;
      v40 = (_DWORD *)(v13 + 32);
      do
      {
        *v40 = -1;
        v40 += 4;
        --v39;
      }
      while ( v39 );
      if ( (int)RIMCmAllocPointerDeviceContacts(v13, 2020635474LL) < 0 )
      {
        v27 = v108;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(v13 + 276) & 8) == 0
        || !*(_WORD *)(*(_QWORD *)(v13 + 672) + 8LL)
        || (v109[0] = 2,
            v23 = rimHidP_GetSpecificValueCaps(
                    HidP_Input,
                    0,
                    *(_WORD *)(*(_QWORD *)(v13 + 672) + 8LL),
                    0,
                    v145,
                    v109,
                    v115),
            v23 >= 0) )
      {
        v41 = (unsigned __int16)v107 + (unsigned int)v109[0];
        v132 = (unsigned __int16)v107 + v109[0];
        *(_QWORD *)&v114 = Win32AllocPool(72 * v41, 0x78707352u);
        v42 = v114;
        if ( !(_QWORD)v114
          || (v23 = rimHidP_GetSpecificValueCaps(
                      HidP_Input,
                      0,
                      *(_WORD *)(v13 + 688),
                      0,
                      (struct _HIDP_VALUE_CAPS *)v114,
                      (unsigned __int16 *)&v107,
                      v115),
              v23 < 0) )
        {
          v9 = v42;
          goto LABEL_31;
        }
        if ( (*(_DWORD *)(v13 + 276) & 8) == 0
          && !(unsigned int)RIMGetPropertyCount(v13, *(unsigned __int16 *)(v13 + 688), (unsigned __int16)v107, v115) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x10u,
            (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
        }
        v43 = 0;
        if ( v109[0] )
        {
          v44 = (unsigned __int16)v107;
          v45 = v145;
          v46 = 0;
          do
          {
            if ( (unsigned int)v44 >= (unsigned int)v41 )
              break;
            v47 = 9 * v44;
            ++v46;
            v44 = (unsigned int)(v44 + 1);
            *(_OWORD *)(v42 + 8 * v47) = *(_OWORD *)&v45->UsagePage;
            *(_OWORD *)(v42 + 8 * v47 + 16) = *(_OWORD *)&v45->HasNull;
            *(_OWORD *)(v42 + 8 * v47 + 32) = *(_OWORD *)&v45->UnitsExp;
            *(_OWORD *)(v42 + 8 * v47 + 48) = *(_OWORD *)&v45->PhysicalMin;
            v48 = *(_QWORD *)&v45->NotRange.DesignatorIndex;
            ++v45;
            *(_QWORD *)(v42 + 8 * v47 + 64) = v48;
          }
          while ( v46 < 2 );
          v43 = 0;
        }
        v49 = 0LL;
        v119 = 0;
        v126 = 0;
        v50 = 0;
        v117 = 0;
        v51 = 0LL;
        v124 = 0;
        v52 = 0;
        v122 = 0;
        v53 = 0LL;
        v121 = 0;
        v54 = 0;
        v128 = 0;
        v127 = 0;
        v120 = 0;
        v118 = 0;
        v111 = 0;
        v110 = 0;
        v116 = 0;
        v112 = 0;
        if ( (_DWORD)v41 )
        {
          v55 = (__m128i *)(v42 + 16);
          while ( (unsigned int)v49 < 6 )
          {
            if ( *(_DWORD *)(v13 + 24) == 4 && !v55->m128i_i8[0] )
            {
              v42 = v114;
              v23 = -1073741668;
              v43 = v110;
              v54 = v111;
              LODWORD(v51) = v117;
              LODWORD(v53) = v118;
              v50 = v119;
              v52 = v120;
              goto LABEL_116;
            }
            v56 = *a4;
            if ( *a4 == 2 )
              v56 = 1;
            v57 = v55[2].m128i_i16[4] | ((v55[-1].m128i_i16[0] | (unsigned __int16)(16 * v56)) << 8);
            if ( (unsigned int)RIMIsEssentialUsage(v57, v49, v51, v53) )
            {
              v58 = v112;
              v59 = 60LL * v112;
              v60 = 16LL * v112;
              *(_WORD *)(v59 + v13 + 312) = v55[-1].m128i_i16[0];
              *(_WORD *)(v59 + v13 + 324) = v55[2].m128i_i16[4];
              *(_DWORD *)(v59 + v13 + 316) = v55[-1].m128i_u8[2];
              *(_WORD *)(v59 + v13 + 322) = v55[-1].m128i_i16[5];
              *(_DWORD *)(v59 + v13 + 328) = v55->m128i_u8[0];
              *(_DWORD *)(v59 + v13 + 344) = v55[1].m128i_i32[2];
              *(_DWORD *)(v59 + v13 + 348) = v55[1].m128i_i32[3];
              *(_DWORD *)(v59 + v13 + 352) = v55[2].m128i_i32[0];
              *(_DWORD *)(v59 + v13 + 356) = v55[2].m128i_i32[1];
              *(_WORD *)(v59 + v13 + 368) = v55->m128i_i16[1];
              *(_DWORD *)(v13 + 16 * (v58 + 2)) = v58;
              *(_WORD *)(v60 + v13 + 28) = v55[-1].m128i_i16[0];
              *(_WORD *)(v60 + v13 + 30) = v55[2].m128i_i16[4];
              v61 = *v55;
              v135[0] = v55[-1];
              v62 = v55[1];
              v135[1] = v61;
              v63 = v55[2];
              v135[2] = v62;
              v136 = v55[3].m128i_i64[0];
              v135[3] = v63;
              RIMRetrieveNormalizationRange(v57, v135, v13 + v60 + 36);
              ++v112;
              if ( v55[2].m128i_i16[4] == 48 && v55[-1].m128i_i16[0] == 1 )
              {
                v64 = v55[2];
                v65 = v55[3].m128i_i64[0];
                v66 = v55[-1];
                v123 = v116;
                v67 = *v55;
                v68 = v55[1];
                v138 = v65;
                v137[0] = v66;
                v137[1] = v67;
                v137[2] = v68;
                v137[3] = v64;
                *(_DWORD *)(v13 + 148) = RIMComputeSpecificHighMetricValue(
                                           (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v64, 4))
                                                        - _mm_cvtsi128_si32(v64)),
                                           v137);
                v69 = v55[1].m128i_i32[2];
                *(_DWORD *)(v13 + 124) = v69;
                v122 = v69;
                v70 = v55[1].m128i_i32[3];
                *(_DWORD *)(v13 + 132) = v70;
                v71 = v55[1].m128i_i32[1];
                v72 = v55[2].m128i_i32[1];
                v121 = v70;
                v126 = v55[1].m128i_i32[0];
                v119 = v71;
                v120 = v72;
                if ( (v126 & 0xF) == 0xE )
                {
                  v73 = v111;
                  if ( (_BYTE)v71 == 51 )
                    v73 = v72;
                  v111 = v73;
                }
              }
              if ( v55[2].m128i_i16[4] == 49 && v55[-1].m128i_i16[0] == 1 )
              {
                v74 = (struct _EVENT_DATA_DESCRIPTOR)v55[2];
                v75 = v55[3].m128i_u64[0];
                v76 = (EVENT_DATA_DESCRIPTOR)v55[-1];
                v113[0] = v116;
                v77 = *v55;
                v78 = (struct _EVENT_DATA_DESCRIPTOR)v55[1];
                v144.Ptr = v75;
                pData = v76;
                v141 = v77;
                pDesc = v78;
                v143 = v74;
                *(_DWORD *)(v13 + 152) = RIMComputeSpecificHighMetricValue(
                                           (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v74, 4))
                                                        - _mm_cvtsi128_si32((__m128i)v74)),
                                           &pData);
                v79 = v55[1].m128i_i32[2];
                *(_DWORD *)(v13 + 128) = v79;
                v128 = v79;
                v80 = v55[1].m128i_i32[3];
                *(_DWORD *)(v13 + 136) = v80;
                v81 = v55[1].m128i_i32[1];
                v82 = v55[2].m128i_i32[1];
                v127 = v80;
                v124 = v55[1].m128i_i32[0];
                v117 = v81;
                v118 = v82;
                if ( (v124 & 0xF) == 0xE )
                {
                  v83 = v110;
                  if ( (_BYTE)v81 == 51 )
                    v83 = v82;
                  v110 = v83;
                }
              }
              RIMCheckPressureUsageStatus(v108, v13, v57);
            }
            v55 = (__m128i *)((char *)v55 + 72);
            if ( ++v116 >= v132 )
              break;
            v49 = v112;
          }
          v52 = v120;
          v50 = v119;
          LODWORD(v53) = v118;
          LODWORD(v51) = v117;
          v54 = v111;
          v43 = v110;
          v42 = v114;
        }
LABEL_116:
        RIMUpdateMonitorQuirk(a2, v13, v122, v121, v128, v127, v52, v53, v54, v43, v50, v126, v51, v124);
        *(_DWORD *)(v13 + 684) = v112;
        if ( v23 < 0 )
          goto LABEL_135;
        if ( v123 == -1 || v113[0] == -1 )
        {
          if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
          {
            v103 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v103);
            TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
            TlgCreateWsz(&v144, L"coordinate usage missing");
            TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v104, v105, &pData);
          }
        }
        else if ( *(_DWORD *)(v42 + 72LL * v123 + 44) == *(_DWORD *)(v42 + 72LL * v123 + 40)
               || *(_DWORD *)(v42 + 72LL * v113[0] + 44) == *(_DWORD *)(v42 + 72LL * v113[0] + 40) )
        {
          if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
          {
            v100 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v100);
            TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
            TlgCreateWsz(&v144, L"coordinate range invalid");
            TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v101, v102, &pData);
          }
        }
        else
        {
          v84 = RIMGetQDCActivePathsData(v134);
          v86 = *(_DWORD *)(v13 + 24);
          v87 = (__int64)v84;
          v133 = v84;
          if ( v86 == 7 )
          {
            RIMComputePTPCurtainRegions((_DWORD *)v13, v85);
            v89 = (int)v115;
            v95 = *(_QWORD *)v129;
            DWORD2(v129) = *(_DWORD *)(v129 + 8);
            *(_QWORD *)&v129 = v95;
            if ( (int)ApiSetValidateDeviceSignature(v131, v130, (_DWORD)v115, (_DWORD)a4, v13, (__int64)&v129, 0) < 0 )
            {
              v23 = -1073741668;
              if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
              {
                v96 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                TlgCreateWsz(&pDesc, v96);
                TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
                TlgCreateWsz(&v144, L"Failed to validate device signature");
                TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v97, v98, &pData);
              }
              goto LABEL_135;
            }
          }
          else if ( v86 == 6 )
          {
            v89 = (int)v115;
          }
          else
          {
            v113[0] = 0;
            *(_DWORD *)(a2 + 848) = 1;
            RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)a2, a2 + 848);
            rimFindMonitorForDigitizerWithQDCData(a2, v87, (unsigned __int64)v113, v88);
            v89 = (int)v115;
            if ( *a4 == 4 )
            {
              v90 = *(_QWORD *)v129;
              DWORD2(v129) = *(_DWORD *)(v129 + 8);
              *(_QWORD *)&v129 = v90;
              if ( (int)ApiSetValidateDeviceSignature(
                          v131,
                          v130,
                          (_DWORD)v115,
                          (_DWORD)a4,
                          v13,
                          (__int64)&v129,
                          v113[0]) < 0 )
              {
                v23 = -1073741668;
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  0x13u,
                  0x11u,
                  (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
                if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
                {
                  v91 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
                  TlgCreateWsz(&pDesc, v91);
                  TlgCreateWsz(&v143, *(LPCWSTR *)(a2 + 216));
                  TlgCreateWsz(&v144, L"Failed to validate device signature");
                  TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178570, 0LL, v92, v93, &pData);
                }
                v9 = v114;
                goto LABEL_31;
              }
              v94 = *(_DWORD *)(v13 + 276);
              if ( (v94 & 0x400) == 0 )
                *(_DWORD *)(v13 + 276) = v94 & 0xFFFFFDFF;
            }
          }
          if ( *(_DWORD *)(v13 + 148) <= *(_DWORD *)(v13 + 140) || *(_DWORD *)(v13 + 152) <= *(_DWORD *)(v13 + 144) )
            *(_OWORD *)(v13 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize((__int64)&v129, *(_QWORD *)(a2 + 856));
          RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v13, 0, v87);
          if ( *(_DWORD *)(v13 + 24) != 7
            || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13) >= 0 )
          {
            v27 = v108;
            v23 = RIMGetDeviceButtons(v108, v13, v89, (_DWORD)a4, cData);
            if ( v23 >= 0 )
            {
              if ( *(_DWORD *)(v13 + 24) != 7 )
              {
                v99 = *(_OWORD *)(a2 + 208);
                if ( (int)IsRetrieveCalibrationDataSupported() >= 0 )
                {
                  v129 = v99;
                  RetrieveCalibrationData(v13, &v129);
                }
              }
              v9 = v114;
            }
            else
            {
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                0x13u,
                0x12u,
                (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
              v9 = v114;
            }
            goto LABEL_32;
          }
        }
        v23 = -1073741668;
LABEL_135:
        v9 = v114;
        goto LABEL_31;
      }
      goto LABEL_74;
    }
LABEL_67:
    if ( v20 != 1 )
      goto LABEL_21;
    goto LABEL_68;
  }
LABEL_31:
  v27 = v108;
LABEL_32:
  RIMFreeQDCActivePathsData(v133);
  if ( v9 )
    Win32FreePool(v9);
  if ( v23 < 0 )
    goto LABEL_165;
  if ( *(_DWORD *)(v13 + 24) == 7 )
    v23 = RIMValidatePTPProperties(v125, v13);
  if ( v23 < 0 )
  {
LABEL_165:
    if ( *(_QWORD *)(v13 + 696) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
    RIMFreePointerDevice(v27, v13);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v13 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(v27 + 516) += *(_DWORD *)(v13 + 680);
      *(_DWORD *)(v13 + 276) |= 0x1000u;
      if ( *(_DWORD *)(v27 + 516) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
    }
    if ( *(_DWORD *)(v13 + 24) != 7 )
      ApiSetUpdatePointerDeviceSystemMetrics(v13);
    *(_DWORD *)(v13 + 704) = 100;
    *(_QWORD *)(v13 + 712) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v13;
    *(_QWORD *)(v13 + 16) = a2;
    v30 = *(_QWORD **)(v27 + 424);
    if ( *v30 != v27 + 416 )
      __fastfail(3u);
    *(_QWORD *)(v13 + 824) = v27 + 416;
    *(_QWORD *)(v13 + 832) = v30;
    *v30 = v13 + 824;
    *(_QWORD *)(v27 + 424) = v13 + 824;
    *(_QWORD *)(v13 + 696) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v30, a2) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x13u,
        (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
  }
  return (unsigned int)v23;
}
