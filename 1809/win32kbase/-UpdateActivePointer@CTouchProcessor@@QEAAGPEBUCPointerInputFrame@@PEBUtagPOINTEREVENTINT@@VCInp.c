/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0146A94
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0140200 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0136898 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?DropPointer@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0138134 (-DropPointer@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4Dro.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0143990 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0146F48 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01478D0 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0148078 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        CInputDest *a4,
        __int64 a5,
        int *a6,
        _WORD *a7,
        _DWORD *a8,
        int a9)
{
  unsigned __int16 v10; // r13
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  int v15; // edx
  struct CInputPointerNode *NodeById; // rsi
  int v17; // r8d
  int v18; // eax
  CInputDest *v20; // rax
  _QWORD *Target; // rax
  int v22; // ecx
  __int16 v23; // ax
  unsigned __int16 v24; // bx
  int v25; // [rsp+20h] [rbp-1D8h]
  _BYTE v26[192]; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v27[192]; // [rsp+110h] [rbp-E8h] BYREF
  __int16 v28; // [rsp+200h] [rbp+8h]

  v10 = *(_WORD *)a3;
  v12 = *(_DWORD *)(a3 + 8);
  v13 = *(_DWORD *)(a3 + 20);
  v28 = 0;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x33u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  *a7 = 0;
  *a8 = 0;
  NodeById = CTouchProcessor::FindNodeById((struct _KTHREAD **)a1, v10, 1, 1);
  if ( NodeById )
  {
    if ( (*(_DWORD *)(a3 + 20) & 1) == 0 )
    {
      v18 = *((_DWORD *)NodeById + 10);
      if ( v18 != v12 )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_LL(*(_QWORD *)(a1 + 8), v15, v17, 54, v25, v18, v12);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            0xBu,
            0x37u,
            (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        goto LABEL_14;
      }
      if ( !CTouchProcessor::SetNewValidState((struct _KTHREAD **)a1, v13, NodeById) )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 8),
          2u,
          0xBu,
          0x38u,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            0xBu,
            0x39u,
            (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        goto LABEL_14;
      }
    }
  }
  else
  {
    v28 = 1;
    NodeById = CTouchProcessor::CreateNode((CTouchProcessor *)a1, v10, v12, v13);
    if ( !NodeById )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 8), 2u, 0xBu, 0x34u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x35u,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
LABEL_14:
      InputTraceLogging::Pointer::DropPointer();
      CInputDest::SetEmpty(a4);
      return 0LL;
    }
  }
  CTouchProcessor::UpdateStateIndicator(
    (CTouchProcessor *)a1,
    NodeById,
    v13,
    *(_QWORD *)(a3 + 88),
    *(struct tagPOINT *)(a3 + 48));
  v20 = CInputDest::CInputDest((CInputDest *)v27, a4);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(a1, v26, a3, NodeById, v13, v20, a7, a8, a9);
  CInputDest::operator=(a5, Target);
  CInputDest::SetEmpty((CInputDest *)v26);
  v22 = *((_DWORD *)NodeById + 11);
  v23 = 2 * (*((_DWORD *)NodeById + 82) & 7);
  *((_DWORD *)NodeById + 11) = v13;
  *a7 |= v28 | v23;
  *a6 = v22 & 0x1F0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Au,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v24 = *((_WORD *)NodeById + 16);
  CInputDest::SetEmpty(a4);
  return v24;
}
