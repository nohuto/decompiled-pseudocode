/*
 * XREFs of ?HampPkgGetBackgroundAccessState@@YA?AW4BACKGROUND_ACCESS_STATE@@PEAU_HAM_PACKAGE@@@Z @ 0x1800796D0
 * Callers:
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@PEAK@Z @ 0x18007B12C (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@PEAK@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037DFC (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180079904 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgGetBackgroundAccessState(__int64 a1)
{
  unsigned int v2; // ebx

  HampPkgAcquireLockShared((struct _HAM_PACKAGE *)a1);
  v2 = *(_DWORD *)(a1 + 348);
  HampPkgReleaseLockShared((struct _HAM_PACKAGE *)a1);
  return v2;
}
