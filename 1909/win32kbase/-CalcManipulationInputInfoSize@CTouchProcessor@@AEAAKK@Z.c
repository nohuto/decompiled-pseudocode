/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C015F3EC
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C015F0E8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0164A90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx

  if ( !(_DWORD)a2
    || (v3 = 240LL * (unsigned int)(a2 - 1), v3 > 0xFFFFFFFF)
    || (v4 = v3 + 280, (unsigned int)v3 >= 0xFFFFFEE8) )
  {
    v4 = 0;
  }
  v5 = v4 - 1;
  if ( (unsigned int)v5 <= 0x116 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  return v4;
}
