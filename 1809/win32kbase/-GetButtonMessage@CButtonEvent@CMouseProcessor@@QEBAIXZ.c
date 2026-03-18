/*
 * XREFs of ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C006F540
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetButtonMessage(
        CMouseProcessor::CButtonEvent *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v3; // rdx
  __int64 v5; // rcx

  v3 = (unsigned int *)*((_QWORD *)this + 3);
  if ( !v3 )
    return 0LL;
  v5 = *((unsigned int *)this + 4);
  if ( (*((_BYTE *)this + 20) & 1) != 0 )
  {
    if ( (_DWORD)v5 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, a3);
      v3 = (unsigned int *)*((_QWORD *)this + 3);
    }
    return v3[2];
  }
  else if ( (_DWORD)v5 == 1 )
  {
    return *v3;
  }
  else
  {
    return v3[1];
  }
}
