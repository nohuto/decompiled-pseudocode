/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0138920
 * Callers:
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0138A10 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C0133FE8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C0134300 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0136708 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@K@Z @ 0x1C0142FC8 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  unsigned int v3; // esi
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  CTouchProcessor *v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // r8
  CTouchProcessor *v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // rcx

  v3 = CTouchProcessor::CountMTNodesReadyForRouting(this, a2);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Should have pointer nodes to route to MT");
  v5 = 224LL * (v3 - 1);
  if ( v5 > 0xFFFFFFFF || (unsigned int)(v5 + 248) < 0xF8 )
    v6 = 0;
  else
    v6 = v5 + 248;
  if ( v6 < 0xF8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, 248LL, v4);
  v9 = (_DWORD *)Win32AllocPool(v6, 0x6D696955u);
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  *v9 = 0;
  v12 = CTouchProcessor::CalcManipulationInputInfoSize(v8, v3, v10);
  if ( v6 <= v12 )
    MicrosoftTelemetryAssertTriggeredMsgKM("MIT_INPUT_INTEROP_MESSAGE should be the size of the ManipulationInputInfo + the size of the header");
  CTouchProcessor::BuildManipulationInputInfo(v11, v9 + 2, v12, a2);
  InputTraceLogging::Pointer::SendFrameToUserMode(a2, v3);
  InputExtensibilityCallout::CoreMsgSendMessage(v13, 8);
  Win32FreePool((__int64)v9);
}
