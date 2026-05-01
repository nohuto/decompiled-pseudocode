/*
 * XREFs of ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x180037DB4
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002B180 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180037D44 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077624 (-HampHostComputeDesiredHamState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037DFC (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

bool __fastcall HampPkgSnapshotDebugState(struct _HAM_PACKAGE *a1)
{
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  HampPkgAcquireLockShared(a1);
  v2 = (*((_DWORD *)a1 + 85) & 2) != 0;
  CempLockTrackerMarkReleased(v4, v3, 6u);
  RtlReleaseSRWLockShared((char *)a1 + 304);
  return v2;
}
