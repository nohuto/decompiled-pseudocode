/*
 * XREFs of ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180018B4C
 * Callers:
 *     ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B0CC (-HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x18003B838 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BCDC (-HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180079934 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018884 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppTryReferenceMixedHost(struct _HAM_APPLICATION *a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  __int64 v4; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  __int64 v6; // rbx

  RmpAcquireGlobalLock();
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 576);
  v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 71);
  v6 = 0LL;
  if ( v5 && (unsigned int)RmHamHostReferenceUnsafe(v5) )
    v6 = *((_QWORD *)a1 + 71);
  CempLockTrackerMarkReleased(v5, v4, 5LL);
  RtlReleaseSRWLockShared((char *)a1 + 576);
  RmpReleaseGlobalLock();
  return (struct _RM_HAM_ACTIVITY_HOST *)v6;
}
