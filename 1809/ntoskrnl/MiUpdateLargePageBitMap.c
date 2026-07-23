/*
 * XREFs of MiUpdateLargePageBitMap @ 0x140027BE8
 * Callers:
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 *     MiFreeMdlPageRun @ 0x140029DE0 (MiFreeMdlPageRun.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiFindLargeNodePage @ 0x1402A91F4 (MiFindLargeNodePage.c)
 *     MiDemotePfnListChain @ 0x1402C55C0 (MiDemotePfnListChain.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiGetFastLargePage @ 0x14085E68C (MiGetFastLargePage.c)
 *     MiMarkLargePageRanges @ 0x1409B9EB4 (MiMarkLargePageRanges.c)
 *     MiCreateEnclaveRegions @ 0x1409BB34C (MiCreateEnclaveRegions.c)
 *     MiMarkLargePagePte @ 0x1409D2EF0 (MiMarkLargePagePte.c)
 *     MiCreateSlabEntriesFromLoaderSlab @ 0x1409F845C (MiCreateSlabEntriesFromLoaderSlab.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rax
  __int64 v9; // rdx
  __int64 v11; // r13
  int v12; // r14d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int8 OldIrql; // bl
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rbp
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 *v29; // r8
  __int64 v30; // r11
  __int64 *v31; // rdx
  bool i; // zf
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 *v37; // r8
  __int64 v38; // r11
  __int64 *v39; // rdx
  bool j; // zf
  __int64 v41; // rcx
  __int64 *v42; // r8
  __int64 v43; // r9
  __int64 *v44; // r10
  bool v45; // zf
  __int64 v46; // rcx
  __int64 *v47; // r8
  __int64 v48; // r10
  __int64 *v49; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v52; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v55; // [rsp+90h] [rbp+18h]

  LOBYTE(v5) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a1;
  if ( a3 < 0x200 )
    return v5;
  LODWORD(v11) = 2;
  v12 = 0;
  v55 = 0;
  while ( 1 )
  {
    v11 = (unsigned int)(v11 - 1);
    v5 = 16LL * (unsigned int)v11;
    v13 = v5 + v9 + 5000;
    v14 = *(_QWORD *)v13;
    if ( !*(_QWORD *)v13 )
      break;
    v52 = MiLargePageSizes[v11];
    v15 = a2 / v52;
    v16 = (~(v52 - 1) & (a3 + v52 + a2 - 1)) / v52;
    v17 = v16;
    v18 = v16 - a2 / v52;
    if ( a5 == 1 )
      goto LABEL_15;
    v19 = v16 - 1;
    if ( a4 == 1 )
    {
      if ( v19 >= v14 )
        goto LABEL_52;
      if ( v18 <= 1 )
      {
        if ( v18 == 1 )
        {
          LOBYTE(v5) = _bittest64(*(const signed __int64 **)(v13 + 8), v15);
          goto LABEL_10;
        }
        goto LABEL_52;
      }
      v41 = *(_QWORD *)(v13 + 8);
      v42 = (__int64 *)(v41 + 8 * (v15 >> 6));
      v43 = *v42;
      v44 = (__int64 *)(v41 + 8 * (v19 >> 6));
      if ( v42 == v44 )
      {
        v45 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v15) & v43) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v15;
      }
      else
      {
        if ( ((-1LL << v15) & v43) != -1LL << v15 )
          goto LABEL_52;
        while ( ++v42 != v44 )
        {
          if ( *v42 != -1 )
            goto LABEL_52;
        }
        v45 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v19) & *v42) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v19;
      }
    }
    else
    {
      if ( v19 >= v14 )
        goto LABEL_52;
      if ( v18 <= 1 )
      {
        if ( v18 == 1 )
        {
          LOBYTE(v5) = !_bittest64(*(const signed __int64 **)(v13 + 8), v15);
          goto LABEL_10;
        }
LABEL_52:
        LOBYTE(v5) = 0;
        goto LABEL_10;
      }
      v46 = *(_QWORD *)(v13 + 8);
      v47 = (__int64 *)(v46 + 8 * (v15 >> 6));
      v48 = *v47;
      v49 = (__int64 *)(v46 + 8 * (v19 >> 6));
      if ( v47 == v49 )
      {
        v45 = (v48 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v15)) == 0;
      }
      else
      {
        if ( (v48 & (-1LL << v15)) != 0 )
          goto LABEL_52;
        while ( ++v47 != v49 )
        {
          if ( *v47 )
            goto LABEL_52;
        }
        v45 = (*v47 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v19)) == 0;
      }
    }
    LOBYTE(v5) = v45;
LABEL_10:
    if ( (_BYTE)v5 == 1 )
      break;
LABEL_15:
    if ( !v12 )
    {
      v55 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_14043B280, &LockHandle);
    }
    if ( a4 == 1 )
      LOBYTE(v5) = RtlSetBitsEx(v13, v15, v18);
    else
      LOBYTE(v5) = RtlClearBitsEx(v13, v15, v18);
    if ( !(_DWORD)v11 )
      break;
    v5 = MiLargePageSizes[(unsigned int)(v11 - 1)] / v52;
    v21 = v5;
    v22 = ~(v5 - 1);
    v23 = v22 & (v5 + v17 - 1);
    v24 = v22 & v15;
    v25 = v23 - v24;
    if ( a4 != 1 )
      goto LABEL_39;
    v26 = v5 + v24;
    v27 = v5 + v24 - 1;
    if ( v27 >= *(_QWORD *)v13 )
      goto LABEL_31;
    if ( v5 <= 1 )
    {
      if ( v5 != 1 )
        goto LABEL_31;
      LOBYTE(v5) = _bittest64(*(const signed __int64 **)(v13 + 8), v24);
LABEL_30:
      if ( !(_BYTE)v5 )
        goto LABEL_31;
    }
    else
    {
      v28 = *(_QWORD *)(v13 + 8);
      v29 = (__int64 *)(v28 + 8 * (v24 >> 6));
      v30 = *v29;
      v5 = v27 >> 6;
      v31 = (__int64 *)(v28 + 8 * (v27 >> 6));
      if ( v29 != v31 )
      {
        v5 = -1LL << v24;
        for ( i = ((-1LL << v24) & v30) == -1LL << v24; i; i = *v29 == -1 )
        {
          if ( ++v29 == v31 )
          {
            v33 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v27;
            v5 = v33 & *v29;
            if ( v5 == v33 )
              goto LABEL_33;
            LOBYTE(v5) = 0;
            goto LABEL_30;
          }
        }
LABEL_31:
        v25 -= v21;
        if ( !v25 )
          break;
        v24 = v26;
        goto LABEL_33;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v21) << v24) & v30) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v21) << v24 )
        goto LABEL_31;
    }
LABEL_33:
    v34 = v23 - v21;
    v35 = v23 - 1;
    if ( v35 < *(_QWORD *)v13 )
    {
      if ( v21 <= 1 )
      {
        if ( v21 == 1 )
        {
          LOBYTE(v5) = _bittest64(*(const signed __int64 **)(v13 + 8), v34);
LABEL_73:
          if ( (_BYTE)v5 )
            goto LABEL_39;
        }
      }
      else
      {
        v36 = *(_QWORD *)(v13 + 8);
        v37 = (__int64 *)(v36 + 8 * (v34 >> 6));
        v38 = *v37;
        v5 = v35 >> 6;
        v39 = (__int64 *)(v36 + 8 * (v35 >> 6));
        if ( v37 == v39 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v21) << v34) & v38) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v21) << v34 )
            goto LABEL_39;
        }
        else
        {
          v5 = -1LL << v34;
          for ( j = ((-1LL << v34) & v38) == -1LL << v34; j; j = *v37 == -1 )
          {
            if ( ++v37 == v39 )
            {
              if ( (*v37 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v35)) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v35 )
                goto LABEL_39;
              LOBYTE(v5) = 0;
              goto LABEL_73;
            }
          }
        }
      }
    }
    v25 -= v21;
    if ( !v25 )
      break;
LABEL_39:
    v12 = v55;
    a2 = v52 * v24;
    a3 = v52 * v25;
    v9 = a1;
    a5 = a4;
  }
  if ( v55 == 1 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    LOBYTE(v5) = OldIrql;
    __writecr8(OldIrql);
  }
  return v5;
}
