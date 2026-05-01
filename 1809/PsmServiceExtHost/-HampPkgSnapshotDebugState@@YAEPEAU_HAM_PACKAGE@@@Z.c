/*
 * XREFs of ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18006BBA0
 * Callers:
 *     ?HampHostComputeDesiredPsmAndSwapState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800699C4 (-HampHostComputeDesiredPsmAndSwapState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 * Callees:
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180003E9C (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010A58 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

bool __fastcall HampPkgSnapshotDebugState(struct _HAM_PACKAGE *a1)
{
  bool v2; // bl
  __int64 v3; // rdx

  HampPkgAcquireLockShared(a1);
  v2 = (*((_DWORD *)a1 + 85) & 2) != 0;
  HampPkgReleaseLockShared(a1, v3);
  return v2;
}
