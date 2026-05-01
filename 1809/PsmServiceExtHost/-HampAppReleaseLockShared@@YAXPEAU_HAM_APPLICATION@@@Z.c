/*
 * XREFs of ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800081FC
 * Callers:
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007330 (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180008150 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800081AC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180010608 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampAppReleaseLockShared(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(a1, a2, 5LL);
  RtlReleaseSRWLockShared((char *)a1 + 576);
}
