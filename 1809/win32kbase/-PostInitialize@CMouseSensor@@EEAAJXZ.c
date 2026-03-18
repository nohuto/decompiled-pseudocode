/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005F40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0005FE0 (--0CMouseProcessor@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  unsigned int v1; // ebx
  CMouseProcessor *v3; // rax
  CMouseProcessor *v4; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 140) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect that processor was already cleaned-up");
  *((_QWORD *)this + 140) = 0LL;
  v3 = (CMouseProcessor *)Win32AllocPool(2888LL, 1886539088LL);
  if ( v3 )
    v4 = CMouseProcessor::CMouseProcessor(v3);
  else
    v4 = 0LL;
  if ( v4 )
    *((_QWORD *)this + 140) = v4;
  else
    return (unsigned int)-1073741801;
  return v1;
}
