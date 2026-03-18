/*
 * XREFs of ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01393E0
 * Callers:
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0141EC8 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0148078 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureEndMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        CInputDest *a7)
{
  __int64 v7; // rbx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rbx
  _BOOL8 v12; // rdi
  int v13; // edx
  int v14; // r8d
  _BYTE v15[192]; // [rsp+50h] [rbp-D8h] BYREF

  v7 = (unsigned int)a3;
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE2u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v11 = *(_QWORD *)(a2 + 104) + 576 * v7;
  v12 = *(_DWORD *)(v11 + 232) != 5;
  if ( (*(_DWORD *)(v11 + 244) & 0x40000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
  CInputDest::CInputDest((CInputDest *)v15, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(a1, v11, v12 - 1, a2) )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_LL(*(_QWORD *)(a1 + 8), v13, v14, 227, 595, *(_DWORD *)(v11 + 236), *(_WORD *)(v11 + 224));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE4u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInputDest::SetEmpty(a7);
}
