/*
 * XREFs of ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0168E08
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0171290 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0167B6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0176FD4 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedReleasedMessage(
        PDEVICE_OBJECT a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 **a7)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  CTouchProcessor *v10; // r14
  __int64 v11; // rbx
  _BOOL8 v12; // rdi
  CInputDest *v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-C8h]
  _BYTE v18[128]; // [rsp+50h] [rbp-98h] BYREF

  v8 = (unsigned int)a3;
  v9 = a2;
  v10 = (CTouchProcessor *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        230,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  v11 = *(_QWORD *)(v9 + 128) + 496 * v8;
  v12 = *(_DWORD *)(v11 + 176) != 5;
  if ( (*(_DWORD *)(v11 + 188) & 0x40000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v13 = CInputDest::CInputDest((CInputDest *)v18, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                        v10,
                        v11,
                        v12 - 1,
                        (const struct CPointerInputFrame *)v9,
                        0x253u,
                        a4,
                        a5,
                        a6,
                        v13) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_LL(v15, v14, v16, 231, v17, *(_DWORD *)(v11 + 180), *(_WORD *)(v11 + 168));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      7,
      232,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
LABEL_12:
  CInputDest::SetEmpty((CInputDest *)a7, v14, v16);
}
