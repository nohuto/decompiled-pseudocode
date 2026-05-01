/*
 * XREFs of ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003B808
 * Callers:
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18003B778 (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800303D8 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampAppAcquireLockShared(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 5u, 0);
  RtlAcquireSRWLockShared((char *)a1 + 576);
}
