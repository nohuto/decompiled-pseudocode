/*
 * XREFs of ?HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006E5AC
 * Callers:
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006E3BC (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 * Callees:
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18000CC00 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampSlsBlockerEntryInitialize(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *a2)
{
  memset_0(a2, 0, 0x58uLL);
  RmpAcquireGlobalLock();
  *((_QWORD *)a2 + 3) = RmHamHostReference(a1);
  RmpReleaseGlobalLock();
  *((_BYTE *)a2 + 32) = 5;
  RtlQueryUnbiasedInterruptTime((char *)a2 + 40);
}
