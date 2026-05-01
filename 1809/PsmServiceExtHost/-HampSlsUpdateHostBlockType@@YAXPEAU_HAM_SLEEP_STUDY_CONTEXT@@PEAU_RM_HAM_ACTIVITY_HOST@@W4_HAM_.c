/*
 * XREFs of ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18006F088
 * Callers:
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18006DF64 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18006E370 (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006E3BC (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006E42C (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HA.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x18006E4D4 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18006E600 (-HampSlsBlockerEntryUpdateBlockType@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18006EC40 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
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
      if ( hProvider > 4u )
      {
        v17 = 4LL;
        v16 = &v12;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C19C, 0LL, 0LL, 3u, &pData);
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
      if ( (*(_QWORD *)(v10 + 576))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v10 - 64));
      RmpReleaseGlobalLock();
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
