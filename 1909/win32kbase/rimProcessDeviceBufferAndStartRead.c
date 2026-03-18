/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C01513BC
 * Callers:
 *     rimCompleteReads @ 0x1C00580E8 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0058C78 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMInjectInput @ 0x1C01372D0 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01479DC (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C0148530 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C0148930 (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C014A564 (RIMIDE_InjectGenericHidInput.c)
 *     rimInputApc @ 0x1C0150BC0 (rimInputApc.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C0186328 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01863F0 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7CB0 (rimFreeAutoRepeatCompleteFrame.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0131FB8 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C0133828 (rimIsPointerInputAllowed.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013835C (RimDeviceTypeToRimInputTypeString.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0145674 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C01492D8 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMHandleTTMDeviceInput @ 0x1C014AFC8 (RIMHandleTTMDeviceInput.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C014FEF4 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C014FF88 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C0151984 (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0151A84 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C0151EF0 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0151F7C (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0152D34 (RIMProcessAnyPointerDeviceInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C01581D8 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C019CAF8 (ApiSetEtwTracePointerDeviceReadStart.c)
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C019CB88 (ApiSetEtwTracePointerDeviceReadStop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  int v5; // edx
  int v6; // r15d
  int *v7; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned int v9; // r10d
  int v10; // r9d
  const WCHAR *v11; // rdx
  const wchar_t *v12; // rax
  __int64 cData; // r11
  __int64 v14; // rax
  unsigned int v15; // ecx
  bool v16; // zf
  __int64 v17; // r8
  int v18; // eax
  char v19; // r13
  char *v20; // r12
  __int64 v21; // rcx
  int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // edx
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  char *v38; // rbx
  char *v39; // rdi
  char **v40; // rax
  unsigned int v43; // [rsp+44h] [rbp-85h]
  BOOL v44; // [rsp+48h] [rbp-81h] BYREF
  __int64 v45; // [rsp+50h] [rbp-79h] BYREF
  __int64 v46; // [rsp+58h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v48; // [rsp+80h] [rbp-49h]
  __int64 v49; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+A0h] [rbp-29h] BYREF
  __int64 *v52; // [rsp+B0h] [rbp-19h]
  __int64 v53; // [rsp+B8h] [rbp-11h]
  __int64 *v54; // [rsp+C0h] [rbp-9h]
  __int64 v55; // [rsp+C8h] [rbp-1h]
  BOOL *v56; // [rsp+D0h] [rbp+7h]
  __int64 v57; // [rsp+D8h] [rbp+Fh]

  v6 = RIMHandleTTMDeviceInput((__int64)a2);
  v43 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v5, 1, 23, (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids, v6);
    }
    v43 = 0;
  }
  ++*((_DWORD *)a2 + 549);
  v7 = (int *)((char *)a2 + 2208);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = *((_DWORD *)a2 + 549) % 0x64u;
  if ( !v9 && (v10 = *v7) == 0
    || (v10 = *v7) != 0
    && PerformanceCounter.QuadPart - *((_QWORD *)a2 + 275) >= 600000 * gliQpcFreq.QuadPart / 1000
    && !v9 )
  {
    if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
    {
      v11 = (const WCHAR *)*((_QWORD *)a2 + 27);
      v48 = (__int64 *)"rimProcessDeviceBufferAndStartRead";
      v49 = 35LL;
      TlgCreateWsz(&pDesc, v11);
      v12 = RimDeviceTypeToRimInputTypeString((__int64)a2, *((unsigned __int8 *)a2 + 48));
      TlgCreateWsz(&v51, v12);
      if ( *((char *)a2 + 200) < 0 && (v14 = *((_QWORD *)a2 + 60)) != 0 )
        v15 = *(_DWORD *)(v14 + 720);
      else
        v15 = -1;
      v16 = *v7 == 0;
      v46 = v15;
      v52 = &v46;
      v45 = *((unsigned int *)a2 + 549);
      v54 = &v45;
      v53 = cData;
      v44 = v16;
      v56 = &v44;
      v55 = cData;
      v57 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E36B7, 0LL, 0LL, cData, &pData);
      v10 = *((_DWORD *)a2 + 552);
    }
    if ( !v10 )
      *v7 = 1;
    *((LARGE_INTEGER *)a2 + 275) = PerformanceCounter;
  }
  InputTraceLogging::RIM::ProcessDeviceBuffer(a2);
  v18 = *((_DWORD *)a2 + 46);
  v19 = 0;
  v20 = (char *)a2 + 48;
  LOBYTE(v21) = *((_BYTE *)a2 + 48);
  v22 = -__CFSHR__(v18, 7);
  if ( (unsigned __int8)v21 < 2u )
  {
    if ( (v18 & 0x2000) != 0 )
    {
      v19 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v21, (__int64)a2, v17);
    }
  }
  else
  {
    if ( (_BYTE)v21 != 2 )
      return v43;
    if ( (v18 & 0x4000) == 0 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
        && (*((_DWORD *)a2 + 50) & 0x80u) != 0
        && (unsigned int)rimIsPointerInputAllowed((__int64)a2, v23, v25) )
      {
        ApiSetEtwTracePointerDeviceReadStart();
        rimFreeAutoRepeatCompleteFrame((__int64)a2);
        RIMProcessAnyPointerDeviceInput(a1, a2);
        ApiSetEtwTracePointerDeviceReadStop();
      }
      v26 = *((_DWORD *)a2 + 46);
      if ( (v26 & 0x2000) == 0 && !v22 )
      {
        if ( (v26 & 0x200) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        goto LABEL_73;
      }
      return v43;
    }
  }
  v27 = rimObsRouteInputAndCheckForExclusiveObservers(a2);
  v29 = 0LL;
  if ( v27 )
  {
    if ( !v22 )
LABEL_73:
      RIMStartDeviceSpecificRead((HANDLE *)a1, (__int64)a2, v25);
  }
  else if ( *((_BYTE *)a1 + 584)
         && ((*((_DWORD *)a2 + 46) & 0x200) != 0
          || *((struct RawInputManagerObject **)a1 + 74) == (struct RawInputManagerObject *)((char *)a1 + 592)) )
  {
    *((_BYTE *)a1 + 584) = 0;
    v30 = *((_DWORD *)a2 + 46);
    if ( (v30 & 0x200) != 0 )
    {
      InputTraceLogging::RIM::ResumeDevice(a2);
      v30 = *((_DWORD *)a2 + 46);
    }
    v31 = (unsigned __int8)*v20;
    *((_DWORD *)a2 + 46) = v30 & 0xFFFFFDFF;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 == 1 )
        {
          rimProcessHidInput(a1, a2);
        }
        else
        {
          *((_BYTE *)a1 + 584) = 1;
          InputTraceLogging::RIM::DropInput((__int64)a2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v33) = 3;
            WPP_RECORDER_SF_D(
              (_DWORD)gRimLog,
              v33,
              1,
              24,
              (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
              *v20);
          }
        }
      }
      else
      {
        rimProcessKeyboardInput(a1, a2);
      }
    }
    else
    {
      rimProcessMouseInput(a1, a2);
    }
    rimSignalReadComplete(a1, a2);
    if ( (unsigned __int8)*v20 <= 1u && (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
      rimProcessInjectedDeviceBuffers(a1, a2);
    if ( *((_BYTE *)a1 + 584) && (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v22 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v34) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v34,
          1,
          25,
          (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
          (char)a1,
          (char)a2);
      }
      DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)", a1, a2);
      goto LABEL_73;
    }
  }
  else if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    if ( a3 )
    {
      if ( !v19 )
      {
        InputTraceLogging::RIM::DropInput((__int64)a2);
        if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0
          && (unsigned __int8)*v20 <= 1u
          && hProvider > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          pDesc.Reserved = 0;
          v48 = &v45;
          v45 = 0x1000000LL;
          v49 = 8LL;
          pDesc.Ptr = (ULONGLONG)a2 + 48;
          pDesc.Size = 1;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E3642, 0LL, 0LL, 4u, &pData);
        }
      }
    }
    if ( *((struct RIMDEV **)a2 + 13) == (struct RIMDEV *)((char *)a2 + 104) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v25);
  }
  else
  {
    InputTraceLogging::RIM::PauseDevice(a2);
    *((_DWORD *)a2 + 46) |= 0x200u;
    v38 = (char *)a2 + 104;
    if ( *(char **)v38 != v38 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
    v39 = (char *)a1 + 592;
    v40 = (char **)*((_QWORD *)v39 + 1);
    if ( *v40 != v39 )
      __fastfail(3u);
    *(_QWORD *)v38 = v39;
    *((_QWORD *)v38 + 1) = v40;
    *v40 = v38;
    *((_QWORD *)v39 + 1) = v38;
  }
  return v43;
}
