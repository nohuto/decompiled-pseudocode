/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C0115410
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     RIMFreeQDCActivePathsData @ 0x1C003DCC0 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C010F99C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMComputePTPCurtainRegions @ 0x1C01128C0 (RIMComputePTPCurtainRegions.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0112F40 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C011303C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     rimSetupPalmTelemetry @ 0x1C0114BDC (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C0114FC4 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C01153E0 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C0116B48 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C0116E4C (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C0117140 (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0117DDC (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C0118004 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01182A8 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C0118450 (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C01185B0 (RIMIsEssentialUsage.c)
 *     RIMGetDeviceParent @ 0x1C011B0FC (RIMGetDeviceParent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C012E874 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMIsRunningOnDesktop @ 0x1C012FA7C (RIMIsRunningOnDesktop.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C012FB20 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C012FC18 (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C01309B8 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A480 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C0164A54 (ApiSetRetrieveCalibrationData.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C016541C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     ApiSetValidateDeviceSignature @ 0x1C0165450 (ApiSetValidateDeviceSignature.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v8; // r15
  __int64 v9; // r13
  _DWORD *v11; // rax
  __int64 v12; // rbx
  const wchar_t *v14; // rax
  UINT32 v15; // r11d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // rsi
  int v25; // ecx
  const wchar_t *v26; // rax
  UINT32 v27; // r11d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // rsi
  int SpecificValueCaps; // eax
  const wchar_t *v34; // rax
  const wchar_t *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // r14
  _BYTE *v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // xmm0_8
  unsigned int v44; // eax
  __m128i *v45; // r14
  __int64 v46; // r9
  __int16 v47; // r15
  unsigned __int16 v48; // r15
  __int64 v49; // r10
  __int64 v50; // r8
  __int64 v51; // r9
  __m128i v52; // xmm1
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int16 v55; // ax
  __m128i v56; // xmm5
  __int64 v57; // xmm0_8
  __m128i v58; // xmm2
  __m128i v59; // xmm3
  __m128i v60; // xmm4
  struct _EVENT_DATA_DESCRIPTOR v61; // xmm5
  ULONGLONG v62; // xmm0_8
  EVENT_DATA_DESCRIPTOR v63; // xmm2
  __m128i v64; // xmm3
  struct _EVENT_DATA_DESCRIPTOR v65; // xmm4
  __int16 v66; // r8
  bool v67; // cf
  _QWORD *v68; // rax
  const wchar_t *v69; // rdx
  __int64 v70; // r8
  int v71; // ecx
  __int64 v72; // rsi
  int v73; // esi
  int v74; // r14d
  __int64 *v75; // xmm0_8
  const wchar_t *v76; // rax
  UINT32 v77; // r11d
  int v78; // eax
  __int64 *v79; // xmm0_8
  const wchar_t *v80; // rax
  UINT32 v81; // r11d
  const wchar_t *v82; // rax
  UINT32 v83; // r11d
  const wchar_t *v84; // rax
  UINT32 v85; // r11d
  int cData; // [rsp+20h] [rbp-E0h]
  _WORD v87[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v88; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v89; // [rsp+48h] [rbp-B8h]
  int v90; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v91; // [rsp+50h] [rbp-B0h]
  int v92; // [rsp+58h] [rbp-A8h]
  int v93; // [rsp+5Ch] [rbp-A4h]
  unsigned int v94; // [rsp+60h] [rbp-A0h]
  __int16 *v95; // [rsp+68h] [rbp-98h]
  __int64 *v96; // [rsp+70h] [rbp-90h] BYREF
  int v97; // [rsp+78h] [rbp-88h]
  unsigned int v98; // [rsp+80h] [rbp-80h]
  __int64 v99; // [rsp+88h] [rbp-78h]
  __int64 v100; // [rsp+90h] [rbp-70h]
  _QWORD *v101; // [rsp+98h] [rbp-68h]
  __int64 v102; // [rsp+A0h] [rbp-60h]
  __int128 v103; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v104[2]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v105[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106; // [rsp+110h] [rbp+10h]
  _OWORD v107[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v108; // [rsp+160h] [rbp+60h]
  _DWORD v109[20]; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  __m128i v111; // [rsp+1D0h] [rbp+D0h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v115[144]; // [rsp+210h] [rbp+110h] BYREF

  v8 = a1;
  v93 = -1;
  v90 = -1;
  v9 = 0LL;
  v91 = a3;
  v102 = a1;
  v100 = a5;
  v99 = a6;
  v96 = a7;
  v87[0] = 0;
  v95 = a4;
  memset(v115, 0, sizeof(v115));
  v88 = 0;
  v104[0] = 0LL;
  v104[1] = 0LL;
  v94 = 0;
  v101 = 0LL;
  memset(v109, 0, 0x48uLL);
  v11 = Win32AllocPoolZInit(0x4C0uLL, 0x63707352u);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225628LL;
  v11[178] = 1;
  *((_QWORD *)v11 + 108) = v11 + 214;
  *((_QWORD *)v11 + 107) = v11 + 214;
  if ( (int)RIMGetProductString(v11, a5, a6) < 0 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xEu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
    if ( dword_1C01C7A38 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
      {
        v14 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v14);
        TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v114, L"Failed to retrieve productString");
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, v15, &pData);
      }
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(a5, a2 + 1960) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  v19 = (unsigned __int16)*a4;
  v103 = *(_OWORD *)(v12 + 312);
  if ( (unsigned int)RIMIsDeviceExcluded(v19, &v103) )
    goto LABEL_54;
  v20 = *(unsigned int *)(v8 + 84);
  v21 = 1;
  if ( (v20 & 4) == 0 )
    goto LABEL_18;
  if ( *a4 == 2 )
  {
    *(_DWORD *)(v12 + 24) = 5;
    rimSetupPalmTelemetry(v8);
    if ( (int)RIMInitializeDeadzone() < 0 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xFu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
      gDeviceArbitrationType = 1;
    }
    goto LABEL_54;
  }
  if ( *a4 != 1 )
  {
LABEL_18:
    if ( (v20 & 0x18) != 0 && (unsigned __int16)(*a4 - 4) <= 1u )
    {
      v22 = v91;
      *(_DWORD *)(v12 + 24) = 1;
      v23 = RIMAssignTouchType(v12, v22);
      if ( v23 == -1073741668 )
        goto LABEL_36;
      v24 = (__int64)v95;
      if ( *v95 == 5 )
      {
        v94 = *(_DWORD *)(v12 + 24);
        *(_DWORD *)(v12 + 24) = 7;
      }
      v25 = *(_DWORD *)(v8 + 84);
      if ( (v25 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
        v21 = 0;
      if ( (v25 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
        v21 = 0;
      if ( (v25 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
        v21 = 0;
      if ( !v21 )
      {
        v23 = RIMGetMaxCountFeatureDetails(a2, v8, v12, v91, v24, v100, v99);
        if ( v23 == -1073741668 )
        {
          if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
          {
            v26 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v26);
            TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
            TlgCreateWsz(&v114, L"Failed to get max count feature details");
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, v27, &pData);
          }
          goto LABEL_36;
        }
        goto LABEL_54;
      }
    }
    else
    {
      if ( (v20 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
        goto LABEL_53;
      v21 = 0;
    }
    if ( v21 != 1 )
      goto LABEL_54;
LABEL_53:
    v23 = -1073741808;
    goto LABEL_36;
  }
  *(_DWORD *)(v12 + 24) = 6;
  if ( !(unsigned int)RIMIsRunningOnDesktop(v20, 0LL, 1LL, 4LL) )
    goto LABEL_53;
LABEL_54:
  v32 = v91;
  v87[0] = 1;
  if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v109, (__int64)v87, v91) >= 0 )
  {
    if ( v109[10] >= v109[11] || v109[10] < 0 || v109[11] < 0xFFFF )
    {
      if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
      {
        v35 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v35);
        TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v114, L"Bad ScanTime minimum");
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, 5u, &pData);
      }
LABEL_67:
      v23 = -1073741668;
      goto LABEL_36;
    }
    *(_DWORD *)(v12 + 308) |= 0x200u;
    *(_DWORD *)(v12 + 832) = v109[11];
  }
  v87[0] = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 720), 0, 0LL, (__int64)v87, v32);
  v23 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
  {
    if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
    {
      v34 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
      TlgCreateWsz(&pDesc, v34);
      TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
      TlgCreateWsz(&v114, L"Coordinate usage missing");
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, 5u, &pData);
    }
    goto LABEL_36;
  }
  v36 = 6LL;
  v37 = (_DWORD *)(v12 + 32);
  do
  {
    *v37 = -1;
    v37 += 4;
    --v36;
  }
  while ( v36 );
  if ( (int)RIMCmAllocPointerDeviceContacts(v12, 2020635474LL) >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 308) & 8) != 0 )
    {
      if ( *(_WORD *)(*(_QWORD *)(v12 + 704) + 8LL) )
      {
        v88 = 2;
        v23 = rimHidP_GetSpecificValueCaps(
                0,
                0,
                *(unsigned __int16 *)(*(_QWORD *)(v12 + 704) + 8LL),
                0,
                (__int64)v115,
                (__int64)&v88,
                v91);
        if ( v23 < 0 )
        {
          v23 = -1073741668;
          goto LABEL_36;
        }
      }
    }
    v38 = v87[0] + (unsigned int)v88;
    v98 = v87[0] + v88;
    v9 = Win32AllocPool(72 * v38, 0x78707352u);
    if ( !v9 )
      goto LABEL_36;
    v23 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 720), 0, v9, (__int64)v87, v91);
    if ( v23 < 0 )
      goto LABEL_36;
    if ( (*(_DWORD *)(v12 + 308) & 8) == 0
      && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 720), v87[0], v91) )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x10u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
    }
    if ( v88 )
    {
      v40 = v87[0];
      v39 = v115;
      v41 = 0;
      do
      {
        if ( (unsigned int)v40 >= (unsigned int)v38 )
          break;
        v42 = 9 * v40;
        ++v41;
        v40 = (unsigned int)(v40 + 1);
        *(_OWORD *)(v9 + 8 * v42) = *(_OWORD *)v39;
        *(_OWORD *)(v9 + 8 * v42 + 16) = *((_OWORD *)v39 + 1);
        *(_OWORD *)(v9 + 8 * v42 + 32) = *((_OWORD *)v39 + 2);
        *(_OWORD *)(v9 + 8 * v42 + 48) = *((_OWORD *)v39 + 3);
        v43 = *((_QWORD *)v39 + 8);
        v39 += 72;
        *(_QWORD *)(v9 + 8 * v42 + 64) = v43;
      }
      while ( v41 < 2 );
    }
    v92 = 0;
    v44 = 0;
    v89 = 0;
    if ( (_DWORD)v38 )
    {
      v45 = (__m128i *)(v9 + 16);
      v46 = 1LL;
      while ( v44 < 6 )
      {
        if ( *(_DWORD *)(v12 + 24) == 4 && !v45->m128i_i8[0] )
        {
          v23 = -1073741668;
          break;
        }
        v47 = *v95;
        if ( *v95 == 2 )
          v47 = v46;
        v48 = v45[2].m128i_i16[4] | ((v45[-1].m128i_i16[0] | (unsigned __int16)(16 * v47)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v48, v39, v40, v46) )
        {
          v49 = v89;
          v50 = 60LL * v89;
          v51 = 16LL * v89;
          *(_WORD *)(v50 + v12 + 344) = v45[-1].m128i_i16[0];
          *(_WORD *)(v50 + v12 + 356) = v45[2].m128i_i16[4];
          *(_DWORD *)(v50 + v12 + 348) = v45[-1].m128i_u8[2];
          *(_WORD *)(v50 + v12 + 354) = v45[-1].m128i_i16[5];
          *(_DWORD *)(60 * (v49 + 6) + v12) = v45->m128i_u8[0];
          *(_DWORD *)(v50 + v12 + 376) = v45[1].m128i_i32[2];
          *(_DWORD *)(v50 + v12 + 380) = v45[1].m128i_i32[3];
          *(_DWORD *)(v50 + v12 + 384) = v45[2].m128i_i32[0];
          *(_DWORD *)(v50 + v12 + 388) = v45[2].m128i_i32[1];
          *(_WORD *)(v50 + v12 + 400) = v45->m128i_i16[1];
          *(_DWORD *)(16 * (v49 + 2) + v12) = v49;
          *(_WORD *)(v51 + v12 + 28) = v45[-1].m128i_i16[0];
          *(_WORD *)(v51 + v12 + 30) = v45[2].m128i_i16[4];
          v52 = *v45;
          v105[0] = v45[-1];
          v53 = v45[1];
          v105[1] = v52;
          v54 = v45[2];
          v105[2] = v53;
          v106 = v45[3].m128i_i64[0];
          v105[3] = v54;
          RIMRetrieveNormalizationRange(v48, v105, v12 + v51 + 36);
          v55 = v45[2].m128i_i16[4];
          ++v89;
          if ( v55 == 48 && v45[-1].m128i_i16[0] == 1 )
          {
            v56 = v45[2];
            v57 = v45[3].m128i_i64[0];
            v58 = v45[-1];
            v93 = v92;
            v59 = *v45;
            v60 = v45[1];
            v108 = v57;
            v107[0] = v58;
            v107[1] = v59;
            v107[2] = v60;
            v107[3] = v56;
            *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                       (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v56, 4)) - _mm_cvtsi128_si32(v56)),
                                       v107)
                                   + 1;
            *(_DWORD *)(v12 + 124) = v45[1].m128i_i32[2];
            *(_DWORD *)(v12 + 132) = v45[1].m128i_i32[3] + 1;
            v55 = v45[2].m128i_i16[4];
          }
          if ( v55 == 49 && v45[-1].m128i_i16[0] == 1 )
          {
            v61 = (struct _EVENT_DATA_DESCRIPTOR)v45[2];
            v62 = v45[3].m128i_u64[0];
            v63 = (EVENT_DATA_DESCRIPTOR)v45[-1];
            v90 = v92;
            v64 = *v45;
            v65 = (struct _EVENT_DATA_DESCRIPTOR)v45[1];
            v114.Ptr = v62;
            pData = v63;
            v111 = v64;
            pDesc = v65;
            v113 = v61;
            *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                       (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v61, 4))
                                                    - _mm_cvtsi128_si32((__m128i)v61)),
                                       &pData)
                                   + 1;
            *(_DWORD *)(v12 + 128) = v45[1].m128i_i32[2];
            *(_DWORD *)(v12 + 136) = v45[1].m128i_i32[3] + 1;
          }
          v66 = v48;
          v8 = v102;
          RIMCheckPressureUsageStatus(v102, v12, v66);
        }
        else
        {
          v8 = v102;
          v46 = 1LL;
        }
        v45 = (__m128i *)((char *)v45 + 72);
        v67 = (int)v46 + v92 < v98;
        v92 += v46;
        v44 = v89;
        if ( !v67 )
          break;
      }
    }
    *(_DWORD *)(v12 + 716) = v44;
    if ( v23 < 0 )
      goto LABEL_36;
    if ( v93 == -1 || v90 == -1 )
    {
      if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
      {
        v84 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v84);
        TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v114, L"coordinate usage missing");
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, v85, &pData);
      }
    }
    else if ( *(_DWORD *)(v9 + 72LL * v93 + 44) == *(_DWORD *)(v9 + 72LL * v93 + 40)
           || *(_DWORD *)(v9 + 72LL * v90 + 44) == *(_DWORD *)(v9 + 72LL * v90 + 40) )
    {
      if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
      {
        v82 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz(&pDesc, v82);
        TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz(&v114, L"coordinate range invalid");
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, v83, &pData);
      }
    }
    else
    {
      v68 = RIMGetQDCActivePathsData(v104, 9LL * v90, v90);
      v71 = *(_DWORD *)(v12 + 24);
      v72 = (__int64)v68;
      v101 = v68;
      if ( v71 == 7 )
      {
        RIMComputePTPCurtainRegions((_DWORD *)v12, v69, v70);
        v73 = (int)v95;
        v74 = v91;
        v79 = (__int64 *)*v96;
        v97 = *((_DWORD *)v96 + 2);
        v96 = v79;
        if ( (int)ApiSetValidateDeviceSignature(v100, v99, v91, (_DWORD)v95, v12, (__int64)&v96, 0) < 0 )
        {
          v23 = -1073741668;
          if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
          {
            v80 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v80);
            TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
            TlgCreateWsz(&v114, L"Failed to validate device signature");
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, v81, &pData);
          }
          goto LABEL_36;
        }
      }
      else if ( v71 == 6 )
      {
        v73 = (int)v95;
        v74 = v91;
      }
      else
      {
        v90 = 0;
        *(_DWORD *)(a2 + 1192) = 1;
        RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)a2, a2 + 1192, v70);
        rimFindMonitorForDigitizerWithQDCData(a2, v72, &v90);
        v73 = (int)v95;
        v74 = v91;
        if ( *v95 == 4 )
        {
          v75 = (__int64 *)*v96;
          v97 = *((_DWORD *)v96 + 2);
          v96 = v75;
          if ( (int)ApiSetValidateDeviceSignature(v100, v99, v91, (_DWORD)v95, v12, (__int64)&v96, v90) < 0 )
          {
            v23 = -1073741668;
            WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x11u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
            if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
            {
              v76 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&pDesc, v76);
              TlgCreateWsz(&v113, *(LPCWSTR *)(a2 + 216));
              TlgCreateWsz(&v114, L"Failed to validate device signature");
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EDF4, 0LL, 0LL, v77, &pData);
            }
            goto LABEL_36;
          }
          v78 = *(_DWORD *)(v12 + 308);
          if ( (v78 & 0x400) == 0 )
            *(_DWORD *)(v12 + 308) = v78 & 0xFFFFFDFF;
        }
      }
      if ( *(_DWORD *)(v12 + 148) - *(_DWORD *)(v12 + 140) <= 1 || *(_DWORD *)(v12 + 152) - *(_DWORD *)(v12 + 144) <= 1 )
        *(_OWORD *)(v12 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize((__int64)&v103, *(_QWORD *)(a2 + 1200));
      RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v12, 0, (__int64)v101);
      if ( *(_DWORD *)(v12 + 24) != 7
        || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
      {
        v23 = RIMGetDeviceButtons(v8, v12, v74, v73, cData);
        if ( v23 >= 0 )
        {
          if ( *(_DWORD *)(v12 + 24) != 7 )
          {
            v103 = *(_OWORD *)(a2 + 208);
            ApiSetRetrieveCalibrationData(v12, &v103);
          }
        }
        else
        {
          WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x12u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
        }
        goto LABEL_36;
      }
    }
    goto LABEL_67;
  }
