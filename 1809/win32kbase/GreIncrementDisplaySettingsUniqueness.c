/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00913D0
 * Callers:
 *     ApplyPathsModality @ 0x1C003E2EC (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0047230 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvEnableMDEV @ 0x1C00476A0 (DrvEnableMDEV.c)
 *     GreResumeDirectDraw @ 0x1C00913B0 (GreResumeDirectDraw.c)
 *     DrvDisableMDEV @ 0x1C00A26D0 (DrvDisableMDEV.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A596C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00FD6D0 (DxgkEngNotifyDisplayChange.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0104690 (DrvDisplayConfigSetScaleFactorOverride.c)
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
