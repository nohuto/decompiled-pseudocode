/*
 * XREFs of ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00ABA2C
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1C00ABA88 (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 */

void __fastcall HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(__int64 a1)
{
  HmgShareLockResult<BRUSH>::CleanupRoutine();
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
