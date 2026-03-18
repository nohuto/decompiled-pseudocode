/*
 * XREFs of ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00AB9D8
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

unsigned __int64 __fastcall HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx

  *(_QWORD *)a1 = a2;
  v2 = (_QWORD *)(a1 + 8);
  memset((void *)(a1 + 8), 0, 0x20uLL);
  PushThreadGuardedObject(
    v2,
    a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<BRUSH>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
