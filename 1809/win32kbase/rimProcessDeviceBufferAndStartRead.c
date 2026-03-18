/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC
 * Callers:
 *     rimCompleteReads @ 0x1C00504E0 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0051EF8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 *     RIMInjectInput @ 0x1C010EAC0 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C011EA60 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C011F2F8 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C011F6B8 (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0120DB4 (RIMIDE_InjectGenericHidInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C008DF48 (RIMStartDeviceSpecificRead.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0095490 (rimFreeAutoRepeatCompleteFrame.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00E7C50 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00E7C80 (EtwTracePointerDeviceReadStop.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C010A7A8 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C010BBBC (rimIsPointerInputAllowed.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C010F99C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C011FD64 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0125E94 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0125F28 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C012704C (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0127160 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C0127584 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0127610 (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0128240 (RIMProcessAnyPointerDeviceInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C012D428 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2)
{
  int *v4; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned int v6; // r10d
  int v7; // r9d
  const WCHAR *v8; // rdx
  const wchar_t *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ecx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  struct _MCGEN_TRACE_CONTEXT *v17; // rcx
  __int64 v18; // r8
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  int v20; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  _QWORD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  char *v31; // rdi
  char *v32; // rbx
  char **v33; // rax
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  BOOL v35; // [rsp+40h] [rbp-69h] BYREF
  __int64 v36; // [rsp+48h] [rbp-61h] BYREF
  __int64 v37; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR v38; // [rsp+60h] [rbp-49h] BYREF
  const char *v39; // [rsp+80h] [rbp-29h]
  int v40; // [rsp+88h] [rbp-21h]
  int v41; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A0h] [rbp-9h] BYREF
  __int64 *v44; // [rsp+B0h] [rbp+7h]
  int v45; // [rsp+B8h] [rbp+Fh]
  int v46; // [rsp+BCh] [rbp+13h]
  __int64 *v47; // [rsp+C0h] [rbp+17h]
  int v48; // [rsp+C8h] [rbp+1Fh]
  int v49; // [rsp+CCh] [rbp+23h]
  BOOL *v50; // [rsp+D0h] [rbp+27h]
  int v51; // [rsp+D8h] [rbp+2Fh]
  int v52; // [rsp+DCh] [rbp+33h]

  ++*((_DWORD *)a2 + 501);
  v4 = (int *)((char *)a2 + 2016);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = *((_DWORD *)a2 + 501) % 0x64u;
  if ( !v6 && (v7 = *v4) == 0
    || (v7 = *v4) != 0
    && PerformanceCounter.QuadPart - *((_QWORD *)a2 + 251) >= 600000 * gliQpcFreq.QuadPart / 1000
    && !v6 )
  {
    if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
    {
      v8 = (const WCHAR *)*((_QWORD *)a2 + 27);
      v41 = 0;
      v39 = "rimProcessDeviceBufferAndStartRead";
      v40 = 35;
      TlgCreateWsz(&pDesc, v8);
      v9 = RimDeviceTypeToRimInputTypeString((__int64)a2, *((unsigned __int8 *)a2 + 48));
      TlgCreateWsz(&v43, v9);
      if ( *((char *)a2 + 200) < 0 && (v10 = *((_QWORD *)a2 + 60)) != 0 )
        v11 = *(_DWORD *)(v10 + 712);
      else
        v11 = -1;
      v46 = 0;
      v49 = 0;
      v36 = v11;
      v44 = &v36;
      v37 = *((unsigned int *)a2 + 501);
      v47 = &v37;
      v12 = *v4 == 0;
      v45 = 8;
      v48 = 8;
      v52 = 0;
      v35 = v12;
      v50 = &v35;
      v51 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019F709, 0LL, 0LL, 8u, &v38);
      v7 = *((_DWORD *)a2 + 504);
    }
    if ( !v7 )
      *v4 = 1;
    *((LARGE_INTEGER *)a2 + 251) = PerformanceCounter;
  }
  InputTraceLogging::RIM::ProcessDeviceBuffer(a2);
  v15 = *((_BYTE *)a2 + 48);
  if ( v15 < 2u )
  {
    if ( (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v13, (__int64)a2, v14);
    goto LABEL_31;
  }
  if ( v15 != 2 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 46) & 0x4000) != 0 || (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
  {
LABEL_31:
    if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
    {
      if ( !*((_BYTE *)a1 + 584)
        || (*((_DWORD *)a2 + 46) & 0x200) == 0
        && *((struct RawInputManagerObject **)a1 + 74) != (struct RawInputManagerObject *)((char *)a1 + 592) )
      {
        v27 = (_QWORD *)((char *)a2 + 104);
        if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
        {
          if ( (_QWORD *)*v27 == v27 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v18);
        }
        else
        {
          InputTraceLogging::RIM::PauseDevice(a2);
          *((_DWORD *)a2 + 46) |= 0x200u;
          if ( (_QWORD *)*v27 != v27 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          v31 = (char *)a1 + 592;
          v32 = (char *)a2 + 104;
          v33 = (char **)*((_QWORD *)v31 + 1);
          if ( *v33 != v31 )
            __fastfail(3u);
          *(_QWORD *)v32 = v31;
          *((_QWORD *)v32 + 1) = v33;
          *v33 = v32;
          *((_QWORD *)v31 + 1) = v32;
        }
        return 0LL;
      }
      *((_BYTE *)a1 + 584) = 0;
      v24 = *((_DWORD *)a2 + 46);
      if ( (v24 & 0x200) != 0 )
      {
        InputTraceLogging::RIM::ResumeDevice(a2);
        v24 = *((_DWORD *)a2 + 46);
      }
      v25 = *((unsigned __int8 *)a2 + 48);
      *((_DWORD *)a2 + 46) = v24 & 0xFFFFFDFF;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 == 1 )
          {
            rimProcessHidInput(a1, a2);
          }
          else
          {
            *((_BYTE *)a1 + 584) = 1;
            LODWORD(pData) = *((unsigned __int8 *)a2 + 48);
            WPP_RECORDER_SF_d(
              gRimLog,
              3u,
              0x14u,
              0x18u,
              (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
              pData);
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
      if ( *((_BYTE *)a2 + 48) <= 1u && (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
        rimProcessInjectedDeviceBuffers(a1, a2);
      if ( !*((_BYTE *)a1 + 584) || (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
        return 0LL;
      WPP_RECORDER_SF_qq(gRimLog, 3u, 0x16u, 0x19u, (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids, a1, a2);
      DbgPrintRIMAlways("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
    }
LABEL_27:
    RIMStartDeviceSpecificRead((__int64)a1, (__int64)a2, v18);
    return 0LL;
  }
  if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
    && (*((_DWORD *)a2 + 50) & 0x80u) != 0
    && (unsigned int)rimIsPointerInputAllowed((__int64)a2, v16, v18) )
  {
    EtwTracePointerDeviceReadStart(v17);
    rimFreeAutoRepeatCompleteFrame((__int64)a2);
    RIMProcessAnyPointerDeviceInput(a1, a2);
    EtwTracePointerDeviceReadStop(v19);
  }
  v20 = *((_DWORD *)a2 + 46);
  if ( (v20 & 0x2000) == 0 )
  {
    if ( (v20 & 0x200) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    goto LABEL_27;
  }
  return 0LL;
}
