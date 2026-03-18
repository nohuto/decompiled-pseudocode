/*
 * XREFs of MiAddPhysicalMemory @ 0x14084C8B4
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x14084CE00 (MiAddPhysicalMemoryChunks.c)
 *     MiAllocateFileExtents @ 0x1408521D0 (MiAllocateFileExtents.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140090D18 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140091050 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryShared @ 0x1400A8914 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1400A8940 (MiUnlockDynamicMemoryShared.c)
 *     KePulseEvent @ 0x1400F0BA0 (KePulseEvent.c)
 *     MiReferencePageRuns @ 0x14012B6B0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x140141AB0 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x14017EF64 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280428 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14028DA04 (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x1402A6128 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x1402A6B28 (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x1402B59C0 (MiDeleteExtentPfns.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiSplitMirrorBitMap @ 0x1406DFBC8 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14072AA40 (MiSplitPfnBitMaps.c)
 *     MiComputeNodeMemory @ 0x14075DCBC (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x14084CEC0 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x14084D3C0 (MiMapNewPfns.c)
 *     MmIsExtentDangling @ 0x140852F70 (MmIsExtentDangling.c)
 */

__int64 __fastcall MiAddPhysicalMemory(ULONG_PTR *a1, _DWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v13; // r12
  int v14; // r15d
  int v15; // r15d
  int v16; // r13d
  unsigned __int64 IsExtentDangling; // rax
  NTSTATUS v18; // ebx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  ULONG_PTR v22; // rax
  unsigned __int64 v23; // r8
  unsigned int v24; // ebx
  __int64 i; // r13
  PVOID v26; // r15
  __int64 v27; // rax
  int v28; // eax
  PVOID v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-A8h] BYREF
  PVOID P[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-88h]
  int v34; // [rsp+58h] [rbp-80h]
  char *v35; // [rsp+60h] [rbp-78h] BYREF
  struct _KTHREAD *v36; // [rsp+68h] [rbp-70h]
  _QWORD v37[13]; // [rsp+70h] [rbp-68h] BYREF
  int v39; // [rsp+E8h] [rbp+10h]

  if ( (*a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  v6 = *(_QWORD *)a2 >> 12;
  v7 = *(_QWORD *)a3 >> 12;
  v8 = v7 + v6;
  if ( v6 >= v7 + v6 )
    return 3221225711LL;
  v9 = 0xFFFFFFFFFLL;
  if ( ((unsigned __int64)qword_14043A0C0 >> 12) - 1 < 0xFFFFFFFFFLL )
    v9 = ((unsigned __int64)qword_14043A0C0 >> 12) - 1;
  if ( v8 - 1 > v9 )
  {
    if ( (a4 & 2) == 0 )
    {
      v8 = v9 + 1;
      v7 = v9 + 1 - v6;
      goto LABEL_9;
    }
    return 3221225712LL;
  }
LABEL_9:
  v10 = v7;
  if ( v6 >= v8 )
    return 3221225711LL;
  if ( v7 + v6 >= qword_14043AA60 && v6 < qword_14043AA60 + 2048 || v7 + v6 >= 0xFFFFFFFFALL )
    return 3221225496LL;
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
  v13 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  P[2] = 0LL;
  P[1] = P;
  v14 = 5;
  P[0] = P;
  if ( a1 == &MiSystemPartition )
    v14 = 1;
  v15 = a4 | v14;
  v34 = v15;
  if ( (v15 & 0xFE) != 0 && (v15 & 0x100) != 0 )
    return 3221225714LL;
  v16 = v15 & 2;
  v39 = v16;
  if ( (v15 & 2) != 0 )
    MiDeleteExtentPfns(0LL);
  else
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  IsExtentDangling = MmIsExtentDangling(v6, v7);
  if ( IsExtentDangling >= v6 && IsExtentDangling < v8 )
  {
LABEL_23:
    v18 = -1073741800;
    goto LABEL_68;
  }
  if ( (v15 & 2) != 0 )
  {
    v19 = (__int64)v36;
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)v36);
    v20 = 0LL;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      v21 = (char *)MmPhysicalMemoryBlock + 24;
      do
      {
        v22 = *(v21 - 1);
        if ( *v21 )
        {
          if ( v6 >= v22 )
          {
            if ( v6 < *v21 + v22 )
            {
LABEL_30:
              MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, v19);
              goto LABEL_23;
            }
          }
          else if ( v8 > v22 )
          {
            goto LABEL_30;
          }
        }
        ++v20;
        v21 += 2;
      }
      while ( v20 < *(unsigned int *)MmPhysicalMemoryBlock );
    }
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, v19);
LABEL_58:
    v18 = MiMapNewPfns(v6, v8, *(unsigned __int16 *)a1, v15, a5);
    if ( v18 >= 0 )
    {
      *(_QWORD *)a3 = v7 << 12;
      if ( !v16 )
      {
        MiPerformMemoryChange(v6, v7, (void **)&v35, &v31, v15);
        MiComputeNodeMemory((__int64)&MiSystemPartition);
        v28 = -1;
        if ( qword_14043E510 <= 0xFFFFFFFF )
          v28 = qword_14043E510;
        MEMORY[0xFFFFF780000002E8] = v28;
        if ( (v15 & 0x40) == 0 )
          MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, ((v8 + 511) >> 9) - (v6 >> 9), 0, 0);
        if ( (v15 & 4) == 0 )
          MiEnableNewPfns(v6, v8, v15);
        KePulseEvent(qword_14043CA80, 0, 0);
        v13 = v31;
      }
      v18 = 0;
    }
