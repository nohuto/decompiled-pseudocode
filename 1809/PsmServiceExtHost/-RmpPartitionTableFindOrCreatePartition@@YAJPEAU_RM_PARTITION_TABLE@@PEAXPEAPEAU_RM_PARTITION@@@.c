/*
 * XREFs of ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001B710
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001BA50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x18003A15C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800083F0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18002FB60 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180046BD0 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180047058 (-RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x1800475DC (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 *     ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x180047758 (-RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x1800479D0 (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionTableFindOrCreatePartition(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        struct _RM_PARTITION **a3)
{
  void *v4; // rsi
  char *v6; // r12
  char *v7; // r15
  __int64 *v8; // rdi
  int v9; // eax
  struct _RM_PARTITION *Heap; // rax
  struct _RM_PARTITION *v12; // rdi
  int State; // eax
  struct _RM_PARTITION *PartitionInternal; // rax
  unsigned __int64 v15; // r8
  char *v16; // rax
  char **v17; // rcx
  void *v18; // rcx
  int v19; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  void *v23; // [rsp+60h] [rbp-19h]
  int v24; // [rsp+68h] [rbp-11h]
  int v25; // [rsp+6Ch] [rbp-Dh]
  int *v26; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]
  unsigned __int64 *v28; // [rsp+80h] [rbp+7h]
  __int64 v29; // [rsp+88h] [rbp+Fh]

  v20 = 0LL;
  v4 = a2;
  if ( a2 == (void *)-2LL )
    v4 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
  {
    v9 = -1073741058;
LABEL_9:
    v19 = v9;
    RtlReleaseSRWLockShared(a1);
    goto LABEL_10;
  }
  v6 = (char *)*((_QWORD *)a1 + 2);
  v7 = (char *)a1 + 16;
  if ( v6 != (char *)a1 + 16 )
  {
    while ( 1 )
    {
      v8 = (__int64 *)(v6 - 8);
      if ( (int)NtCompareObjects(*((_QWORD *)v6 + 3), v4) >= 0 )
        break;
      v6 = *(char **)v6;
      if ( v6 == v7 )
        goto LABEL_17;
    }
    if ( (v8[28] & 3) == 1 )
    {
      if ( _InterlockedIncrement64(v8) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_PARTITION *)v8;
      v9 = 0;
      goto LABEL_9;
    }
  }
LABEL_17:
  RtlReleaseSRWLockShared(a1);
  Heap = (struct _RM_PARTITION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v12 = Heap;
  if ( !Heap )
  {
    v19 = -1073741801;
    goto LABEL_12;
  }
  RmpPartitionInitialize((struct _RM_PARTITION_TABLE *)((char *)a1 - 312), Heap);
  State = RmpMemoryMonitorAllocateState((struct _RM_PARTITION *)((char *)v12 + 40));
  if ( State >= 0 )
    State = 0;
  v19 = State;
  if ( State >= 0 )
  {
    RmpAcquireGlobalLock();
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    ++*((_DWORD *)a1 + 20);
    v19 = RmpArrayGrow<_RM_PARTITION *>(
            (char *)a1 + 64,
            (char *)a1 + 72,
            (unsigned int)(*((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 20)));
    RmpReleaseGlobalLock();
    if ( v19 >= 0 )
    {
      if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
      {
LABEL_37:
        v19 = -1073741058;
      }
      else
      {
        while ( 1 )
        {
          PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v4, 0xFu);
          if ( !PartitionInternal )
          {
            v15 = *((_QWORD *)a1 + 7);
            v20 = v15;
            *((_QWORD *)a1 + 7) = v15 + 1;
            v19 = RmpPartitionStart(v12, v4, v15);
            if ( v19 < 0 )
            {
              v18 = (void *)*((_QWORD *)v12 + 4);
              if ( v18 )
              {
                NtClose(v18);
                *((_QWORD *)v12 + 4) = 0LL;
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 19);
              v16 = (char *)v12 + 8;
              v17 = (char **)*((_QWORD *)a1 + 3);
              if ( *v17 != v7 )
                __fastfail(3u);
              *((_QWORD *)v12 + 2) = v17;
              *(_QWORD *)v16 = v7;
              *v17 = v16;
              *((_QWORD *)a1 + 3) = v16;
              RtlWakeAllConditionVariable((char *)a1 + 32);
              *a3 = v12;
              v12 = 0LL;
              v19 = 0;
            }
            goto LABEL_27;
          }
          if ( (*((_DWORD *)PartitionInternal + 56) & 3) == 1 )
            break;
          CempLockSleepConditionVariableExclusive(a1, (char *)a1 + 32, 0LL);
          if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
            goto LABEL_37;
        }
        if ( _InterlockedIncrement64((volatile signed __int64 *)PartitionInternal) <= 1 )
          __fastfail(0xEu);
        *a3 = PartitionInternal;
        v19 = 0;
      }
    }
LABEL_27:
    --*((_DWORD *)a1 + 20);
    *((_DWORD *)a1 + 2) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  if ( v12 )
    RmpPartitionRelease((HANDLE *)v12);
LABEL_10:
  if ( v19 >= 0 )
    v20 = *((_QWORD *)*a3 + 27);
LABEL_12:
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 9) != 0 && (qword_18009B0C8 & 9) == qword_18009B0C8 )
  {
    v27 = 4LL;
    v26 = &v19;
    v28 = &v20;
    v29 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180086E85 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v23 = &unk_180086E90;
    UserData.Reserved = 2;
    v24 = 40;
    v25 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (unsigned int)v19;
}
