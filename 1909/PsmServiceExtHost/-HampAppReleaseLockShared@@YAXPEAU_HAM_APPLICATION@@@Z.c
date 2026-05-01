/*
 * XREFs of ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003B7D8
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027B40 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18003B778 (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampAppReleaseLockShared(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 5u);
  RtlReleaseSRWLockShared((char *)a1 + 576);
}
