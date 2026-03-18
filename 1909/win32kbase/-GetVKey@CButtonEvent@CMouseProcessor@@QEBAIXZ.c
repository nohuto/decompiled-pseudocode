/*
 * XREFs of ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C004E5F4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetVKey(CMouseProcessor::CButtonEvent *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 5);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *((_QWORD *)this + 5);
  }
  return *(unsigned int *)(v3 + 12);
}
