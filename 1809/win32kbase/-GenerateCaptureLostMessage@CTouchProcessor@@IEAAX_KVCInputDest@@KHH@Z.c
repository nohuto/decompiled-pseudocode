/*
 * XREFs of ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0139540
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01333FC (-AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0147DA4 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureLostMessage(__int64 a1, __int64 a2, CInputDest *a3)
{
  PDEVICE_OBJECT v6; // rcx
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rax
  _WORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r8
  CInputDest *v21; // rax
  _BYTE v22[184]; // [rsp+50h] [rbp-198h] BYREF
  _BYTE v23[184]; // [rsp+108h] [rbp-E0h] BYREF

  v6 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDBu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
  if ( a2 )
  {
    v11 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a2 + 28));
    if ( !v11 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0xDEu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v7 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_23;
      v8 = 223;
      goto LABEL_8;
    }
    v13 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v13 >= *((_DWORD *)v11 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      v13 = *(unsigned int *)(a2 + 32);
    }
    v14 = (_WORD *)(*((_QWORD *)v11 + 13) + 576 * v13);
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v14) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    if ( v14[118] != *(_WORD *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    memset(v22, 0, sizeof(v22));
    v22[176] = 0;
    if ( (unsigned int)CTouchProcessor::GenerateMessage(a1, v14, a2, v11) )
    {
      v21 = CInputDest::CInputDest((CInputDest *)v23, (const struct CInputDest *)(v14 + 196));
      CTouchProcessor::AddLostCaptureTarget((CTouchProcessor *)a1, v14[118], v21);
    }
    else
    {
      WPP_RECORDER_SF_HL(*(_QWORD *)(a1 + 8), v18, v19, 224, 594, *(_WORD *)(a2 + 16), v14[112]);
    }
    CTouchProcessor::UnreferenceFrame(a1, (__int64)v11, v20);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xE1u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0xDCu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v8 = 221;
LABEL_8:
      WPP_RECORDER_SF_(
        (__int64)v7->DeviceExtension,
        5u,
        0xBu,
        v8,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
LABEL_23:
  CInputDest::~CInputDest(a3);
}
