/*
 * XREFs of MiUpdateLargePageBitMap @ 0x1400BD2AC
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1400231B0 (MiLinkPoolCommitChain.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiFreeMdlPageRun @ 0x1400DDBF4 (MiFreeMdlPageRun.c)
 *     MiFreeLargePageMemory @ 0x140146DD8 (MiFreeLargePageMemory.c)
 *     MiFreeLargeZeroPages @ 0x140186C94 (MiFreeLargeZeroPages.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiFindLargeNodePage @ 0x1402C0618 (MiFindLargeNodePage.c)
 *     MiDemotePfnListChain @ 0x1402DF278 (MiDemotePfnListChain.c)
 *     MiActOnPartitionNodePages @ 0x1402E8CAC (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiAssembleLargePagePfnList @ 0x140898EF4 (MiAssembleLargePagePfnList.c)
 *     MiGetFastLargePage @ 0x1408997F8 (MiGetFastLargePage.c)
 *     MiMarkLargePageRanges @ 0x1409F41EC (MiMarkLargePageRanges.c)
 *     MiMarkLargePagePte @ 0x140A15510 (MiMarkLargePagePte.c)
 *     MiCreateEnclaveRegions @ 0x140A19A58 (MiCreateEnclaveRegions.c)
 *     MiCreateBootSlabEntries @ 0x140A3C9F0 (MiCreateBootSlabEntries.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x140073620 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1400E8360 (RtlClearBitsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  __int64 v8; // rdx
  __int64 v10; // r13
  int v11; // r14d
  __int64 v12; // rsi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rax
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
  unsigned __int8 v33; // al
  unsigned __int8 OldIrql; // bl
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rbp
  __int64 v37; // rdx
  __int64 *v38; // r8
  __int64 v39; // r11
  __int64 *v40; // rdx
  bool j; // zf
  __int64 v42; // rcx
  __int64 *v43; // r8
  __int64 v44; // r9
  __int64 *v45; // r10
  bool v46; // zf
  __int64 v47; // rcx
  __int64 *v48; // r8
  __int64 v49; // r10
  __int64 *v50; // r9
  unsigned __int8 v51; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v53; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v56; // [rsp+90h] [rbp+18h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = a1;
  if ( a3 < 0x200 )
    return;
  LODWORD(v10) = 2;
  v11 = 0;
  v56 = 0;
  while ( 1 )
  {
    v10 = (unsigned int)(v10 - 1);
    v12 = 16LL * (unsigned int)v10 + v8 + 5000;
    v13 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
      break;
    v53 = MiLargePageSizes[v10];
    v14 = a2 / v53;
    v15 = (~(v53 - 1) & (a3 + v53 + a2 - 1)) / v53;
    v16 = v15;
    v17 = v15 - a2 / v53;
    if ( a5 == 1 )
      goto LABEL_11;
    v18 = v15 - 1;
    if ( a4 == 1 )
    {
      if ( v18 >= v13 )
        goto LABEL_52;
      if ( v17 <= 1 )
      {
        if ( v17 == 1 )
        {
          v19 = _bittest64(*(const signed __int64 **)(v12 + 8), v14);
          goto LABEL_10;
        }
        goto LABEL_52;
      }
      v42 = *(_QWORD *)(v12 + 8);
      v43 = (__int64 *)(v42 + 8 * (v14 >> 6));
      v44 = *v43;
      v45 = (__int64 *)(v42 + 8 * (v18 >> 6));
      if ( v43 == v45 )
      {
        v46 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v14) & v44) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v14;
      }
      else
      {
        if ( ((-1LL << v14) & v44) != -1LL << v14 )
          goto LABEL_52;
        while ( ++v43 != v45 )
        {
          if ( *v43 != -1 )
            goto LABEL_52;
        }
        v46 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v18) & *v43) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v18;
      }
    }
    else
    {
      if ( v18 >= v13 )
        goto LABEL_52;
      if ( v17 <= 1 )
      {
        if ( v17 == 1 )
        {
          v19 = !_bittest64(*(const signed __int64 **)(v12 + 8), v14);
          goto LABEL_10;
        }
LABEL_52:
        v19 = 0;
        goto LABEL_10;
      }
      v47 = *(_QWORD *)(v12 + 8);
      v48 = (__int64 *)(v47 + 8 * (v14 >> 6));
      v49 = *v48;
      v50 = (__int64 *)(v47 + 8 * (v18 >> 6));
      if ( v48 == v50 )
      {
        v46 = (v49 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v14)) == 0;
      }
      else
      {
        if ( (v49 & (-1LL << v14)) != 0 )
          goto LABEL_52;
        while ( ++v48 != v50 )
        {
          if ( *v48 )
            goto LABEL_52;
        }
        v46 = (*v48 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v18)) == 0;
      }
    }
    v19 = v46;
LABEL_10:
    if ( v19 == 1 )
      break;
LABEL_11:
    if ( !v11 )
    {
      v56 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_140465900, &LockHandle);
    }
    if ( a4 == 1 )
      RtlSetBitsEx(v12, v14, v17);
    else
      RtlClearBitsEx(v12, v14, v17);
    if ( !(_DWORD)v10 )
      break;
    v20 = MiLargePageSizes[(unsigned int)(v10 - 1)] / v53;
    v21 = v20;
    v22 = ~(v20 - 1);
    v23 = v22 & (v20 + v16 - 1);
    v24 = v22 & v14;
    v25 = v23 - v24;
    if ( a4 != 1 )
      goto LABEL_34;
    v26 = v20 + v24;
    v27 = v20 + v24 - 1;
    if ( v27 >= *(_QWORD *)v12 )
      goto LABEL_27;
    if ( v20 <= 1 )
    {
      if ( v20 != 1 )
        goto LABEL_27;
      v33 = _bittest64(*(const signed __int64 **)(v12 + 8), v24);
LABEL_26:
      if ( !v33 )
        goto LABEL_27;
    }
    else
    {
      v28 = *(_QWORD *)(v12 + 8);
      v29 = (__int64 *)(v28 + 8 * (v24 >> 6));
      v30 = *v29;
      v31 = (__int64 *)(v28 + 8 * (v27 >> 6));
      if ( v29 != v31 )
      {
        for ( i = ((-1LL << v24) & v30) == -1LL << v24; i; i = *v29 == -1 )
        {
          if ( ++v29 == v31 )
          {
            if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v27) & *v29) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v27 )
              goto LABEL_39;
            v33 = 0;
            goto LABEL_26;
          }
        }
LABEL_27:
        v25 -= v21;
        if ( !v25 )
          break;
        v24 = v26;
        goto LABEL_39;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v24) & v30) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v24 )
        goto LABEL_27;
    }
LABEL_39:
    v35 = v23 - v21;
    v36 = v23 - 1;
    if ( v36 < *(_QWORD *)v12 )
    {
      if ( v21 <= 1 )
      {
        if ( v21 == 1 )
        {
          v51 = _bittest64(*(const signed __int64 **)(v12 + 8), v35);
LABEL_73:
          if ( v51 )
            goto LABEL_34;
        }
      }
      else
      {
        v37 = *(_QWORD *)(v12 + 8);
        v38 = (__int64 *)(v37 + 8 * (v35 >> 6));
        v39 = *v38;
        v40 = (__int64 *)(v37 + 8 * (v36 >> 6));
        if ( v38 == v40 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v21) << v35) & v39) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v21) << v35 )
            goto LABEL_34;
        }
        else
        {
          for ( j = ((-1LL << v35) & v39) == -1LL << v35; j; j = *v38 == -1 )
          {
            if ( ++v38 == v40 )
            {
              if ( (*v38 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v36)) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v36 )
                goto LABEL_34;
              v51 = 0;
              goto LABEL_73;
            }
          }
        }
      }
    }
    v25 -= v21;
    if ( !v25 )
      break;
LABEL_34:
    v11 = v56;
    a2 = v53 * v24;
    a3 = v53 * v25;
    v8 = a1;
    a5 = a4;
  }
  if ( v56 == 1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
}
