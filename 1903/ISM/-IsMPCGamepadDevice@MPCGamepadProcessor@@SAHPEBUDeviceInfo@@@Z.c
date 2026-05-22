/*
 * XREFs of ?IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18002B090
 * Callers:
 *     <none>
 * Callees:
 *     IsGetMPCInputPostProcessorPresent @ 0x18002CE6C (IsGetMPCInputPostProcessorPresent.c)
 */

__int64 __fastcall MPCGamepadProcessor::IsMPCGamepadDevice(const struct DeviceInfo *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*((_BYTE *)a1 + 4) & 0x40) != 0 )
    return (unsigned __int8)IsGetMPCInputPostProcessorPresent(a1) != 0;
  return v1;
}
