/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04
 * Callers:
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0139268 (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01393E0 (-GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0139540 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013978C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C013991C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C013A970 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C013AB64 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0070538 (ApiSetEditionHandleHungWindow.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0083640 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C00E6010 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C00E6740 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0130F30 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0131148 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C0139FC8 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C013FE14 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0140C70 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessage @ 0x1C0147CAC (IsPointerInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  unsigned int v12; // ebx
  __int16 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  PDEVICE_OBJECT v18; // rcx
  unsigned __int16 v19; // r9
  HWND WindowHandle; // rax
  __int64 v21; // rdx
  CInputDest *v22; // rcx
  __int64 v23; // r8
  HWND v24; // r10
  int v25; // r9d
  HWND v26; // rax
  __int64 v27; // r8
  const struct CPointerInputFrame *v28; // r14
  PDEVICE_OBJECT v29; // rcx
  unsigned __int16 v30; // r9
  int v31; // r12d
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // eax
  struct tagTHREADINFO *ThreadInfo; // rax
  unsigned __int16 v38; // [rsp+40h] [rbp-58h]
  __int16 v39; // [rsp+42h] [rbp-56h]

  v12 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x114u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v13 = *(_WORD *)(a2 + 236);
  v14 = a5;
  v39 = v13;
  v38 = *(_WORD *)(a2 + 224);
  if ( a5 )
  {
    if ( !(unsigned int)IsPointerInputMessage(a5) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
LABEL_6:
    if ( *(_DWORD *)a9 )
      goto LABEL_22;
    if ( !*(_DWORD *)(a2 + 476) )
      goto LABEL_8;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(a2 + 392));
    if ( WindowHandle == v24 )
    {
      if ( a8 || (*(_DWORD *)a2 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v22, v21, v23) )
LABEL_8:
        CInputDest::operator=((__int64)a9, a2 + 392);
    }
    else
    {
      if ( a8 || (v25 = 2, (*(_DWORD *)a2 & 0x800) != 0) )
        v25 = 1;
      if ( !CInputDest::SetupFromInputDestAndWindow(a9, a2 + 392, v24, v25) )
        CInputDest::SetEmpty(a9);
    }
LABEL_22:
    v26 = CInputDest::GetWindowHandle(a9);
    InputTraceLogging::Pointer::GenerateMessage(a4, v13, a3, v14, v26);
    if ( !*(_DWORD *)a9 )
    {
      WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x117u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v18 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v19 = 280;
        goto LABEL_25;
      }
      goto LABEL_48;
    }
    v28 = 0LL;
    if ( !*((_DWORD *)a9 + 21) )
    {
      if ( !a3 )
      {
        WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x119u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        v29 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_48;
        v30 = 282;
LABEL_33:
        WPP_RECORDER_SF_(
          (__int64)v29->DeviceExtension,
          5u,
          0xBu,
          v30,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        goto LABEL_48;
      }
      v28 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
      if ( !v28 )
      {
        WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x11Bu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        v29 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_48;
        v30 = 284;
        goto LABEL_33;
      }
    }
    EtwTraceBeginPointerMessageGeneration(v38, v13, v27);
    v31 = 0;
    if ( v28 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("We should not get here. Non-MinUser callback is gone");
      CTouchProcessor::UnreferenceFrame((__int64)a1, (__int64)v28, v33);
    }
    else
    {
      v31 = CTouchProcessor::PostPointerMessage(
              (CTouchProcessor *)a1,
              a9,
              (const struct CPointerInfoNode *)a2,
              a3,
              v14,
              a6,
              a7,
              a8);
    }
    if ( v31 )
    {
      if ( (int)IsInkProcessorOnPointerMessagePostedSupported() >= 0 )
        InkProcessorOnPointerMessagePosted(v14, a3);
      v35 = *(_DWORD *)(a2 + 244);
      if ( (v35 & 0x2000) != 0 && (v35 & 0x10000) != 0 )
      {
        PoLatencySensitivityHint(2LL, v34);
        ThreadInfo = CInputDest::GetThreadInfo(a9);
        if ( ThreadInfo )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
          ApiSetEditionHandleHungWindow((__int64)a9);
        }
      }
    }
    EtwTraceEndPointerMessageGeneration(v38, v39, v32);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x11Du,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v12 = v31;
    goto LABEL_48;
  }
  v14 = CTouchProcessor::PointerFlagsToMessage((CTouchProcessor *)a1, *(_DWORD *)(a2 + 244));
  if ( v14 )
    goto LABEL_6;
  WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0x115u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v18 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = 278;
LABEL_25:
    WPP_RECORDER_SF_(
      (__int64)v18->DeviceExtension,
      5u,
      0xBu,
      v19,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  }
LABEL_48:
  CInputDest::~CInputDest(a9);
  return v12;
}
