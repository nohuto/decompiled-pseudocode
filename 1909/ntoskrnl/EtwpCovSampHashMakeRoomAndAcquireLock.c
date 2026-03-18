/*
 * XREFs of EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140903570
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1409013C4 (EtwpCovSampContextAddSamples.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     EtwpCovSampHashLookupInTable @ 0x140903490 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140904924 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140904B64 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampHashMakeRoomAndAcquireLock(ULONG_PTR BugCheckParameter2, int a2, __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *Table; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  __int64 *v14; // r14
  struct _KTHREAD *v15; // rax
  __int64 *v16; // rdi
  unsigned int v17; // edx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rax
  _QWORD *v24; // r14
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 **v28; // rcx
  struct _KTHREAD *v29; // rax
  _QWORD *v31; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Table = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v8 = 0;
  v9 = *(_QWORD *)(BugCheckParameter2 + 1144);
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v10 = *(_DWORD *)(v9 + 20);
  v11 = a2 + *(_DWORD *)(v9 + 16);
  if ( v11 >= (7 * v10) >> 3 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 40);
      if ( v10 < v12 )
      {
        v13 = 2 * v10;
        if ( !v10 )
          v13 = *(_DWORD *)(BugCheckParameter2 + 36);
        while ( (7 * v13) >> 3 < v11 )
          v13 *= 2;
        if ( v13 >= v12 )
          v13 = *(_DWORD *)(BugCheckParameter2 + 40);
        v12 = v13;
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 1176) >= *(_DWORD *)(BugCheckParameter2 + 44) )
      {
        goto LABEL_34;
      }
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( Table )
        EtwpCoverageSamplerFreeTable(Table);
      Table = (__int64 *)EtwpCoverageSamplerAllocateTable(v12);
      v14 = Table;
      if ( !Table )
        goto LABEL_36;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v16 = *(__int64 **)(BugCheckParameter2 + 1144);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v17 = *((_DWORD *)v16 + 5);
      if ( a2 + *((_DWORD *)v16 + 4) < (7 * v17) >> 3 )
        goto LABEL_34;
      if ( v17 >= v12 )
        break;
      *(_QWORD *)(BugCheckParameter2 + 1144) = Table;
      Table = v16;
      v18 = (__int64 *)*v16;
      if ( *(__int64 **)(*v16 + 8) != v16 )
        goto LABEL_31;
      v19 = (__int64 **)v16[1];
      if ( *v19 != v16 )
        goto LABEL_31;
      *v19 = v18;
      v18[1] = (__int64)v19;
      v20 = *(_QWORD **)(BugCheckParameter2 + 1168);
      v21 = *(_QWORD **)(BugCheckParameter2 + 1144);
      if ( *v20 != BugCheckParameter2 + 1160 )
        goto LABEL_31;
      *v21 = BugCheckParameter2 + 1160;
      v22 = 0LL;
      v21[1] = v20;
      *v20 = v21;
      *(_QWORD *)(BugCheckParameter2 + 1168) = v21;
      for ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1144) + 16LL) = *((_DWORD *)v16 + 4);
            (unsigned int)v22 < *((_DWORD *)v16 + 5);
            v22 = (unsigned int)(v22 + 1) )
      {
        v23 = v16[3];
        v24 = (_QWORD *)(v23 + 8 * v22);
        if ( *v24 )
        {
          EtwpCovSampHashLookupInTable(*(_QWORD *)(BugCheckParameter2 + 1144), (unsigned __int8 *)(v23 + 8 * v22), &v31);
          *v31 = *v24;
          if ( (*((_DWORD *)v16 + 4))-- == 1 )
            break;
        }
      }
      if ( v8 < 0x14 )
      {
        v26 = *(_QWORD *)(BugCheckParameter2 + 1144);
        ++v8;
        v10 = *(_DWORD *)(v26 + 20);
        v11 = a2 + *(_DWORD *)(v26 + 16);
        if ( v11 >= (7 * v10) >> 3 )
          continue;
      }
      goto LABEL_34;
    }
    v27 = *(_DWORD *)(BugCheckParameter2 + 1176);
    if ( v27 >= *(_DWORD *)(BugCheckParameter2 + 44) )
    {
LABEL_34:
      if ( Table )
        *a3 = Table;
      goto LABEL_36;
    }
    *(_QWORD *)(BugCheckParameter2 + 1144) = Table;
    Table = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1176) = v27 + 1;
    v28 = *(__int64 ***)(BugCheckParameter2 + 1168);
    if ( *v28 != (__int64 *)(BugCheckParameter2 + 1160) )
LABEL_31:
      __fastfail(3u);
    *v14 = BugCheckParameter2 + 1160;
    v14[1] = (__int64)v28;
    *v28 = v14;
    *(_QWORD *)(BugCheckParameter2 + 1168) = v14;
    if ( *(_DWORD *)(BugCheckParameter2 + 1176) == 2 )
    {
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 1152), 0, 0);
      goto LABEL_34;
    }
  }
LABEL_36:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) != KeGetCurrentThread() )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  }
  return *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1144) + 16LL) < (unsigned int)(7
                                                                                   * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1144)
                                                                                               + 20LL)) >> 3
       ? ((unsigned int)(7 * *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1144) + 20LL)) >> 3)
       - *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1144) + 16LL)
       : 0;
}
