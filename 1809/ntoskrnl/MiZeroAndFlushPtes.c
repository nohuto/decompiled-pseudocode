/*
 * XREFs of MiZeroAndFlushPtes @ 0x14012344C
 * Callers:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x1402ADA50 (MmMapMdl.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     MiReplicatePteChange @ 0x140175014 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  int v5; // eax
  int v6; // r13d
  unsigned __int64 v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rtt
  unsigned __int64 v16; // rsi
  BOOL v17; // eax
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d
  bool v28; // zf
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  char v31; // r9
  __int64 v32; // r10
  bool v33; // zf
  char v34; // r9
  _QWORD *v35; // rsi
  __int64 v36; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v38; // r11
  __int64 v39; // r10
  __int64 v40; // r9
  unsigned __int64 v41; // [rsp+28h] [rbp-E0h]
  __int64 v43; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v44; // [rsp+38h] [rbp-D0h]
  __int64 v45; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v47; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v48; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v49; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+68h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  int v52; // [rsp+88h] [rbp-80h] BYREF
  __int16 v53; // [rsp+8Ch] [rbp-7Ch]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  _QWORD v57[32]; // [rsp+148h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v41 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 1LL;
  v5 = MI_IS_PHYSICAL_ADDRESS(a1);
  v6 = v5;
  if ( v5 > 0 )
  {
    v25 = (unsigned int)v5;
    do
    {
      v4 <<= 9;
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v25;
    }
    while ( v25 );
  }
  v44 = 0LL;
  v7 = 0LL;
  v54 = 20LL;
  v8 = 0;
  v52 = 0;
  v53 = 0;
  v55 = 0LL;
  v56 = 0LL;
  v9 = MiSwizzleInvalidPte(768LL);
  v12 = a2;
  v13 = v9;
  while ( 2 )
  {
    v15 = v12;
    v14 = v12 % v4;
    v12 = v14;
    v43 = v14;
    v50 = v3 + 8 * (v15 / v4);
    if ( v3 >= v50 )
      goto LABEL_18;
    v49 = v4 << 12;
    do
    {
      v47 = v7;
      v46 = v7;
      v45 = MI_READ_PTE_LOCK_FREE(v3);
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL;
      v48 = v16;
      if ( v6 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
        if ( MiPteInShadowRange(v3) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v27 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v28 = (v26 & 1) == 0;
              goto LABEL_36;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v28 = (v26 & 1) == 0;
LABEL_36:
            if ( !v28 )
              v26 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v3 = v26;
        if ( v27 )
          MiWritePteShadow(v3, v26);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(OldIrql);
        v7 = v3;
        v16 = v48;
        if ( v46 )
          v7 = v47;
        v44 = v3;
        goto LABEL_48;
      }
      v17 = MiPteInShadowRange(v3);
      v19 = v18;
      if ( v6 >= 1 )
      {
        v20 = v13;
        if ( !v17 )
          goto LABEL_8;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v19 = 1;
          if ( HIBYTE(word_14043B26C) != v31 )
            goto LABEL_8;
          v33 = (v13 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
            goto LABEL_8;
          v33 = (v13 & 1) == 0;
        }
      }
      else
      {
        v20 = ZeroPte;
        if ( !v17 )
          goto LABEL_8;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v19 = 1;
          if ( HIBYTE(word_14043B26C) != v34 )
            goto LABEL_8;
          v33 = (v20 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
            goto LABEL_8;
          v33 = (v20 & 1) == 0;
        }
      }
      if ( !v33 )
        v20 |= v32;
LABEL_8:
      *(_QWORD *)v3 = v20;
      if ( v19 )
        MiWritePteShadow(v3, v20);
      if ( v6 < 1 )
      {
        MiInsertTbFlushEntry((__int64)&v52, v41, 1LL, v6);
        goto LABEL_12;
      }
LABEL_48:
      MiInsertLargeTbFlushEntry((__int64)&v52, v6, v3);
LABEL_12:
      v11 = 0LL;
      if ( (*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        if ( v8 && (v21 = v57[2 * v8 - 1], v21 == v16) )
        {
          v57[2 * v8 - 1] = v4 + v21;
        }
        else
        {
          v24 = 2LL * v8++;
          v57[v24] = v16;
          v57[v24 + 1] = v16 + v4;
          if ( v8 == 16 )
          {
            MiFlushTbList(&v52, v14, v10, 0LL);
            v35 = v57;
            v36 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v35, v35[1] - *v35);
              v35 += 2;
              --v36;
            }
            while ( v36 );
            v11 = 0LL;
            v8 = 0;
          }
        }
      }
      v3 += 8LL;
      v2 = v49 + v41;
      v41 += v49;
    }
    while ( v3 < v50 );
    v12 = v43;
LABEL_18:
    if ( v12 )
    {
      v4 = 1LL;
      v6 = v11;
      v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v7 )
  {
    MiGetLeafVa(v44);
    LeafVa = MiGetLeafVa(v7);
    MiReplicatePteChange(v39 + (v38 & (LeafVa >> 9)), v40);
  }
  MiFlushTbList(&v52, v14, v10, v11);
  v22 = v8;
  if ( v8 )
  {
    v23 = v57;
    do
    {
      MiDereferenceIoPages(1LL, *v23, v23[1] - *v23);
      v23 += 2;
      --v22;
    }
    while ( v22 );
  }
}
