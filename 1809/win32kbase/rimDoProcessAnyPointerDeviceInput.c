/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0128240 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     WPP_RECORDER_SF_i @ 0x1C010FB18 (WPP_RECORDER_SF_i.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     RIMGetPointerInputType @ 0x1C0117D70 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0123534 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0123694 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C0129D6C (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C012B5E8 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C012BA30 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C012C434 (rimUpdatePointerDeviceFrameScanTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // r14
  bool v8; // cf
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  LARGE_INTEGER PerformanceCounter; // rbx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // r13d
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // r13
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  LARGE_INTEGER v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // [rsp+28h] [rbp-51h]
  int v29; // [rsp+50h] [rbp-29h]
  int v30; // [rsp+54h] [rbp-25h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h]
  int v32; // [rsp+60h] [rbp-19h] BYREF
  int v33; // [rsp+64h] [rbp-15h] BYREF
  int v34; // [rsp+68h] [rbp-11h] BYREF
  int v35; // [rsp+6Ch] [rbp-Dh] BYREF
  int v36; // [rsp+70h] [rbp-9h] BYREF
  __int64 v37; // [rsp+78h] [rbp-1h]
  LPCWSTR *v38; // [rsp+80h] [rbp+7h] BYREF
  LPCWSTR *v39[9]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int16 v40; // [rsp+E0h] [rbp+67h] BYREF
  int v41; // [rsp+E8h] [rbp+6Fh]
  unsigned int v42; // [rsp+F0h] [rbp+77h] BYREF
  int v43; // [rsp+F8h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v38, L"ProcessPointerInput", 0LL);
  v4 = *(_QWORD *)(a2 + 464);
  v5 = *(_DWORD *)(a2 + 264);
  v6 = *(_QWORD *)(v4 + 24);
  v7 = *(unsigned __int16 *)(v4 + 44);
  v8 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
  v31 = *(_QWORD *)(a2 + 480);
  v9 = -v8;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0xEu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  if ( !*(_QWORD *)(v31 + 728) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = RIMGetPointerInputType(v31) - 2;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      v16 = 12;
      goto LABEL_9;
    }
    if ( v15 == 1 )
    {
      v16 = 2;
      goto LABEL_9;
    }
  }
  v16 = 10;
LABEL_9:
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v16,
    0LL,
    0,
    v9 != 0 ? 10 : 2);
  v17 = v5 / (unsigned int)v7;
  if ( v5 % (unsigned int)v7 )
  {
    if ( v5 > (unsigned int)v7 )
    {
      LODWORD(v28) = v5;
      WPP_RECORDER_SF_dd(gRimLog, 3u, 0x16u, 0xFu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v28, v7);
      goto LABEL_47;
    }
    v17 = 1;
  }
  if ( v17 )
  {
    v37 = v17;
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v39,
        L"ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v38);
      v18 = 0;
      v41 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v6,
                  v7,
                  (__int64)&v43,
                  (__int64)&v42,
                  (__int64)&v32,
                  (__int64)&v30,
                  (__int64)&v34,
                  (__int64)&v40) >= 0 )
      {
        if ( !v32 )
          goto LABEL_26;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v6, (unsigned int)v7);
        if ( v43 )
        {
          if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
          {
            if ( *(_DWORD *)(v31 + 24) == 7 )
              rimProcessPointerDeviceButtonContact(a1, a2, v6, v7, 0);
LABEL_26:
            RIMStoreRawDataInPointerDeviceFrame(a1, a2, v6, v7, &v33);
            v29 = 0;
            if ( v42 )
            {
              v20 = v40;
              while ( 1 )
              {
                rimProcessPointerDeviceContact(a1, a2, v6, v7, v20, v33, (__int64)&v35, (__int64)&v36);
                if ( v34 )
                {
                  if ( v35 )
                    break;
                }
                v22 = v41;
                v23 = v31;
                if ( v36 )
                  v22 = 1;
                v41 = v22;
                if ( (*(_DWORD *)(v31 + 308) & 8) != 0 )
                {
                  v20 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 704) + 24LL) + 8LL * v20 + 4);
                  v40 = v20;
                }
                else
                {
                  if ( v43 != 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, 1LL, v21);
                  if ( v42 != 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, 1LL, v21);
                }
                if ( ++v29 >= v42 )
                {
                  v18 = v41;
                  goto LABEL_40;
                }
              }
              v18 = v41;
              v24 = 1;
              v30 = 1;
            }
            else
            {
LABEL_40:
              v24 = v30;
            }
            if ( v24 )
            {
              rimProcessMissingPointerDeviceContacts(a1, a2, v18);
              RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2);
              RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 0);
            }
            goto LABEL_43;
          }
          v19 = 18;
        }
        else
        {
          if ( *(_DWORD *)(v31 + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(
              (struct RawInputManagerObject *)a1,
              (struct RIMDEV *)a2,
              v6,
              v7,
              PerformanceCounter.QuadPart);
            goto LABEL_43;
          }
          v19 = 17;
        }
      }
      else
      {
        v19 = 16;
      }
      WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, v19, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
LABEL_43:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v39);
      v6 += v7;
      --v37;
    }
    while ( v37 );
  }
LABEL_47:
  v25 = KeQueryPerformanceCounter(0LL);
  WPP_RECORDER_SF_i(
    v26,
    (unsigned __int64)(1000000 * (v25.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 520),
    v27,
    0x13u,
    (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids,
    (unsigned __int64)(1000000 * (v25.QuadPart - PerformanceCounter.QuadPart)) / *(_QWORD *)(a1 + 520));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v38);
}
