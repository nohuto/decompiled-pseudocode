/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0154F2C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0039AA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C013AA70 (WPP_RECORDER_SF_i.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C013C218 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x1C0140480 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C014F320 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C014FA20 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C014FBA8 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0155C04 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01569C8 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01584F0 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0158A10 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0158C0C (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0159374 (rimUpdatePointerDeviceFrameScanTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // r14
  bool v10; // cf
  int v11; // r15d
  _UNKNOWN **v12; // rcx
  void *v13; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // r15d
  int v22; // edx
  int v23; // r9d
  unsigned int v24; // r12d
  unsigned __int16 v25; // r15
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  LARGE_INTEGER v31; // rax
  int v32; // r8d
  unsigned __int64 v33; // rdx
  int v34; // [rsp+50h] [rbp-29h] BYREF
  __int64 v35; // [rsp+58h] [rbp-21h]
  int v36; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-15h] BYREF
  int v38; // [rsp+68h] [rbp-11h] BYREF
  int v39; // [rsp+6Ch] [rbp-Dh] BYREF
  int v40; // [rsp+70h] [rbp-9h] BYREF
  int v41; // [rsp+74h] [rbp-5h] BYREF
  __int64 v42; // [rsp+78h] [rbp-1h]
  LPCWSTR *v43; // [rsp+80h] [rbp+7h] BYREF
  LPCWSTR *v44[9]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int16 v45; // [rsp+E0h] [rbp+67h] BYREF
  int v46; // [rsp+E8h] [rbp+6Fh]
  int v47; // [rsp+F0h] [rbp+77h] BYREF
  int v48; // [rsp+F8h] [rbp+7Fh]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v43, L"ProcessPointerInput", 0LL);
  v5 = *(_QWORD *)(a2 + 464);
  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_DWORD *)(a2 + 264);
  v8 = *(_QWORD *)(v5 + 24);
  v9 = *(unsigned __int16 *)(v5 + 44);
  v10 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
  v35 = v6;
  v11 = -v10;
  v12 = &WPP_RECORDER_INITIALIZED;
  v13 = &WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v13, 1, 14, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  if ( !*(_QWORD *)(v6 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v13, v4);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = RIMGetPointerInputType(v35) - 2;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          v18 = 16;
        else
          v18 = 0;
      }
      else
      {
        v18 = 2;
      }
    }
    else
    {
      v18 = 12;
    }
  }
  else
  {
    v18 = 10;
  }
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v18,
    0LL,
    0,
    v11 != 0 ? 10 : 2);
  v20 = v7 % (unsigned int)v9;
  v19 = v7 / (unsigned int)v9;
  if ( v7 % (unsigned int)v9 )
  {
    if ( v7 > (unsigned int)v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_Dd(
          (_DWORD)gRimLog,
          v20,
          1,
          15,
          (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
          v7,
          v9);
      }
      goto LABEL_52;
    }
    v19 = 1;
  }
  if ( v19 )
  {
    v42 = v19;
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v44,
        L"ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v43);
      v21 = 0;
      v46 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v8,
                  v9,
                  (__int64)&v47,
                  (__int64)&v37,
                  (__int64)&v36,
                  (__int64)&v34,
                  (__int64)&v39,
                  (__int64)&v45) >= 0 )
      {
        if ( !v36 )
          goto LABEL_34;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v8, (unsigned int)v9);
        if ( !v47 )
        {
          if ( *(_DWORD *)(v35 + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(
              (struct RawInputManagerObject *)a1,
              (struct RIMDEV *)a2,
              v8,
              v9,
              PerformanceCounter.QuadPart);
            goto LABEL_51;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v23 = 17;
          goto LABEL_22;
        }
        if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v35 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(a1, a2, v8, v9, 0);
LABEL_34:
          RIMStoreRawDataInPointerDeviceFrame(a1, a2, v8, v9, &v38);
          v48 = 0;
          v24 = v37;
          if ( v37 )
          {
            v25 = v45;
            while ( 1 )
            {
              rimProcessPointerDeviceContact(a1, a2, v8, v9, v25, v38, (__int64)&v40, (__int64)&v41);
              if ( v39 )
              {
                if ( v40 )
                  break;
              }
              v27 = v46;
              v28 = v35;
              if ( v41 )
                v27 = 1;
              v46 = v27;
              if ( (*(_DWORD *)(v35 + 312) & 2) != 0 )
              {
                v25 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 712) + 24LL) + 8LL * v25 + 4);
                v45 = v25;
              }
              else
              {
                if ( v47 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, 1LL, v26);
                if ( v24 != 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, 1LL, v26);
              }
              if ( ++v48 >= v24 )
              {
                v21 = v46;
                goto LABEL_48;
              }
            }
            v21 = v46;
            v29 = 1;
            v34 = 1;
          }
          else
          {
LABEL_48:
            v29 = v34;
          }
          if ( v29 )
          {
            rimProcessMissingPointerDeviceContacts(a1, a2, v21);
            RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2, v30);
            RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 0LL);
          }
          goto LABEL_51;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 18;
          goto LABEL_22;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 16;
LABEL_22:
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v22, 1, v23, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
      }
LABEL_51:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v44);
      v8 += v9;
      --v42;
    }
    while ( v42 );
  }
LABEL_52:
  v31 = KeQueryPerformanceCounter(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = (unsigned __int64)(1000000 * (v31.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 520);
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_i(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v33,
      v32,
      19,
      (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
      (unsigned __int64)(1000000 * (v31.QuadPart - PerformanceCounter.QuadPart)) / *(_QWORD *)(a1 + 520));
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v43);
}