LABEL_36:
  RIMFreeQDCActivePathsData(v101);
  if ( v9 )
    Win32FreePool(v9);
  if ( v23 < 0 )
    goto LABEL_146;
  if ( *(_DWORD *)(v12 + 24) == 7 )
    v23 = RIMValidatePTPProperties(v94, v12);
  if ( v23 < 0 )
  {
LABEL_146:
    if ( *(_QWORD *)(v12 + 728) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
    RIMFreePointerDevice(v8, v12);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(v8 + 532) += *(_DWORD *)(v12 + 712);
      *(_DWORD *)(v12 + 308) |= 0x1000u;
      if ( *(_DWORD *)(v8 + 532) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
    }
    if ( *(_DWORD *)(v12 + 24) != 7 )
      ApiSetUpdatePointerDeviceSystemMetrics(v12);
    *(_DWORD *)(v12 + 736) = 100;
    *(_QWORD *)(v12 + 744) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v12;
    *(_QWORD *)(v12 + 16) = a2;
    v31 = *(_QWORD **)(v8 + 440);
    if ( *v31 != v8 + 432 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 856) = v8 + 432;
    *(_QWORD *)(v12 + 864) = v31;
    *v31 = v12 + 856;
    *(_QWORD *)(v8 + 440) = v12 + 856;
    *(_QWORD *)(v12 + 728) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v31, a2) )
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x13u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
  }
  return (unsigned int)v23;
}
