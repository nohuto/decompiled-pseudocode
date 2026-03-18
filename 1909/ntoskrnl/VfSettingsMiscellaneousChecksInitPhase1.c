/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x14097D890
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140964AD4 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140A1E23C (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x14097D8BC (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x800) != 0 && (MmVerifierData & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
