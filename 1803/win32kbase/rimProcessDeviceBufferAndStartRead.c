/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14
 * Callers:
 *     RIMInjectInput @ 0x1C00E2DB0 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00F3FE0 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00F481C (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C00F4BCC (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C00F6174 (RIMIDE_InjectGenericHidInput.c)
 *     rimCompleteReads @ 0x1C00FDEF4 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00FE008 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00FE6E0 (rimInputApc.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C00AC480 (EtwTracePointerDeviceReadStart.c)
 *     EtwTracePointerDeviceReadStop @ 0x1C00AC4B0 (EtwTracePointerDeviceReadStop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     rimIsPointerInputAllowed @ 0x1C00DEE54 (rimIsPointerInputAllowed.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00E5E3C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00FDADC (RIMStartDeviceSpecificRead.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00FE678 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimProcessHidInput @ 0x1C00FF234 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C00FF620 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C00FF6C4 (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00FFE40 (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidKeyboardInput @ 0x1C010422C (rimProcessHidKeyboardInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0105778 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(__int64 a1, __int64 a2)
{
  int *v4; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned int v6; // r10d
  int v7; // r9d
  const WCHAR *v8; // rdx
  const wchar_t *v9; // rax
  const GUID *v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ecx
  bool v13; // zf
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  int v21; // ecx
  unsigned int v22; // edx
  int v23; // ecx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  _QWORD *v29; // rax
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  BOOL v31; // [rsp+40h] [rbp-69h] BYREF
  __int64 v32; // [rsp+48h] [rbp-61h] BYREF
  __int64 v33; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp-49h] BYREF
  const char *v35; // [rsp+80h] [rbp-29h]
  int v36; // [rsp+88h] [rbp-21h]
  int v37; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+A0h] [rbp-9h] BYREF
  __int64 *v40; // [rsp+B0h] [rbp+7h]
  int v41; // [rsp+B8h] [rbp+Fh]
  int v42; // [rsp+BCh] [rbp+13h]
  __int64 *v43; // [rsp+C0h] [rbp+17h]
  int v44; // [rsp+C8h] [rbp+1Fh]
  int v45; // [rsp+CCh] [rbp+23h]
  BOOL *v46; // [rsp+D0h] [rbp+27h]
  int v47; // [rsp+D8h] [rbp+2Fh]
  int v48; // [rsp+DCh] [rbp+33h]

  ++*(_DWORD *)(a2 + 1652);
  v4 = (int *)(a2 + 1664);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = *(_DWORD *)(a2 + 1652) % 0x64u;
  if ( !v6 && (v7 = *v4) == 0
    || (v7 = *v4) != 0
    && PerformanceCounter.QuadPart - *(_QWORD *)(a2 + 1656) >= 600000 * gliQpcFreq.QuadPart / 1000
    && !v6 )
  {
    if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
    {
      v8 = *(const WCHAR **)(a2 + 216);
      v37 = 0;
      v35 = "rimProcessDeviceBufferAndStartRead";
      v36 = 35;
      TlgCreateWsz(&pDesc, v8);
      v9 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
      TlgCreateWsz(&v39, v9);
      if ( *(char *)(a2 + 200) < 0 && (v11 = *(_QWORD *)(a2 + 480)) != 0 )
        v12 = *(_DWORD *)(v11 + 680);
      else
        v12 = -1;
      v42 = 0;
      v45 = 0;
      v32 = v12;
      v40 = &v32;
      v33 = *(unsigned int *)(a2 + 1652);
      v43 = &v33;
      v13 = *v4 == 0;
      v41 = 8;
      v44 = 8;
      v48 = 0;
      v31 = v13;
      v46 = &v31;
      v47 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178980, 0LL, v10, 8u, &v34);
      v7 = *(_DWORD *)(a2 + 1664);
    }
    if ( !v7 )
      *v4 = 1;
    *(LARGE_INTEGER *)(a2 + 1656) = PerformanceCounter;
  }
  v14 = *(_BYTE *)(a2 + 48);
  if ( v14 < 2u )
    goto LABEL_55;
  if ( v14 != 2 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 184) & 0x4000) != 0 || (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
  {
LABEL_55:
    if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
    {
      if ( !*(_BYTE *)(a1 + 568) || (*(_DWORD *)(a2 + 184) & 0x100) == 0 && *(_QWORD *)(a1 + 576) != a1 + 576 )
      {
        v24 = *(unsigned int *)(a2 + 184);
        v25 = (_QWORD *)(a2 + 104);
        if ( (v24 & 0x100) != 0 )
        {
          if ( (_QWORD *)*v25 == v25 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, 256LL);
        }
        else
        {
          v26 = (unsigned int)v24 | 0x100;
          *(_DWORD *)(a2 + 184) = v26;
          if ( (_QWORD *)*v25 != v25 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, 256LL);
          v27 = a1 + 576;
          v28 = (_QWORD *)(a2 + 104);
          v29 = *(_QWORD **)(v27 + 8);
          if ( *v29 != v27 )
            __fastfail(3u);
          *v28 = v27;
          v28[1] = v29;
          *v29 = v28;
          *(_QWORD *)(v27 + 8) = v28;
        }
        return 0LL;
      }
      *(_BYTE *)(a1 + 568) = 0;
      v21 = *(unsigned __int8 *)(a2 + 48);
      v22 = *(_DWORD *)(a2 + 184) & 0xFFFFFEFF;
      *(_DWORD *)(a2 + 184) = v22;
      if ( v21 )
      {
        v23 = v21 - 1;
        if ( v23 )
        {
          if ( v23 == 1 )
          {
            if ( (v22 & 0x2000) != 0 )
              rimProcessHidKeyboardInput(a1, a2);
            else
              rimProcessHidInput(a1, a2);
          }
          else
          {
            *(_BYTE *)(a1 + 568) = 1;
            LODWORD(pData) = *(unsigned __int8 *)(a2 + 48);
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x13u,
              0x18u,
              (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
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
      if ( !*(_BYTE *)(a1 + 568) || (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
        return 0LL;
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x19u,
        (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
        a1,
        a2);
      DbgPrintRIMAlways("FailSafeRead pRimObj(%p) pRimDev(%p)\n", (const void *)a1, (const void *)a2);
    }
LABEL_27:
    RIMStartDeviceSpecificRead((struct _MCGEN_TRACE_CONTEXT *)a1, a2, v17);
    return 0LL;
  }
  if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
    && (*(_DWORD *)(a2 + 200) & 0x80u) != 0
    && (unsigned int)rimIsPointerInputAllowed(a2, v15) )
  {
    EtwTracePointerDeviceReadStart(v16);
    rimFreeAutoRepeatCompleteFrame(a2);
    RIMProcessAnyPointerDeviceInput(a1, a2);
    EtwTracePointerDeviceReadStop(v18);
  }
  v19 = *(_DWORD *)(a2 + 184);
  if ( (v19 & 0x1000) == 0 )
  {
    if ( (v19 & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, 256LL);
    goto LABEL_27;
  }
  return 0LL;
}
