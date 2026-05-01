/*
 * XREFs of ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18007CE88
 * Callers:
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007BC84 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007C1D4 (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18007C220 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18007C290 (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HA.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x18007C338 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18007C464 (-HampSlsBlockerEntryUpdateBlockType@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007CA60 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

void __fastcall HampSlsUpdateHostBlockType(__int64 a1, struct _RM_HAM_ACTIVITY_HOST *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v9; // rbx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v14; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  int *v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]

  P = 0LL;
  if ( a3 )
  {
    v12 = HampSlsBlockerEntryCreate(
            (struct _HAM_SLEEP_STUDY_CONTEXT *)a1,
            a2,
            (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **)&P);
    if ( v12 < 0 )
    {
      if ( dword_1800AB2C0 > 4u )
      {
        v17 = 4LL;
        v16 = &v12;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009A10D, 0LL, 0LL, 3u, &pData);
      }
      goto LABEL_14;
    }
    HampSlsAcquireLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, v8);
    if ( (*(_BYTE *)(a1 + 100) & 4) == 0 && (*(_BYTE *)(a1 + 100) & 1) != 0 )
    {
      v9 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P;
      HampSlsBlockerEntryFindOrInsert(
        (struct _HAM_SLEEP_STUDY_CONTEXT *)a1,
        (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P,
        &v14);
      if ( v14 == v9 )
        v9 = 0LL;
      P = v9;
      HampSlsBlockerEntryUpdateBlockType((__int64)v14, a3);
    }
  }
  else
  {
    HampSlsAcquireLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, (__int64)a2);
    if ( (*(_DWORD *)(a1 + 100) & 5) == 1 )
    {
      v12 = HampSlsBlockerEntryFind((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, a2, &v14);
      if ( v12 >= 0 )
      {
        HampSlsBlockerEntryUpdateBlockType((__int64)v14, 0);
        HampSlsReleaseLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, v7);
        return;
      }
    }
  }
  HampSlsReleaseLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, v6);
LABEL_14:
  if ( P )
  {
    v10 = *((_QWORD *)P + 3);
    if ( v10 )
    {
      RmpAcquireGlobalLock();
      if ( (*(_QWORD *)(v10 + 592))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v10 - 64));
      RmpReleaseGlobalLock();
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
