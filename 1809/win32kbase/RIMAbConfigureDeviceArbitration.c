/*
 * XREFs of RIMAbConfigureDeviceArbitration @ 0x1C01112B0
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0128240 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMAbConfigureDeviceArbitration()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx

  result = IsGetPenArbitrationTypeSupported();
  v3 = 0LL;
  if ( (int)result >= 0 )
  {
    result = GetPenArbitrationType(0LL);
    v3 = (unsigned int)result;
  }
  if ( (unsigned int)v3 < 4 )
    gDeviceArbitrationType = v3;
  if ( gDeviceArbitrationType >= 4u )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v1, v2);
  return result;
}
