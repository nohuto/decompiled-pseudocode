/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C016596C
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0165480 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0165654 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01666FC (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C016693C (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0166C08 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0166D8C (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0166F44 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0038234 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C004EB90 (ApiSetEditionHandleHungWindow.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0094DC0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C010AC70 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C010B360 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C015B834 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C015BA74 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C0165CF8 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C016C654 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016D44C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     IsPointerInputMessage @ 0x1C0174ABC (IsPointerInputMessage.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x1C019D7EC (ApiSetInkProcessorOnPointerMessagePosted.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        CTouchProcessor *a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int16 v13; // r12
  unsigned __int16 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  HWND WindowHandle; // rax
  __int64 v19; // rdx
  CInputDest *v20; // rcx
  HWND v21; // r10
  PDEVICE_OBJECT v22; // rcx
  int v23; // r9d
  int v24; // r9d
  HWND v25; // rax
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // r14d
  __int64 v29; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  CTouchProcessor *v34; // [rsp+60h] [rbp-58h]

  v9 = a3;
  v10 = a2;
  v34 = a1;
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        285,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
  }
  v12 = a5;
  v13 = *(_WORD *)(v10 + 180);
  v14 = *(_WORD *)(v10 + 168);
  if ( a5 )
  {
    if ( !(unsigned int)IsPointerInputMessage(a5) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    goto LABEL_7;
  }
  v12 = CTouchProcessor::PointerFlagsToMessage(a1, *(_DWORD *)(v10 + 188));
  if ( v12 )
  {
LABEL_7:
    if ( *(_DWORD *)a9 )
      goto LABEL_30;
    if ( !*(_DWORD *)(v10 + 452) )
      goto LABEL_13;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v10 + 360));
    if ( WindowHandle != v21 )
    {
      if ( a8 || (v24 = 2, (*(_DWORD *)v10 & 0x800) != 0) )
        v24 = 1;
      if ( !CInputDest::SetupFromInputDestAndWindow((__int64 *)a9, v10 + 360, v21, v24) )
        CInputDest::SetEmpty(a9, v15, v17);
      goto LABEL_24;
    }
    if ( a8 || (*(_DWORD *)v10 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v20, v19, v17) )
LABEL_13:
      CInputDest::operator=((__int64)a9, v10 + 360, v17);
LABEL_24:
    if ( !*(_DWORD *)a9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 7, 288, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v23 = 289;
            goto LABEL_34;
          }
        }
      }
      goto LABEL_44;
    }
    v9 = a3;
LABEL_30:
    if ( *((_DWORD *)a9 + 23) )
    {
      v25 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v13, v9, v12, v25);
      EtwTraceBeginPointerMessageGeneration(v14, v13, v26);
      v28 = CTouchProcessor::PostPointerMessage(v34, a9, a4, (const struct CPointerInfoNode *)v10, v9, v12, a6, a7, a8);
      if ( v28 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v12, a3);
        v29 = *(unsigned int *)(v10 + 188);
        if ( (v29 & 0x2000) != 0 && (v29 & 0x10000) != 0 )
        {
          PoLatencySensitivityHint(2LL, v29);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
            ApiSetEditionHandleHungWindow((__int64)a9);
          }
        }
      }
      EtwTraceEndPointerMessageGeneration(v14, v13, v27);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v15) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          7,
          291,
          (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
      v11 = v28;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v23 = 290;
          goto LABEL_34;
        }
      }
    }
    goto LABEL_44;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 7, 286, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v23 = 287;
LABEL_34:
        LOBYTE(v15) = 5;
        WPP_RECORDER_SF_(v22->DeviceExtension, v15, 7, v23, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
    }
  }
LABEL_44:
  CInputDest::SetEmpty(a9, v15, v17);
  return v11;
}