LABEL_68:
    if ( v16 )
      goto LABEL_72;
    goto LABEL_71;
  }
  v23 = qword_14043E510 + v7;
  if ( qword_14043E510 + v7 > qword_14043A080 )
    v8 = v6 + qword_14043A080 - qword_14043E510;
  v7 = qword_14043A080 - qword_14043E510;
  if ( v23 <= qword_14043A080 )
    v7 = v10;
  v33 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
  if ( v6 < v8 )
  {
    if ( (v15 & 4) == 0 )
    {
      v18 = KeConfigureDynamicMemory(v6, v8 - 1, 0);
      if ( v18 < 0 )
        goto LABEL_71;
    }
    if ( (unsigned int)MiDescribePageRun((__int64)P, v6, v7) )
    {
      v37[0] = 0LL;
      v37[2] = v6;
      v37[3] = v7;
      v18 = MiConfigureMemoryInsertion(&v35, MmPhysicalMemoryBlock, v37);
      if ( v18 < 0 )
        goto LABEL_71;
      if ( (unsigned int)MiSplitPfnBitMaps(&MiSystemPartition, v6, v7) )
      {
        v24 = 0;
        while ( (unsigned int)MiSplitMirrorBitMap((unsigned __int64 *)&qword_14043A7B0[2 * v24], v6, v7) )
        {
          if ( ++v24 >= 2 )
          {
            for ( i = v33; ; i = v31 )
            {
              v26 = P[0];
              if ( P[0] == P )
                break;
              if ( *((PVOID **)P[0] + 1) != P || (v27 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_81:
                __fastfail(3u);
              P[0] = *(PVOID *)P[0];
              *(_QWORD *)(v27 + 8) = P;
              v18 = MiConfigureMemoryInsertion(&v31, i, v26);
              ExFreePoolWithTag(v26, 0);
              if ( i != v33 )
                ExFreePoolWithTag((PVOID)(i - 16), 0);
              v13 = v31;
              if ( v18 < 0 )
              {
                v16 = v39;
                goto LABEL_71;
              }
            }
            v15 = v34;
            v16 = v39;
            goto LABEL_58;
          }
        }
      }
    }
    v18 = -1073741670;
    goto LABEL_71;
  }
  v18 = -1073741585;
LABEL_71:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v36);
LABEL_72:
  if ( v35 )
    ExFreePoolWithTag(v35 - 16, 0);
  if ( !v13 )
    goto LABEL_77;
  v29 = (PVOID)(v13 - 16);
  while ( 1 )
  {
    ExFreePoolWithTag(v29, 0);
LABEL_77:
    v29 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_81;
    v30 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_81;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v30 + 8) = P;
  }
  if ( !v16 )
  {
    if ( v33 )
      MiDereferencePageRuns(v33);
    if ( v18 >= 0 )
      IoUpdateDumpPhysicalRanges();
  }
  return (unsigned int)v18;
}
