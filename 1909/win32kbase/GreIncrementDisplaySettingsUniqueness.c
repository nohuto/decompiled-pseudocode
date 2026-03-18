/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00A4700
 * Callers:
 *     DrvEnableMDEV @ 0x1C0040C0C (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0040ED0 (DrvDisableMDEV.c)
 *     ApplyPathsModality @ 0x1C0041800 (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     GreResumeDirectDraw @ 0x1C00A46E0 (GreResumeDirectDraw.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00B6E70 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C012AF30 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C012DD70 (DxgkEngNotifyDisplayChange.c)
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
