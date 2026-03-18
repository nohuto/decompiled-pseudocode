/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0164A90
 * Callers:
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0164B70 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C017C124 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C015F0E8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C015F3EC (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0162594 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@K@Z @ 0x1C016FC64 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  _DWORD *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  CTouchProcessor *v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v17; // rcx

  v5 = CTouchProcessor::CountMTNodesReadyForRouting(this, a2);
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v6);
  v7 = 240LL * (v5 - 1);
  if ( v7 > 0xFFFFFFFF || (v8 = v7 + 288, (unsigned int)(v7 + 288) < 0x120) )
  {
    v8 = 0;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL, 288LL, v6);
  }
  v11 = (_DWORD *)Win32AllocPool(v8, 0x6D696955u);
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
  *v11 = 0;
  v15 = CTouchProcessor::CalcManipulationInputInfoSize(v10, v5, v12);
  if ( v8 <= v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16);
  CTouchProcessor::BuildManipulationInputInfo(v14, v11 + 2, v15, a2);
  InputTraceLogging::Pointer::SendFrameToUserMode(a2, v5);
  InputExtensibilityCallout::CoreMsgSendMessage(v17, 8);
  Win32FreePool((__int64)v11);
}
