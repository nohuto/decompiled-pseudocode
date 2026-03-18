/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C0006300
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ApiSetEditionGetExecutionEvironment @ 0x1C0094930 (ApiSetEditionGetExecutionEvironment.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi

  v1 = 0;
  if ( *((_QWORD *)this + 140) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect that processor was already cleaned-up");
  *((_QWORD *)this + 140) = 0LL;
  v3 = Win32AllocPool(24LL, 1886539088LL);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_QWORD *)v3 = &CBaseProcessor::`vftable';
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_DWORD *)(v3 + 16) = ApiSetEditionGetExecutionEvironment();
    *(_QWORD *)v3 = &CBaseProcessor::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    *((_QWORD *)this + 140) = v3;
  else
    return (unsigned int)-1073741801;
  return v1;
}
