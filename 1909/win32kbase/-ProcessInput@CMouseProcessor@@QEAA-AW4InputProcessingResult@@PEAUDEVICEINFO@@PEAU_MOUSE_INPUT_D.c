/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0190084
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0185100 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031188 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0031458 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0031AA4 (IsMouseIVEnabled.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0031E8C (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0086668 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C009A280 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C009D5E0 (ResetAccessibilityCountersOnMouseInput.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     EtwTraceMouseInputApc @ 0x1C010B590 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E6F0 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C018F868 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C018F8E4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C0191158 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0191500 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?SendSlowMouseProcessingTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@AEBU_MouseCursorPerf@@@Z @ 0x1C0191A1C (-SendSlowMouseProcessingTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@AEBU_MouseCursorPerf@@@.c)
 *     ApiSetEditionStopSonar @ 0x1C019C390 (ApiSetEditionStopSonar.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // r13
  char v9; // r12
  const struct _MousePerf *v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const struct _MOUSE_INPUT_DATA *v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  CMouseProcessor *v24; // rcx
  unsigned __int64 QuadPart; // r12
  int v26; // r9d
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  bool v30; // zf
  struct tagUIPI_INFO_INT *v32; // [rsp+30h] [rbp-D0h]
  unsigned int v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-B0h]
  LPCWSTR *v36; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int128 v39; // [rsp+78h] [rbp-88h]
  unsigned __int64 v40; // [rsp+88h] [rbp-78h]
  struct tagPOINT v41; // [rsp+90h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int128 v44; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+D0h] [rbp-30h]
  struct tagPOINT v46; // [rsp+E0h] [rbp-20h] BYREF

  v6 = a4;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v36, L"ProcessMouseInput", 0LL);
  v9 = a5;
  v10 = (const struct _MousePerf *)(a1 + 2680);
  if ( a5 )
  {
    memset((void *)(a1 + 2680), 0, 0x30uLL);
    v12 = 2;
  }
  else
  {
    *(LARGE_INTEGER *)(a1 + 2712) = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)v10 = *(_QWORD *)(a2 + 2144);
    *(_QWORD *)(a1 + 2688) = *(_QWORD *)(a2 + 2160);
    *(_QWORD *)(a1 + 2696) = *(_QWORD *)(a2 + 2168);
    *(_QWORD *)(a1 + 2704) = *(_QWORD *)(a2 + 2184);
    v12 = 0;
  }
  *(_DWORD *)(a1 + 3116) = v12;
  v33 = 0;
  EtwTraceMouseInputApc(v11);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    InputTraceLogging::Mouse::DropInput();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v13, 6, 12, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
    goto LABEL_47;
  }
  if ( gptiBlockInput )
  {
LABEL_8:
    InputTraceLogging::Mouse::DropInput();
    goto LABEL_47;
  }
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  ApiSetEditionStopSonar();
  if ( *(int *)(a2 + 256) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v14, 6, 13, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
    if ( !(unsigned int)IsRemoteConnection(v15, v14, v16) && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    goto LABEL_8;
  }
  if ( IsMouseIVEnabled() && isChildPartition() )
    CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor::RootCursorAsync *)(a1 + 3552));
  v20 = (const struct _MOUSE_INPUT_DATA *)gptCursorAsync;
  if ( a3 )
  {
    v21 = a3 + v6;
    v35 = a3 + v6;
    do
    {
      v22 = (a3 + 24) & -(__int64)(a3 + 24 < v21);
      v32 = (struct tagUIPI_INFO_INT *)v22;
      if ( (*(_BYTE *)(a3 + 2) & 4) != 0 )
      {
        v33 = 1;
      }
      else
      {
        if ( v9 )
        {
          v23 = UpconvertTime(*(_DWORD *)(a3 + 20));
          *(_DWORD *)(a3 + 20) = 0;
          v34 = v23;
          QuadPart = v23 * gliQpcFreq.QuadPart / 0x3E8;
        }
        else
        {
          v34 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        }
        CMouseProcessor::HandleMouseForLegacyTouchpad(v24, (struct _MOUSE_INPUT_DATA *)a3, (struct DEVICEINFO *)a2);
        if ( a5 )
        {
          v26 = (v32 != 0LL ? 48 : 304) | 0x40;
          if ( !*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) )
            v26 = v32 != 0LL ? 48 : 304;
        }
        else
        {
          v26 = v32 != 0LL ? 64 : 320;
          if ( !*(_DWORD *)(a3 + 12) && !*(_DWORD *)(a3 + 16) )
            v26 |= 8u;
        }
        *((_QWORD *)&v37 + 1) = *(_QWORD *)a2;
        v38 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)&v39 = v34;
        v43 = v38;
        LODWORD(v37) = 2;
        *((_QWORD *)&v39 + 1) = QuadPart;
        v40 = QuadPart;
        v42 = v37;
        v45 = QuadPart;
        v44 = v39;
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v46, a3, &v44, v26, (__int64)&v42, 0LL);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v46);
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                             a1,
                             (const struct CMouseProcessor::MouseInputDataEx *)&v46) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v27, 6, 14, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
          }
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v46, 2048LL, v28)
            && (v46.y & 0x2AA) != 0 )
          {
            PoLatencySensitivityHint(0LL, v29);
          }
          v20 = **(const struct _MOUSE_INPUT_DATA ***)&CMouseProcessor::ProcessMouseInputData(
                                                         (LARGE_INTEGER *)a1,
                                                         &v41,
                                                         (struct tagPOINT)&v46,
                                                         v20,
                                                         v32,
                                                         (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v22 = (__int64)v32;
        v9 = a5;
      }
      a3 = v22;
      v30 = v22 == 0;
      v21 = v35;
    }
    while ( !v30 );
    v10 = (const struct _MousePerf *)(a1 + 2680);
  }
  *(LARGE_INTEGER *)(a1 + 2720) = KeQueryPerformanceCounter(0LL);
  MousePerfSummary::CollectMousePerfTelemetry((MousePerfSummary *)(a1 + 2776), v10);
  if ( !v9 )
    MousePerfSummary::SendSlowMouseProcessingTelemetry(
      (MousePerfSummary *)(a1 + 2776),
      v10,
      (const struct _MouseCursorPerf *)(a1 + 2728));
LABEL_47:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v36);
  return v33;
}
