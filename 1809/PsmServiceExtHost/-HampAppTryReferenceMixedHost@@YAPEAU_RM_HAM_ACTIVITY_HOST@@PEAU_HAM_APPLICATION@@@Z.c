/*
 * XREFs of ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180008150
 * Callers:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800080DC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006BBD8 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_ST.c)
 * Callees:
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800081FC (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180008264 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C14 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppTryReferenceMixedHost(struct _HAM_APPLICATION *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rcx
  __int64 v3; // rbx

  RmpAcquireGlobalLock();
  HampAppAcquireLockShared(a1);
  v2 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 71);
  v3 = 0LL;
  if ( v2 && RmHamHostReferenceUnsafe(v2) )
    v3 = *((_QWORD *)a1 + 71);
  HampAppReleaseLockShared(a1);
  RmpReleaseGlobalLock();
  return (struct _RM_HAM_ACTIVITY_HOST *)v3;
}
