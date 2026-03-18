/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x14093DFEC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409265A0 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1409DAED4 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x14093E018 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x800) != 0 && (MmVerifierData & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
