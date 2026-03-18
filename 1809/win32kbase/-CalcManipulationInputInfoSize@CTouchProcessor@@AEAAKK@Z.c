/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C0134300
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C0133FE8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0138920 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx

  if ( (_DWORD)a2 && (v3 = 224LL * (unsigned int)(a2 - 1), v3 <= 0xFFFFFFFF) && (unsigned int)(v3 + 240) >= 0xF0 )
    v4 = v3 + 240;
  else
    v4 = 0;
  v5 = v4 - 1;
  if ( (unsigned int)v5 <= 0xEE )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  return v4;
}
