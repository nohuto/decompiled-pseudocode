/*
 * XREFs of MiAddPhysicalMemory @ 0x140887F2C
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1408884D4 (MiAddPhysicalMemoryChunks.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x140005F00 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140005F64 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400A03B0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400A06E0 (MiLockDynamicMemoryExclusive.c)
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14015CD6C (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x14018896C (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140295788 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1402A4634 (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x1402BD970 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x1402BE2D4 (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x1402CB7C0 (MiDeleteExtentPfns.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiSplitMirrorBitMap @ 0x1407279B0 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14075079C (MiSplitPfnBitMaps.c)
 *     MiComputeNodeMemory @ 0x1407508A4 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x140888748 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     MiIsExtentDangling @ 0x14088CA4C (MiIsExtentDangling.c)
 */

__int64 __fastcall MiAddPhysicalMemory(ULONG_PTR *a1, _DWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  ULONG_PTR v9; // rdi
  __int64 v10; // rsi
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rdx
  int v16; // r12d
  unsigned int v17; // r12d
  int v18; // r15d
  __int64 v19; // rbx
  unsigned __int64 IsExtentDangling; // rax
  NTSTATUS v21; // ebx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rcx
  ULONG_PTR v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // r13
  unsigned int v27; // ebx
  PVOID v28; // r15
  __int64 v29; // rax
  int v30; // eax
  PVOID v31; // rcx
  _QWORD *v32; // rax
  PVOID P; // [rsp+40h] [rbp-98h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-90h]
  __int64 v35; // [rsp+50h] [rbp-88h]
  __int64 v36; // [rsp+58h] [rbp-80h] BYREF
  struct _KTHREAD *v37; // [rsp+60h] [rbp-78h]
  char *v38; // [rsp+68h] [rbp-70h] BYREF
  __int64 v39; // [rsp+70h] [rbp-68h]
  _QWORD v40[12]; // [rsp+78h] [rbp-60h] BYREF

  memset(v40, 0, 0x28uLL);
  P = 0LL;
  p_P = 0LL;
  v35 = 0LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  v9 = *(_QWORD *)a2 >> 12;
  v10 = *(_QWORD *)a3 >> 12;
  v11 = v10 + v9;
  if ( v9 >= v10 + v9 )
    return 3221225711LL;
  v12 = 0xFFFFFFFFFLL;
  if ( ((unsigned __int64)qword_140465B00 >> 12) - 1 < 0xFFFFFFFFFLL )
    v12 = ((unsigned __int64)qword_140465B00 >> 12) - 1;
  if ( v11 - 1 > v12 )
  {
    if ( (a4 & 2) == 0 )
    {
      v11 = v12 + 1;
      v10 = v12 + 1 - v9;
      goto LABEL_9;
    }
    return 3221225712LL;
  }
LABEL_9:
  v13 = v10;
  if ( v9 >= v11 )
    return 3221225711LL;
  if ( v10 + v9 >= qword_1404664E0 && v9 < qword_1404664E0 + 2048 || v10 + v9 >= 0xFFFFFFFFALL )
    return 3221225496LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  v36 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  p_P = &P;
  P = &P;
  v16 = 5;
  if ( a1 == &MiSystemPartition )
    v16 = 1;
  v17 = a4 | v16;
  if ( (v17 & 0xFE) != 0 && (v17 & 0x100) != 0 )
    return 3221225714LL;
  v18 = v17 & 2;
  if ( (v17 & 2) != 0 )
  {
    MiDeleteExtentPfns(0LL, (__int64)CurrentThread);
    v19 = (__int64)v37;
  }
  else
  {
    v19 = (__int64)CurrentThread;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  if ( (v17 & 2) != 0 || byte_140464730 )
  {
    IsExtentDangling = MiIsExtentDangling(v9, v10, v17);
    if ( IsExtentDangling >= v9 && IsExtentDangling < v11 )
    {
LABEL_25:
      v21 = -1073741800;
      goto LABEL_71;
    }
    if ( (v17 & 2) != 0 )
    {
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, v19);
      v22 = 0LL;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v23 = (char *)MmPhysicalMemoryBlock + 24;
        do
        {
          v24 = *(v23 - 1);
          if ( *v23 )
          {
            if ( v9 >= v24 )
            {
              if ( v9 < *v23 + v24 )
              {
LABEL_32:
                MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, v19);
                goto LABEL_25;
              }
            }
            else if ( v11 > v24 )
            {
              goto LABEL_32;
            }
          }
          ++v22;
          v23 += 2;
        }
        while ( v22 < *(unsigned int *)MmPhysicalMemoryBlock );
      }
      byte_140464730 = 1;
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, v19);
LABEL_59:
      v21 = MiMapNewPfns(v9, a5);
      if ( v21 >= 0 )
      {
        *(_QWORD *)a3 = v10 << 12;
        if ( !v18 )
        {
          MiPerformMemoryChange(v9, v10, (void **)&v38, &v36, v17);
          MiComputeNodeMemory((__int64)&MiSystemPartition);
          v30 = -1;
          if ( qword_14046A350 <= 0xFFFFFFFF )
            v30 = qword_14046A350;
          MEMORY[0xFFFFF780000002E8] = v30;
          if ( (v17 & 0x40) == 0 )
            MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v9, ((v11 + 511) >> 9) - (v9 >> 9), 0, 0);
          if ( (v17 & 4) == 0 )
            MiEnableNewPfns(v9, v11, v17);
          if ( (MiFlags & 0x10000000) != 0 )
            ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
          KePulseEvent(qword_1404685C0, 0, 0);
        }
        v21 = 0;
      }
