/*
 * XREFs of MiExpandSpecialPool @ 0x1402AC64C
 * Callers:
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     InsertTailListPte @ 0x140079CF0 (InsertTailListPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 *     MiObtainSessionVa @ 0x1400F7324 (MiObtainSessionVa.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiExpandSpecialPool(char a1)
{
  int v1; // r15d
  int v2; // ebp
  KSPIN_LOCK *v3; // r14
  int v4; // edi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  v2 = a1 & 1;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = 1;
    v3 = (KSPIN_LOCK *)qword_14043C988;
    if ( *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8128) >= (unsigned int)dword_140439BD4 )
      return 0LL;
    v1 = 0;
    v5 = MiObtainSessionVa(1u);
  }
  else
  {
    v3 = &qword_14043BFC0;
    v4 = v2 != 0 ? 7 : 13;
    v5 = MiObtainSystemVa(1LL, v4);
  }
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables() )
  {
    MiReturnSystemVa(v6, v6 + 0x200000, v4);
    return 0LL;
  }
  if ( v1 )
    _InterlockedAdd(&dword_140439BD0, 1u);
  v20 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
  MiUpdatePageFileHighInPte(*(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16), 1LL);
  if ( MiPteInShadowRange(v10 + 16) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_16:
        if ( (v11 & 1) != 0 )
          v11 |= 0x8000000000000000uLL;
      }
    }
    else if ( (v14 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0])) != 0 )
    {
      goto LABEL_16;
    }
  }
  *(_QWORD *)(v12 + 16) = v11;
  if ( v13 )
    MiWritePteShadow(v12 + 16, v11);
  KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
  v15 = 255LL;
  do
  {
    InsertTailListPte((struct _KTHREAD **)((char *)v3 + (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32));
    v7 += 16LL;
    --v15;
  }
  while ( v15 );
  if ( v3 != &qword_14043BFC0 )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    ++*(_DWORD *)(v16 + 8128);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v7;
}
