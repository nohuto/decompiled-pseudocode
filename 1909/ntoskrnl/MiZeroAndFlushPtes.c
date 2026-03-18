/*
 * XREFs of MiZeroAndFlushPtes @ 0x1400F52B8
 * Callers:
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x1402C51C0 (MmMapMdl.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDereferenceIoPages @ 0x1400F55EC (MiDereferenceIoPages.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReplicatePteChange @ 0x14017E930 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  int v7; // eax
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rtt
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  int v17; // r11d
  BOOL v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // r11d
  int v22; // r8d
  __int64 v23; // rdx
  unsigned __int64 v24; // r13
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r8d
  bool v34; // zf
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  bool v38; // zf
  _QWORD *v39; // rsi
  unsigned __int64 LeafVa; // rax
  __int64 v41; // r11
  __int64 v42; // r10
  __int64 v43; // r9
  int v44; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v46; // [rsp+38h] [rbp-D0h]
  __int64 v47; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v49; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v50; // [rsp+60h] [rbp-A8h]
  __int64 v51; // [rsp+68h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v53[24]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v54[32]; // [rsp+148h] [rbp+40h] BYREF

  memset(v53, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v45 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 1LL;
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  v44 = v7;
  if ( v7 > 0 )
  {
    v30 = (unsigned int)v7;
    do
    {
      v6 <<= 9;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v30;
    }
    while ( v30 );
  }
  v8 = 0LL;
  LODWORD(v53[1]) = 20;
  v46 = 0LL;
  LODWORD(v9) = 0;
  v53[3] = 0LL;
  v10 = MiSwizzleInvalidPte(768LL);
  v12 = 0x8000000000000000uLL;
  while ( 2 )
  {
    v14 = a2;
    v13 = a2 % v6;
    a2 = v13;
    v51 = v13;
    v50 = v5 + 8 * (v14 / v6);
    if ( v5 >= v50 )
      goto LABEL_18;
    v49 = v6 << 12;
    do
    {
      v15 = v8;
      v47 = MI_READ_PTE_LOCK_FREE(v5);
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47) >> 12) & 0xFFFFFFFFFLL;
      v48 = v16;
      if ( v17 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        if ( MiPteInShadowRange(v5) )
        {
          if ( (unsigned int)MiPteHasShadow(v32) )
          {
            v33 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v34 = (v31 & 1) == 0;
              goto LABEL_40;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v34 = (v31 & 1) == 0;
LABEL_40:
            if ( !v34 )
              v31 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v5 = v31;
        if ( v33 )
          MiWritePteShadow(v5, v31);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(OldIrql);
        v21 = v44;
        v16 = v48;
        v8 = v5;
        if ( v15 )
          v8 = v15;
        v46 = v5;
        goto LABEL_32;
      }
      v18 = MiPteInShadowRange(v5);
      v22 = 0;
      if ( v21 >= 1 )
      {
        v23 = v10;
        if ( !v18 )
          goto LABEL_8;
        if ( (unsigned int)MiPteHasShadow(v19) )
        {
          v22 = 1;
          if ( HIBYTE(word_1404658EC) )
            goto LABEL_8;
          v38 = (v10 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_8;
          v38 = (v10 & 1) == 0;
        }
      }
      else
      {
        v23 = ZeroPte;
        if ( !v18 )
          goto LABEL_8;
        if ( (unsigned int)MiPteHasShadow(v19) )
        {
          v22 = 1;
          if ( HIBYTE(word_1404658EC) )
            goto LABEL_8;
          v38 = (v23 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_8;
          v38 = (v23 & 1) == 0;
        }
      }
      if ( !v38 )
        v23 |= v20;
LABEL_8:
      *(_QWORD *)v5 = v23;
      if ( v22 )
        MiWritePteShadow(v5, v23);
      if ( v21 < 1 )
      {
        v24 = v45;
        MiInsertTbFlushEntry((__int64)v53, v45, 1LL, v21);
        goto LABEL_12;
      }
LABEL_32:
      MiInsertLargeTbFlushEntry(v53, (unsigned int)v21, v5, v20);
      v24 = v45;
LABEL_12:
      if ( (*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        if ( (_DWORD)v9 && (v26 = v54[2 * (unsigned int)(v9 - 1) + 1], v26 == v16) )
        {
          v54[2 * (unsigned int)(v9 - 1) + 1] = v6 + v26;
        }
        else
        {
          v29 = 2LL * (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v54[v29] = v16;
          v54[v29 + 1] = v16 + v6;
          if ( (_DWORD)v9 == 16 )
          {
            MiFlushTbList((int *)v53, v13, v11, v25);
            v39 = v54;
            v9 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v39, v39[1] - *v39);
              v39 += 2;
              --v9;
            }
            while ( v9 );
          }
        }
      }
      v4 = v49 + v24;
      v5 += 8LL;
      v12 = 0x8000000000000000uLL;
      v45 = v4;
    }
    while ( v5 < v50 );
    a2 = v51;
LABEL_18:
    if ( a2 )
    {
      v44 = 0;
      v6 = 1LL;
      v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v8 )
  {
    MiGetLeafVa(v46);
    LeafVa = MiGetLeafVa(v8);
    MiReplicatePteChange(v42 + (v41 & (LeafVa >> 9)), v43);
  }
  MiFlushTbList((int *)v53, v13, v11, v12);
  v27 = (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    v28 = v54;
    do
    {
      MiDereferenceIoPages(1LL, *v28, v28[1] - *v28);
      v28 += 2;
      --v27;
    }
    while ( v27 );
  }
}
