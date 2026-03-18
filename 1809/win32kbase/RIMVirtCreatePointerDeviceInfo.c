/*
 * XREFs of RIMVirtCreatePointerDeviceInfo @ 0x1C0119644
 * Callers:
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     RIMFreeQDCActivePathsData @ 0x1C003DCC0 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C010F99C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0112F40 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C011303C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     rimSetupPalmTelemetry @ 0x1C0114BDC (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1C0116B48 (RIMFreePointerDevice.c)
 *     RIMInitializeDeadzone @ 0x1C01182A8 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C0118450 (RIMIsDeviceExcluded.c)
 *     RIMVirtAssignTouchType @ 0x1C0119410 (RIMVirtAssignTouchType.c)
 *     RIMVirtGetDeviceButtons @ 0x1C0119F20 (RIMVirtGetDeviceButtons.c)
 *     RIMVirtGetProductString @ 0x1C011A0E0 (RIMVirtGetProductString.c)
 *     RIMGetDeviceParent @ 0x1C011B0FC (RIMGetDeviceParent.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C012E874 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMIsRunningOnDesktop @ 0x1C012FA7C (RIMIsRunningOnDesktop.c)
 *     RIMValidatePTPProperties @ 0x1C01309B8 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A480 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C0164A54 (ApiSetRetrieveCalibrationData.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C016541C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int16 *v8; // r14
  char *v9; // rbx
  _QWORD *v11; // r12
  int ProductString; // r15d
  const wchar_t *v13; // rax
  __int16 v14; // cx
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _OWORD *v20; // r9
  __int64 v21; // r10
  __int64 v22; // r8
  _DWORD *v23; // rdx
  _WORD *v24; // rcx
  __int16 v25; // ax
  int v26; // eax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  int v29; // eax
  _QWORD *v30; // rax
  __int64 v31; // r8
  int v32; // ecx
  __int64 v33; // r15
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // ecx
  unsigned int v37; // edx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // xmm1_8
  unsigned int v41; // edx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  int v44; // eax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  int v52; // ecx
  int v53; // r8d
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  _QWORD *v57; // rcx
  __int16 *v58; // [rsp+30h] [rbp-B9h] BYREF
  unsigned int v59; // [rsp+38h] [rbp-B1h]
  __int128 v60; // [rsp+40h] [rbp-A9h]
  struct _UNICODE_STRING v61; // [rsp+50h] [rbp-99h] BYREF
  __int64 v62; // [rsp+60h] [rbp-89h]
  _QWORD v63[2]; // [rsp+70h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-69h] BYREF
  _BYTE v65[64]; // [rsp+90h] [rbp-59h] BYREF
  __int128 v66; // [rsp+D0h] [rbp-19h]
  __int128 v67; // [rsp+E0h] [rbp-9h]

  v63[0] = 0LL;
  v63[1] = 0LL;
  v58 = a4;
  v59 = 0;
  *(_QWORD *)&v60 = 0LL;
  v8 = a4;
  v9 = (char *)Win32AllocPoolZInit(0x4C0uLL, 0x63707352u);
  if ( !v9 )
    return 3221225628LL;
  v11 = v9 + 856;
  *((_DWORD *)v9 + 178) = *(_DWORD *)(a6 + 1096);
  *((_QWORD *)v9 + 108) = v9 + 856;
  *((_QWORD *)v9 + 107) = v9 + 856;
  ProductString = RIMVirtGetProductString(v9, a6);
  if ( ProductString < 0 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x2Eu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
    if ( dword_1C01C7A38 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
      {
        v13 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v65[16], v13);
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v65[32], *(LPCWSTR *)(a2 + 216));
        TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v65[48], L"Failed to retrieve productString");
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019ECD8, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  *(_OWORD *)(a2 + 1960) = *(_OWORD *)(a6 + 2040);
  *(_OWORD *)(a2 + 1976) = *(_OWORD *)(a6 + 2056);
  *(_QWORD *)(a2 + 1992) = *(_QWORD *)(a6 + 2072);
  v14 = *v8;
  v61 = *(struct _UNICODE_STRING *)(v9 + 312);
  if ( !RIMIsDeviceExcluded(v14, &v61) )
  {
    v15 = *(unsigned int *)(a1 + 84);
    v16 = 1;
    v17 = (__int64)v58;
    if ( (v15 & 4) == 0 )
      goto LABEL_25;
    if ( *v58 == 2 )
    {
      *((_DWORD *)v9 + 6) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x2Fu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
        gDeviceArbitrationType = 1;
      }
      goto LABEL_14;
    }
    if ( *v58 == 1 )
    {
      *((_DWORD *)v9 + 6) = 6;
      if ( (unsigned int)RIMIsRunningOnDesktop(v15, v17, 0LL, 1LL) )
      {
LABEL_14:
        v8 = v58;
        goto LABEL_15;
      }
    }
    else
    {
LABEL_25:
      if ( (v15 & 0x18) != 0 && (unsigned __int16)(*v58 - 4) <= 1u )
      {
        *((_DWORD *)v9 + 6) = 1;
        ProductString = RIMVirtAssignTouchType((__int64)v9, v17, a6);
        if ( ProductString == -1073741668 )
          goto LABEL_57;
        if ( *v58 == 5 )
        {
          v59 = *((_DWORD *)v9 + 6);
          *((_DWORD *)v9 + 6) = 7;
        }
        v38 = *(_DWORD *)(a1 + 84);
        if ( (v38 & 4) != 0 && (unsigned int)(*((_DWORD *)v9 + 6) - 5) <= 1 )
          v16 = 0;
        if ( (v38 & 8) != 0 && *((_DWORD *)v9 + 6) == 7 )
          v16 = 0;
        if ( (v38 & 0x10) != 0 && (unsigned int)(*((_DWORD *)v9 + 6) - 1) <= 3 )
          v16 = 0;
        if ( !v16 )
        {
          ProductString = 0;
          *((_DWORD *)v9 + 178) = *(_DWORD *)(a6 + 1096);
          *((_DWORD *)v9 + 224) = *(_DWORD *)(a6 + 1248);
          v61 = *(struct _UNICODE_STRING *)(a6 + 448);
          v62 = *(_QWORD *)(a6 + 464);
          v39 = *(_DWORD *)(a6 + 472);
          v40 = v62;
          *(struct _UNICODE_STRING *)(v9 + 280) = v61;
          *((_QWORD *)v9 + 37) = v40;
          *((_DWORD *)v9 + 76) = v39;
        }
      }
      else
      {
        if ( (v15 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
          goto LABEL_44;
        v16 = 0;
      }
      if ( v16 != 1 )
        goto LABEL_14;
    }
LABEL_44:
    ProductString = -1073741808;
    goto LABEL_57;
  }
LABEL_15:
  v18 = 6LL;
  *((_DWORD *)v9 + 77) ^= (*((_DWORD *)v9 + 77) ^ (*(_DWORD *)(a6 + 512) << 9)) & 0x200;
  *((_DWORD *)v9 + 208) = *(_DWORD *)(a6 + 1200);
  v19 = v9 + 32;
  do
  {
    *v19 = -1;
    v19 += 4;
    --v18;
  }
  while ( v18 );
  if ( (int)RIMCmAllocPointerDeviceContacts(v9, 2020635474LL) >= 0 )
  {
    v20 = v9 + 28;
    v21 = 6LL;
    v22 = (__int64)(v9 + 344);
    v23 = (_DWORD *)(a6 + 212);
    v24 = (_WORD *)(a6 + 672);
    do
    {
      LOWORD(pData.Ptr) = *(v24 - 4);
      HIDWORD(pData.Ptr) = *((_DWORD *)v24 - 1);
      v25 = *v24;
      v24 += 32;
      LOWORD(pData.Size) = v25;
      HIWORD(pData.Size) = *(v24 - 30);
      LOWORD(pData.Reserved) = *(v24 - 28);
      *(_DWORD *)v65 = *((_DWORD *)v24 - 13);
      *(_WORD *)&v65[4] = *(v24 - 24);
      *(_QWORD *)&v65[8] = *(_QWORD *)(v24 - 22);
      *(_QWORD *)&v65[16] = *(_QWORD *)(v24 - 18);
      *(_DWORD *)&v65[24] = *((_DWORD *)v24 - 7);
      *(_DWORD *)&v65[28] = *((_DWORD *)v24 - 6);
      *(_QWORD *)&v65[32] = *(_QWORD *)(v24 - 10);
      *(_WORD *)&v65[40] = *(v24 - 6);
      v26 = *(_DWORD *)&v65[40];
      v27 = *(_OWORD *)v65;
      *(EVENT_DATA_DESCRIPTOR *)v22 = pData;
      v28 = *(_OWORD *)&v65[16];
      *(_OWORD *)(v22 + 16) = v27;
      *(_QWORD *)&v27 = *(_QWORD *)&v65[32];
      *(_OWORD *)(v22 + 32) = v28;
      *(_QWORD *)(v22 + 48) = v27;
      *(_DWORD *)(v22 + 56) = v26;
      v22 += 60LL;
      LOWORD(v60) = *((_WORD *)v23 - 4);
      WORD1(v60) = *((_WORD *)v23 - 2);
      v29 = *v23;
      v23 += 5;
      DWORD1(v60) = v29;
      *((_QWORD *)&v60 + 1) = *((_QWORD *)v23 - 2);
      *v20++ = v60;
      --v21;
    }
    while ( v21 );
    v9[768] = v9[348];
    *(_OWORD *)(v9 + 140) = *(_OWORD *)(a6 + 340);
    *(_OWORD *)(v9 + 124) = *(_OWORD *)(a6 + 324);
    *((_DWORD *)v9 + 77) = *((_DWORD *)v9 + 77) & 0xFFFDFFFF | (*(_DWORD *)(a6 + 544) != 0 ? 0x20000 : 0);
    *((_DWORD *)v9 + 179) = *(_DWORD *)(a6 + 1100);
    v30 = RIMGetQDCActivePathsData(v63, (__int64)v23, v22);
    v32 = *((_DWORD *)v9 + 6);
    v33 = (__int64)v30;
    *(_QWORD *)&v60 = v30;
    if ( v32 == 7 )
    {
      *((_DWORD *)v9 + 67) = *(_DWORD *)(a6 + 436);
      *((_DWORD *)v9 + 68) = *(_DWORD *)(a6 + 440);
      *((_DWORD *)v9 + 69) = *(_DWORD *)(a6 + 444);
      v41 = *((_DWORD *)v9 + 77) & 0xFFFFFFFE | (*(_DWORD *)(a6 + 476) != 0);
      *((_DWORD *)v9 + 77) = v41;
      v36 = *(_DWORD *)(a6 + 480) != 0 ? 2 : 0;
      v37 = v41 & 0xFFFFFFFD;
    }
    else
    {
      if ( v32 == 6 )
        goto LABEL_47;
      LODWORD(v58) = 0;
      *(_DWORD *)(a2 + 1192) = 1;
      RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)a2, a2 + 1192, v31);
      rimFindMonitorForDigitizerWithQDCData(a2, v33, &v58);
      if ( *v8 != 4 )
        goto LABEL_47;
      v34 = *((_DWORD *)v9 + 77) & 0xFFFFFFFD | (*(_DWORD *)(a6 + 480) != 0 ? 2 : 0);
      *((_DWORD *)v9 + 77) = v34;
      v35 = v34 & 0xFFFFFBFF | (*(_DWORD *)(a6 + 516) != 0 ? 0x400 : 0);
      *((_DWORD *)v9 + 77) = v35;
      v36 = *(_DWORD *)(a6 + 512) != 0 ? 0x200 : 0;
      v37 = v35 & 0xFFFFFDFF;
    }
    *((_DWORD *)v9 + 77) = v37 | v36;
LABEL_47:
    if ( *((_DWORD *)v9 + 37) - *((_DWORD *)v9 + 35) <= 1 || *((_DWORD *)v9 + 38) - *((_DWORD *)v9 + 36) <= 1 )
      *(_OWORD *)(v9 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize((__int64)&v61, *(_QWORD *)(a2 + 1200));
    v42 = *(_OWORD *)(a6 + 376);
    v43 = *(_OWORD *)(a6 + 392);
    LODWORD(pData.Ptr) = *(_DWORD *)(a6 + 356);
    v44 = *(_DWORD *)(a6 + 424);
    *(_OWORD *)&v65[4] = v42;
    *(_DWORD *)&v65[52] = v44;
    v45 = *(_OWORD *)(a6 + 408);
    *(_OWORD *)&v65[20] = v43;
    v46 = *(_OWORD *)v65;
    *(_OWORD *)&v65[36] = v45;
    *(EVENT_DATA_DESCRIPTOR *)(v9 + 156) = pData;
    v47 = *(_OWORD *)&v65[16];
    *(_OWORD *)(v9 + 172) = v46;
    v48 = *(_OWORD *)&v65[32];
    *(_OWORD *)(v9 + 188) = v47;
    v49 = *(_OWORD *)&v65[48];
    *(_OWORD *)(v9 + 204) = v48;
    v50 = v66;
    *(_OWORD *)(v9 + 220) = v49;
    v51 = v67;
    *(_OWORD *)(v9 + 236) = v50;
    *(_OWORD *)(v9 + 252) = v51;
    RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v9, 0, v33);
    if ( *((_DWORD *)v9 + 6) == 7
      && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v9) < 0 )
    {
      ProductString = -1073741668;
    }
    else
    {
      ProductString = RIMVirtGetDeviceButtons(v52, (_DWORD)v9, v53, (_DWORD)v8, a6);
      if ( ProductString >= 0 )
      {
        if ( *((_DWORD *)v9 + 6) != 7 )
        {
          v61 = *(struct _UNICODE_STRING *)(a2 + 208);
          ApiSetRetrieveCalibrationData(v9, &v61);
        }
      }
      else
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x30u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
      }
    }
  }
LABEL_57:
  RIMFreeQDCActivePathsData((_QWORD *)v60);
  if ( ProductString < 0 )
    goto LABEL_76;
  if ( *((_DWORD *)v9 + 6) == 7 )
    ProductString = RIMValidatePTPProperties(v59, v9);
  if ( ProductString < 0 )
  {
LABEL_76:
    if ( *((_QWORD *)v9 + 91) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v56);
    RIMFreePointerDevice(a1, (__int64)v9);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*((_DWORD *)v9 + 6) - 1) <= 3 )
    {
      *(_DWORD *)(a1 + 532) += *((_DWORD *)v9 + 178);
      *((_DWORD *)v9 + 77) |= 0x1000u;
      if ( *(_DWORD *)(a1 + 532) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v56);
    }
    if ( *((_DWORD *)v9 + 6) != 7 )
      ApiSetUpdatePointerDeviceSystemMetrics(v9);
    *((_DWORD *)v9 + 184) = 100;
    *((_QWORD *)v9 + 93) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v9;
    *((_QWORD *)v9 + 2) = a2;
    v57 = *(_QWORD **)(a1 + 440);
    if ( *v57 != a1 + 432 )
      __fastfail(3u);
    *v11 = a1 + 432;
    *((_QWORD *)v9 + 108) = v57;
    *v57 = v11;
    *(_QWORD *)(a1 + 440) = v11;
    *((_QWORD *)v9 + 91) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v57, a2) )
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x31u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
  }
  return (unsigned int)ProductString;
}
