/*
 * XREFs of ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0139268
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0142BC8 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0148078 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureAcquiredMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  CInputDest *v12; // rax
  _BYTE v13[192]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = (unsigned int)a3;
  v8 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD8u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v9 = *((_QWORD *)a2 + 13) + 576 * v5;
  if ( (*(_DWORD *)v9 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)(v9 + 244) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
    memset(v13, 0, 0xB8uLL);
    v13[176] = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, a2) )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v10, v11, 217, 593, *(_DWORD *)(v9 + 236), *(_WORD *)(v9 + 224));
    }
    v12 = CInputDest::CInputDest((CInputDest *)v13, (const struct CInputDest *)(v9 + 392));
    CTouchProcessor::RemoveLostCaptureTarget(this, *(unsigned __int16 *)(v9 + 236), v12);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDAu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
}
