/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x14093EFEC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409275A0 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1409DBED4 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x14093F018 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x800) != 0 && (MmVerifierData & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
