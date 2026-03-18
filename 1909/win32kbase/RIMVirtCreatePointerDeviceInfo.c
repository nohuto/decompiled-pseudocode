/*
 * XREFs of RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0
 * Callers:
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
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
 *     RIMFreePointerDevice @ 0x1C013CD28 (RIMFreePointerDevice.c)
 *     RIMInitializeDeadzone @ 0x1C013E398 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C013E560 (RIMIsDeviceExcluded.c)
 *     RIMVirtAssignTouchType @ 0x1C013F5B0 (RIMVirtAssignTouchType.c)
 *     RIMVirtGetDeviceButtons @ 0x1C0140118 (RIMVirtGetDeviceButtons.c)
 *     RIMVirtGetProductString @ 0x1C01402D8 (RIMVirtGetProductString.c)
 *     RIMGetDeviceParent @ 0x1C0141278 (RIMGetDeviceParent.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0143D70 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0143E7C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0144A88 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0159664 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMValidatePTPProperties @ 0x1C015B15C (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0177C9C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C019E350 (ApiSetRetrieveCalibrationData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int16 *v8; // rsi
  char *v9; // rbx
  _QWORD *v11; // r12
  int ProductString; // r15d
  void *v13; // rdx
  const wchar_t *v14; // rax
  UINT32 cData; // r10d
  __int16 v16; // cx
  int v17; // ecx
  int v18; // esi
  __int64 v19; // rdx
  int v20; // edx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  _OWORD *v23; // r9
  __int64 v24; // r8
  _DWORD *v25; // rdx
  _WORD *v26; // rcx
  __int64 v27; // r10
  __int16 v28; // ax
  ULONG Size; // eax
  EVENT_DATA_DESCRIPTOR v30; // xmm1
  EVENT_DATA_DESCRIPTOR v31; // xmm0
  int v32; // eax
  __int64 v33; // rdx
  unsigned int *v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // ecx
  unsigned int *v37; // r15
  __int64 v38; // rax
  EVENT_DATA_DESCRIPTOR v39; // xmm0
  EVENT_DATA_DESCRIPTOR v40; // xmm1
  int v41; // eax
  EVENT_DATA_DESCRIPTOR v42; // xmm0
  EVENT_DATA_DESCRIPTOR v43; // xmm1
  EVENT_DATA_DESCRIPTOR v44; // xmm0
  EVENT_DATA_DESCRIPTOR v45; // xmm1
  EVENT_DATA_DESCRIPTOR v46; // xmm0
  EVENT_DATA_DESCRIPTOR v47; // xmm1
  EVENT_DATA_DESCRIPTOR v48; // xmm0
  int v49; // ecx
  int v50; // r8d
  EVENT_DATA_DESCRIPTOR v51; // xmm1
  int v52; // eax
  ULONGLONG Ptr; // xmm0_8
  int v54; // ecx
  int v55; // edx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rcx
  int v60; // edx
  __int16 *v61; // [rsp+30h] [rbp-A9h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-A1h]
  __int128 v63; // [rsp+40h] [rbp-99h]
  struct _UNICODE_STRING v64; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v65[2]; // [rsp+60h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData[7]; // [rsp+70h] [rbp-69h] BYREF

  v65[0] = 0LL;
  v65[1] = 0LL;
  v61 = a4;
  v62 = 0;
  *(_QWORD *)&v63 = 0LL;
  v8 = a4;
  v9 = (char *)Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  if ( !v9 )
    return 3221225628LL;
  v11 = v9 + 864;
  *((_DWORD *)v9 + 180) = *(_DWORD *)(a6 + 1096);
  *((_QWORD *)v9 + 109) = v9 + 864;
  *((_QWORD *)v9 + 108) = v9 + 864;
  ProductString = RIMVirtGetProductString(v9, a6);
  v13 = &WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids;
  if ( ProductString < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v13, 1, 45, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
    if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
    {
      v14 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
      TlgCreateWsz(&pData[2], v14);
      TlgCreateWsz(&pData[3], *(LPCWSTR *)(a2 + 216));
      TlgCreateWsz(&pData[4], L"Failed to retrieve productString");
      TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2A07, 0LL, 0LL, cData, pData);
    }
  }
  *(_OWORD *)(a2 + 2104) = *(_OWORD *)(a6 + 2072);
  *(_OWORD *)(a2 + 2120) = *(_OWORD *)(a6 + 2088);
  *(_QWORD *)(a2 + 2136) = *(_QWORD *)(a6 + 2104);
  v16 = *v8;
  v64 = (struct _UNICODE_STRING)*((_OWORD *)v9 + 20);
  if ( RIMIsDeviceExcluded(v16, &v64) )
    goto LABEL_17;
  v17 = *(_DWORD *)(a1 + 84);
  v18 = 1;
  v19 = (__int64)v61;
  if ( (v17 & 4) != 0 )
  {
    if ( *v61 == 2 )
    {
      *((_DWORD *)v9 + 6) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 46, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_16;
    }
    if ( *v61 == 1 )
    {
      *((_DWORD *)v9 + 6) = 6;
      if ( RIMIsRunningOnDesktop() )
        goto LABEL_16;
      goto LABEL_55;
    }
  }
  if ( (v17 & 0x18) != 0 && (unsigned __int16)(*v61 - 4) <= 1u )
  {
    *((_DWORD *)v9 + 6) = 1;
    ProductString = RIMVirtAssignTouchType((__int64)v9, v19, a6);
    if ( ProductString == -1073741668 )
      goto LABEL_61;
    if ( *v61 == 5 )
    {
      v62 = *((_DWORD *)v9 + 6);
      *((_DWORD *)v9 + 6) = 7;
    }
    pData[0] = *(EVENT_DATA_DESCRIPTOR *)(a6 + 436);
    pData[1] = *(EVENT_DATA_DESCRIPTOR *)(a6 + 452);
    v51 = pData[1];
    pData[2].Ptr = *(_QWORD *)(a6 + 468);
    v52 = *(_DWORD *)(a6 + 476);
    *(EVENT_DATA_DESCRIPTOR *)(v9 + 268) = pData[0];
    Ptr = pData[2].Ptr;
    *(EVENT_DATA_DESCRIPTOR *)(v9 + 284) = v51;
    *(_QWORD *)(v9 + 300) = Ptr;
    *((_DWORD *)v9 + 77) = v52;
    v54 = *(_DWORD *)(a1 + 84);
    if ( (v54 & 4) != 0 && (unsigned int)(*((_DWORD *)v9 + 6) - 5) <= 1 )
      v18 = 0;
    if ( (v54 & 8) != 0 && *((_DWORD *)v9 + 6) == 7 )
      v18 = 0;
    if ( (v54 & 0x10) != 0 && (unsigned int)(*((_DWORD *)v9 + 6) - 1) <= 3 )
      v18 = 0;
    if ( !v18 )
    {
      *((_DWORD *)v9 + 180) = *(_DWORD *)(a6 + 1096);
      *((_DWORD *)v9 + 226) = *(_DWORD *)(a6 + 1248);
    }
    ProductString = 0;
    goto LABEL_54;
  }
  if ( (v17 & 0x20) != 0 && (*(_DWORD *)(a2 + 184) & 0x4000) != 0 )
  {
    v18 = 0;
LABEL_54:
    if ( v18 != 1 )
    {
LABEL_16:
      v8 = v61;
LABEL_17:
      v21 = 6LL;
      *((_DWORD *)v9 + 78) ^= (*((_DWORD *)v9 + 78) ^ (*(_DWORD *)(a6 + 508) << 7)) & 0x80;
      *((_DWORD *)v9 + 210) = *(_DWORD *)(a6 + 1200);
      v22 = v9 + 32;
      do
      {
        *v22 = -1;
        v22 += 4;
        --v21;
      }
      while ( v21 );
      if ( (int)RIMCmAllocPointerDeviceContacts(v9, 2020635474LL) >= 0 )
      {
        v23 = v9 + 28;
        v24 = (__int64)(v9 + 352);
        v25 = (_DWORD *)(a6 + 212);
        v26 = (_WORD *)(a6 + 672);
        v27 = 6LL;
        do
        {
          LODWORD(pData[0].Ptr) = (unsigned __int16)*(v26 - 4);
          HIDWORD(pData[0].Ptr) = *((_DWORD *)v26 - 1);
          v28 = *v26;
          v26 += 32;
          LOWORD(pData[0].Size) = v28;
          HIWORD(pData[0].Size) = *(v26 - 30);
          pData[0].Reserved = (unsigned __int16)*(v26 - 28);
          LODWORD(pData[1].Ptr) = *((_DWORD *)v26 - 13);
          HIDWORD(pData[1].Ptr) = (unsigned __int16)*(v26 - 24);
          *(_QWORD *)&pData[1].Size = *(_QWORD *)(v26 - 22);
          pData[2] = *(EVENT_DATA_DESCRIPTOR *)(v26 - 18);
          pData[3].Ptr = *(_QWORD *)(v26 - 10);
          pData[3].Size = (unsigned __int16)*(v26 - 6);
          Size = pData[3].Size;
          v30 = pData[1];
          *(EVENT_DATA_DESCRIPTOR *)v24 = pData[0];
          v31 = pData[2];
          *(EVENT_DATA_DESCRIPTOR *)(v24 + 16) = v30;
          v30.Ptr = pData[3].Ptr;
          *(EVENT_DATA_DESCRIPTOR *)(v24 + 32) = v31;
          *(_QWORD *)(v24 + 48) = v30.Ptr;
          *(_DWORD *)(v24 + 56) = Size;
          v24 += 60LL;
          LOWORD(v63) = *((_WORD *)v25 - 4);
          WORD1(v63) = *((_WORD *)v25 - 2);
          v32 = *v25;
          v25 += 5;
          DWORD1(v63) = v32;
          *((_QWORD *)&v63 + 1) = *((_QWORD *)v25 - 2);
          *v23++ = v63;
          --v27;
        }
        while ( v27 );
        v9[776] = v9[356];
        *(_OWORD *)(v9 + 140) = *(_OWORD *)(a6 + 340);
        *(_OWORD *)(v9 + 124) = *(_OWORD *)(a6 + 324);
        v33 = *((_DWORD *)v9 + 78) & 0xFFFF7FFF | (*(_DWORD *)(a6 + 540) != 0 ? 0x8000 : 0);
        *((_DWORD *)v9 + 78) = v33;
        LODWORD(v33) = v33 & 0xFFFEFFFF;
        *((_DWORD *)v9 + 78) = v33 | (*(_DWORD *)(a6 + 544) != 0 ? 0x10000 : 0);
        *((_DWORD *)v9 + 181) = *(_DWORD *)(a6 + 1100);
        v34 = RIMGetQDCActivePathsData((unsigned int *)v65, v33, v24);
        v36 = *((_DWORD *)v9 + 6) - 6;
        *(_QWORD *)&v63 = v34;
        v11 = v9 + 864;
        v37 = v34;
        if ( v36 > 1 )
        {
          LODWORD(v61) = 0;
          *(_DWORD *)(a2 + 1336) = 1;
          RIMReadDigitizerToMonitorMappings(a2);
          rimFindMonitorForDigitizerWithQDCData(a2, v37, &v61);
          if ( *v8 == 4 )
          {
            v35 = *((_DWORD *)v9 + 78) & 0xFFFFFEFF | (*(_DWORD *)(a6 + 512) != 0 ? 0x100 : 0);
            *((_DWORD *)v9 + 78) = v35;
            LODWORD(v35) = v35 & 0xFFFFFF7F;
            *((_DWORD *)v9 + 78) = v35 | (*(_DWORD *)(a6 + 508) != 0 ? 0x80 : 0);
          }
        }
        if ( *((_DWORD *)v9 + 37) - *((_DWORD *)v9 + 35) <= 1 || *((_DWORD *)v9 + 38) - *((_DWORD *)v9 + 36) <= 1 )
        {
          v38 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344), v35, 1LL);
          *(_OWORD *)(v9 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v64, v38);
        }
        memset(pData, 0, sizeof(pData));
        v39 = *(EVENT_DATA_DESCRIPTOR *)(a6 + 376);
        v40 = *(EVENT_DATA_DESCRIPTOR *)(a6 + 392);
        LODWORD(pData[0].Ptr) = *(_DWORD *)(a6 + 356);
        v41 = *(_DWORD *)(a6 + 424);
        *(EVENT_DATA_DESCRIPTOR *)((char *)&pData[1] + 4) = v39;
        HIDWORD(pData[4].Ptr) = v41;
        v42 = *(EVENT_DATA_DESCRIPTOR *)(a6 + 408);
        *(EVENT_DATA_DESCRIPTOR *)((char *)&pData[2] + 4) = v40;
        v43 = pData[1];
        *(EVENT_DATA_DESCRIPTOR *)((char *)&pData[3] + 4) = v42;
        *(EVENT_DATA_DESCRIPTOR *)(v9 + 156) = pData[0];
        v44 = pData[2];
        *(EVENT_DATA_DESCRIPTOR *)(v9 + 172) = v43;
        v45 = pData[3];
        *(EVENT_DATA_DESCRIPTOR *)(v9 + 188) = v44;
        v46 = pData[4];
        *(EVENT_DATA_DESCRIPTOR *)(v9 + 204) = v45;
        v47 = pData[5];
        *(EVENT_DATA_DESCRIPTOR *)(v9 + 220) = v46;
        v48 = pData[6];
        *(EVENT_DATA_DESCRIPTOR *)(v9 + 236) = v47;
        *(EVENT_DATA_DESCRIPTOR *)(v9 + 252) = v48;
        RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v9);
        if ( *((_DWORD *)v9 + 6) == 7
          && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v9) < 0 )
        {
          ProductString = -1073741668;
        }
        else
        {
          ProductString = RIMVirtGetDeviceButtons(v49, (_DWORD)v9, v50, (_DWORD)v8, a6);
          if ( ProductString >= 0 )
          {
            if ( *((_DWORD *)v9 + 6) != 7 )
            {
              v64 = *(struct _UNICODE_STRING *)(a2 + 208);
              ApiSetRetrieveCalibrationData(v9, &v64);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v55) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v55, 1, 47, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
          }
        }
      }
      goto LABEL_61;
    }
  }
LABEL_55:
  ProductString = -1073741808;
LABEL_61:
  RIMFreeQDCActivePathsData((_QWORD *)v63);
  if ( ProductString < 0 )
    goto LABEL_79;
  if ( *((_DWORD *)v9 + 6) == 7 )
    ProductString = RIMValidatePTPProperties(v62, v9);
  if ( ProductString < 0 )
  {
LABEL_79:
    if ( *((_QWORD *)v9 + 92) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58);
    RIMFreePointerDevice(a1, (__int64)v9);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*((_DWORD *)v9 + 6) - 1) <= 3 )
    {
      *(_DWORD *)(a1 + 532) += *((_DWORD *)v9 + 180);
      *((_DWORD *)v9 + 78) |= 0x400u;
      if ( *(_DWORD *)(a1 + 532) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58);
    }
    *((_DWORD *)v9 + 186) = 100;
    *((_QWORD *)v9 + 94) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v9;
    *((_QWORD *)v9 + 2) = a2;
    v59 = *(_QWORD **)(a1 + 440);
    if ( *v59 != a1 + 432 )
      __fastfail(3u);
    v11[1] = v59;
    *v11 = a1 + 432;
    *v59 = v11;
    *(_QWORD *)(a1 + 440) = v11;
    *((_QWORD *)v9 + 92) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(0LL, a2) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v60) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v60, 1, 48, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
  }
  return (unsigned int)ProductString;
}