LABEL_71:
      if ( v18 )
        goto LABEL_75;
      goto LABEL_74;
    }
  }
  v25 = qword_14046A350 + v10;
  if ( qword_14046A350 + v10 > qword_140465AA8 )
    v11 = v9 + qword_140465AA8 - qword_14046A350;
  v10 = qword_140465AA8 - qword_14046A350;
  if ( v25 <= qword_140465AA8 )
    v10 = v13;
  v39 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
  v26 = v39;
  if ( v9 < v11 )
  {
    if ( (v17 & 0x804) == 0 )
    {
      v21 = KeConfigureDynamicMemory(v9, v11 - 1, 0);
      if ( v21 < 0 )
        goto LABEL_74;
    }
    if ( (unsigned int)MiDescribePageRun((__int64)&P, v9, v10) )
    {
      v40[0] = 0LL;
      v40[2] = v9;
      v40[3] = v10;
      v21 = MiConfigureMemoryInsertion(&v38, MmPhysicalMemoryBlock, v40);
      if ( v21 < 0 )
        goto LABEL_74;
      if ( (unsigned int)MiSplitPfnBitMaps(&MiSystemPartition, v9, v10) )
      {
        v27 = 0;
        while ( (unsigned int)MiSplitMirrorBitMap((unsigned __int64 *)&qword_140466250[2 * v27], v9, v10) )
        {
          if ( ++v27 >= 2 )
          {
            while ( 1 )
            {
              v28 = P;
              if ( P == &P )
                break;
              if ( *((PVOID **)P + 1) != &P || (v29 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
LABEL_84:
                __fastfail(3u);
              P = *(PVOID *)P;
              *(_QWORD *)(v29 + 8) = &P;
              v21 = MiConfigureMemoryInsertion(&v36, v26, v28);
              ExFreePoolWithTag(v28, 0);
              if ( v26 != v39 )
                ExFreePoolWithTag((PVOID)(v26 - 16), 0);
              if ( v21 < 0 )
              {
                v18 = v17 & 2;
                goto LABEL_74;
              }
              v26 = v36;
            }
            v18 = v17 & 2;
            goto LABEL_59;
          }
        }
      }
    }
    v21 = -1073741670;
    goto LABEL_74;
  }
  v21 = -1073741585;
LABEL_74:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v37);
LABEL_75:
  if ( v38 )
    ExFreePoolWithTag(v38 - 16, 0);
  if ( !v36 )
    goto LABEL_80;
  v31 = (PVOID)(v36 - 16);
  while ( 1 )
  {
    ExFreePoolWithTag(v31, 0);
LABEL_80:
    v31 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_84;
    v32 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_84;
    P = *(PVOID *)P;
    v32[1] = &P;
  }
  if ( !v18 )
  {
    if ( v39 )
      MiDereferencePageRuns(v39);
    if ( v21 >= 0 )
      IoUpdateDumpPhysicalRanges();
  }
  return (unsigned int)v21;
}
