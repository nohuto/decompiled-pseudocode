/*
 * XREFs of ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800083F0
 * Callers:
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800082CC (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012DE8 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACT.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001B710 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001E258 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x18003A15C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800606C8 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpPartitionRelease(HANDLE *a1)
{
  signed __int64 v2; // rax
  signed __int64 i; // rcx
  signed __int64 v4; // rtt
  _DWORD *v5; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(a1);
  v2 = (signed __int64)*a1;
  for ( i = (signed __int64)*a1 - 1; i > 0; i = v2 - 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, i, v2);
    if ( v4 == v2 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  v5 = a1[3];
  RtlAcquireSRWLockExclusive(v5 + 78);
  v5[80] = GetCurrentThreadId();
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    if ( a1[1] )
    {
      *((_DWORD *)a1 + 56) &= ~1u;
      *((_DWORD *)a1 + 56) |= 2u;
      SetEvent(a1[8]);
    }
    else
    {
      RmpPartitionCleanup((struct _RM_PARTITION *)a1);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
    }
  }
  v5[80] = 0;
  RtlReleaseSRWLockExclusive(v5 + 78);
}
