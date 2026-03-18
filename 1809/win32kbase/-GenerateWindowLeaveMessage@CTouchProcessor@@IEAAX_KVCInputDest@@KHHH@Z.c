/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C013AB64
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0147DA4 (WPP_RECORDER_SF_HL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        __int64 a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  PDEVICE_OBJECT v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rax
  CPointerInfoNode *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // edx
  int v24; // [rsp+20h] [rbp-118h]
  _BYTE v25[192]; // [rsp+50h] [rbp-E8h] BYREF

  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xCBu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2, a3);
  if ( a2 )
  {
    v16 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a2 + 28));
    if ( !v16 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 2u, 0xBu, 0xCEu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_23;
      v13 = 207;
      goto LABEL_8;
    }
    v18 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v18 >= *((_DWORD *)v16 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17);
      v18 = *(unsigned int *)(a2 + 32);
    }
    v19 = (CPointerInfoNode *)(*((_QWORD *)v16 + 13) + 576 * v18);
    if ( !(unsigned int)CPointerInfoNode::IsValid(v19) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    if ( *((_WORD *)v19 + 118) != *(_WORD *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    if ( !a5 )
    {
      memset(v25, 0, 0xB8uLL);
      v25[176] = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                            (__int64 *)a1,
                            (__int64)v19,
                            a2,
                            v16,
                            0x24Au,
                            a4,
                            a6,
                            a7,
                            (CInputDest *)v25) )
        WPP_RECORDER_SF_HL(*(_QWORD *)(a1 + 8), v23, v22, 208, v24, *(_WORD *)(a2 + 16), *((_WORD *)v19 + 112));
    }
    CTouchProcessor::UnreferenceFrame(a1, (__int64)v16, v22);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xD1u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 4u, 0xBu, 0xCCu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 205;
LABEL_8:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
LABEL_23:
  CInputDest::~CInputDest(a3);
}
