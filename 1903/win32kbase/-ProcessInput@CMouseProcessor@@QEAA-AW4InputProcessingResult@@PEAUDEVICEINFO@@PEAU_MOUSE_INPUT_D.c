/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0192274
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C01872F0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00321A8 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C00327F4 (IsMouseIVEnabled.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0032BDC (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C008A928 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C009B700 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C009DEA0 (ResetAccessibilityCountersOnMouseInput.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     EtwTraceMouseInputApc @ 0x1C010DF00 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01908E0 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C0191A58 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0191AD4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C0193358 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0193700 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?SendSlowMouseProcessingTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@AEBU_MouseCursorPerf@@@Z @ 0x1C0193C80 (-SendSlowMouseProcessingTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@AEBU_MouseCursorPerf@@@.c)
 *     ApiSetEditionStopSonar @ 0x1C019E640 (ApiSetEditionStopSonar.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        __int64 a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4,
        char a5)
{
  __int64 v6; // r13
  char v9; // r15
  const struct _MousePerf *v10; // r12
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
  const struct tagUIPI_INFO_INT *v22; // r13
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // r9d
  USHORT Flags; // ax
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v31; // [rsp+30h] [rbp-D0h]
  char *v32; // [rsp+38h] [rbp-C8h]
  __int128 v33; // [rsp+40h] [rbp-C0h]
  LPCWSTR *v34; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int128 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  struct tagPOINT v39; // [rsp+90h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h]
  struct tagPOINT v44; // [rsp+E0h] [rbp-20h] BYREF

  v6 = a4;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v34, L"ProcessMouseInput", 0LL);
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
    *(_QWORD *)v10 = *(_QWORD *)(a2 + 2128);
    *(_QWORD *)(a1 + 2688) = *(_QWORD *)(a2 + 2144);
    *(_QWORD *)(a1 + 2696) = *(_QWORD *)(a2 + 2152);
    *(_QWORD *)(a1 + 2704) = *(_QWORD *)(a2 + 2168);
    v12 = 0;
  }
  *(_DWORD *)(a1 + 3152) = v12;
  v31 = 0;
  EtwTraceMouseInputApc(v11);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    InputTraceLogging::Mouse::DropInput();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v13, 6, 12, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
    }
    goto LABEL_49;
  }
  if ( gptiBlockInput )
  {
LABEL_8:
    InputTraceLogging::Mouse::DropInput();
    goto LABEL_49;
  }
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  ApiSetEditionStopSonar();
  if ( *(int *)(a2 + 256) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v14, 6, 13, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
    }
    if ( !(unsigned int)IsRemoteConnection(v15, v14, v16) && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    goto LABEL_8;
  }
  if ( IsMouseIVEnabled() && isChildPartition() )
    CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor::RootCursorAsync *)(a1 + 3592));
  v20 = (const struct _MOUSE_INPUT_DATA *)gptCursorAsync;
  if ( a3 )
  {
    v21 = (unsigned __int64)a3 + v6;
    v32 = (char *)a3 + v6;
    do
    {
      v22 = (const struct tagUIPI_INFO_INT *)((unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v21));
      if ( (a3->Flags & 4) != 0 )
      {
        v31 = 1;
      }
      else
      {
        if ( a5 )
        {
          v23 = UpconvertTime(a3->ExtraInformation);
          a3->ExtraInformation = 0;
          *(_QWORD *)&v33 = v23;
          v24 = v23 * gliQpcFreq.QuadPart / 0x3E8;
          *((_QWORD *)&v33 + 1) = v24;
        }
        else
        {
          *(_QWORD *)&v33 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          *((LARGE_INTEGER *)&v33 + 1) = KeQueryPerformanceCounter(0LL);
        }
        CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v24, a3, (struct DEVICEINFO *)a2);
        if ( a5 )
        {
          v25 = (v22 != 0LL ? 48 : 304) | 0x40;
          if ( !*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) )
            v25 = v22 != 0LL ? 48 : 304;
        }
        else
        {
          Flags = a3->Flags;
          if ( (Flags & 1) != 0 )
            a3->Flags = Flags | 2;
          v25 = v22 != 0LL ? 64 : 320;
          if ( !a3->LastX && !a3->LastY )
            v25 = (v22 != 0LL ? 64 : 320) | 8;
        }
        LODWORD(v35) = 2;
        *((_QWORD *)&v35 + 1) = *(_QWORD *)a2;
        v36 = *(_QWORD *)(a2 + 24);
        v37 = v33;
        v38 = *((_QWORD *)&v33 + 1);
        v40 = v35;
        v41 = v36;
        v42 = v33;
        v43 = *((_QWORD *)&v33 + 1);
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v44, (__int64)a3, &v42, v25, (__int64)&v40, 0LL);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v44);
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                             a1,
                             (const struct CMouseProcessor::MouseInputDataEx *)&v44) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v27, 6, 14, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
          }
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v44, 2048LL, v28)
            && (v44.y & 0x2AA) != 0 )
          {
            PoLatencySensitivityHint(0LL, v29);
          }
          v20 = **(const struct _MOUSE_INPUT_DATA ***)&CMouseProcessor::ProcessMouseInputData(
                                                         (LARGE_INTEGER *)a1,
                                                         &v39,
                                                         (struct tagPOINT)&v44,
                                                         v20,
                                                         v22,
                                                         (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v21 = (unsigned __int64)v32;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v22;
    }
    while ( v22 );
    v9 = a5;
    v10 = (const struct _MousePerf *)(a1 + 2680);
  }
  *(LARGE_INTEGER *)(a1 + 2720) = KeQueryPerformanceCounter(0LL);
  MousePerfSummary::CollectMousePerfTelemetry((MousePerfSummary *)(a1 + 2776), v10);
  if ( !v9 )
    MousePerfSummary::SendSlowMouseProcessingTelemetry(
      (MousePerfSummary *)(a1 + 2776),
      v10,
      (const struct _MouseCursorPerf *)(a1 + 2728));
LABEL_49:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v34);
  return v31;
}
