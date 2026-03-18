/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00A5750
 * Callers:
 *     DrvEnableMDEV @ 0x1C00449AC (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0044C70 (DrvDisableMDEV.c)
 *     ApplyPathsModality @ 0x1C0044F44 (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0045EDC (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     GreResumeDirectDraw @ 0x1C00A5730 (GreResumeDirectDraw.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00B9F2C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0109510 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C012D6E0 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C0130520 (DxgkEngNotifyDisplayChange.c)
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
