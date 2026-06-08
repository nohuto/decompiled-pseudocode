/*
 * XREFs of GetCpuIdInfo @ 0x1C000DF80
 * Callers:
 *     IsACountMCountSupported @ 0x1C0001A7C (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C0001B40 (ValidatePStateCapability.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001C010 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitMonitorMWaitSupport @ 0x1C001C4C0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C001C584 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x1C0035008 (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
