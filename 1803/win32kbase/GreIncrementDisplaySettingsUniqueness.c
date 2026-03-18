/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C006E590
 * Callers:
 *     ApplyPathsModality @ 0x1C004E238 (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C006934C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0069690 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C0069878 (DrvEnableMDEV.c)
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00C97E0 (DxgkEngNotifyDisplayChange.c)
 *     GreResumeDirectDraw @ 0x1C00C9840 (GreResumeDirectDraw.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CED80 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00D4520 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     <none>
 */

PVOID GreIncrementDisplaySettingsUniqueness()
{
  PVOID result; // rax

  result = gpGdiSharedMemory;
  if ( gpGdiSharedMemory )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    return (PVOID)DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
