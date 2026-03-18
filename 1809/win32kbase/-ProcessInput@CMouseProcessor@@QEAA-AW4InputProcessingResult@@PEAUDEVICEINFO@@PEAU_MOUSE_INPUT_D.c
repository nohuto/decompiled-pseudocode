/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0158B84
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0153340 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0031360 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0074A9C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C0087D10 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C008A200 (ResetAccessibilityCountersOnMouseInput.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     EtwTraceMouseInputApc @ 0x1C00E7940 (EtwTraceMouseInputApc.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01582D8 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0158370 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        __int64 *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4,
        char a5)
{
  __int64 v6; // rsi
  unsigned int v9; // r12d
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const struct _MOUSE_INPUT_DATA *v17; // rbx
  unsigned __int64 v18; // rcx
  const struct tagUIPI_INFO_INT *v19; // rsi
  unsigned __int64 v20; // rax
  CMouseProcessor *v21; // rcx
  unsigned __int64 QuadPart; // r12
  int v23; // r9d
  USHORT Flags; // dx
  __int64 v25; // rdx
  int v27; // [rsp+30h] [rbp-D0h]
  char *v28; // [rsp+40h] [rbp-C0h]
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  LPCWSTR *v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+70h] [rbp-90h]
  __int128 v32; // [rsp+80h] [rbp-80h]
  struct tagPOINT v33; // [rsp+90h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v35; // [rsp+B0h] [rbp-50h] BYREF

  v6 = a4;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v30, L"ProcessMouseInput", 0LL);
  v9 = 0;
  v27 = 0;
  EtwTraceMouseInputApc(v10);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    WPP_RECORDER_SF_(a1[1], 4u, 0xAu, 0xBu, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
  }
  else if ( !gptiBlockInput )
  {
    if ( (gdwPUDFlags & 0x100) != 0 )
      ResetAccessibilityCountersOnMouseInput();
    if ( (int)IsEditionStopSonarSupported() >= 0 )
      EditionStopSonar();
    if ( *(int *)(a2 + 256) >= 0 )
    {
      v17 = (const struct _MOUSE_INPUT_DATA *)gptCursorAsync;
      if ( a3 )
      {
        v18 = (unsigned __int64)a3 + v6;
        v28 = (char *)a3 + v6;
        do
        {
          v19 = (const struct tagUIPI_INFO_INT *)((unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v18));
          if ( (a3->Flags & 4) != 0 )
          {
            v9 = 1;
            v27 = 1;
          }
          else
          {
            if ( a5 )
            {
              v20 = UpconvertTime(a3->ExtraInformation);
              a3->ExtraInformation = 0;
              *(_QWORD *)&v29 = v20;
              QuadPart = v20 * gliQpcFreq.QuadPart / 0x3E8;
            }
            else
            {
              *(_QWORD *)&v29 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
            }
            CMouseProcessor::HandleMouseForLegacyTouchpad(v21, a3, (struct DEVICEINFO *)a2);
            if ( a5 )
            {
              v23 = (v19 != 0LL ? 48 : 304) | 0x40;
              if ( !*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) )
                v23 = v19 != 0LL ? 48 : 304;
            }
            else
            {
              Flags = a3->Flags;
              v23 = v19 != 0LL ? 64 : 320;
              if ( (Flags & 1) != 0 && (*(_DWORD *)(a2 + 740) & 1) != 0 )
                a3->Flags = Flags | 2;
            }
            *((_QWORD *)&v31 + 1) = *(_QWORD *)a2;
            *(_QWORD *)&v32 = v29;
            LODWORD(v31) = 2;
            *((_QWORD *)&v32 + 1) = QuadPart;
            v34 = v32;
            v29 = v31;
            CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v35, (__int64)a3, &v34, v23, &v29, 0LL);
            InputTraceLogging::Mouse::ProcessInput(
              (const struct RIMDEV *)a2,
              (const struct CMouseProcessor::MouseInputDataEx *)&v35);
            if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                                 (__int64)a1,
                                 (const struct CMouseProcessor::MouseInputDataEx *)&v35) == 1 )
            {
              WPP_RECORDER_SF_(a1[1], 4u, 0xAu, 0xDu, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
            }
            else
            {
              if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v35, 2048) && (v35.y & 0x2AA) != 0 )
                PoLatencySensitivityHint(0LL, v25);
              v17 = **(const struct _MOUSE_INPUT_DATA ***)&CMouseProcessor::ProcessMouseInputData(
                                                             (CMouseProcessor *)a1,
                                                             &v33,
                                                             (struct tagPOINT)&v35,
                                                             v17,
                                                             v19,
                                                             (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
            }
            v18 = (unsigned __int64)v28;
            v9 = v27;
          }
          a3 = (struct _MOUSE_INPUT_DATA *)v19;
        }
        while ( v19 );
      }
    }
    else
    {
      WPP_RECORDER_SF_(a1[1], 3u, 0xAu, 0xCu, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
      if ( !(unsigned int)IsRemoteConnection(v12, v11, v13) && *(_DWORD *)(a2 + 256) != -1073741738 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v30);
  return v9;
}
