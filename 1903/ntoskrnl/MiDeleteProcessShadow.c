/*
 * XREFs of MiDeleteProcessShadow @ 0x1400AD220
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400AD0A0 (MiDeleteFinalPageTables.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405E732C (PspDisablePrimaryTokenExchange.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MiDeleteTopLevelPage @ 0x1400AD4DC (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x1400AD650 (KeFlushProcessTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeMakeUserDirectoryTableBase @ 0x1400E31E0 (KeMakeUserDirectoryTableBase.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2)
{
  __int64 v3; // r12
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  signed __int64 v11; // r9
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (MiFlags & 0xC00000) != 0 && *(_QWORD *)(a1 + 1544) )
  {
    v3 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 1454));
    if ( a2 )
    {
      SharedVm = MiGetSharedVm(a1 + 1280);
      v5 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v8 = v5;
      if ( *(_QWORD *)(a1 + 1544) )
      {
        v9 = 0xFFFFF6FB7DBED000uLL;
        v10 = 256LL;
        while ( 1 )
        {
          v11 = *(_QWORD *)v9;
          if ( v9 < 0xFFFFF6FB7DBED000uLL
            || v9 > 0xFFFFF6FB7DBED7F8uLL
            || (MiFlags & 0xC00000) == 0
            || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
          {
            goto LABEL_10;
          }
          if ( (v11 & 1) != 0 )
            break;
LABEL_11:
          v9 += 8LL;
          if ( !--v10 )
            goto LABEL_12;
        }
        if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v21 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v9 >> 3) & 0x1FF));
            v22 = v11 | 0x20;
            if ( (v21 & 0x20) == 0 )
              v22 = *(_QWORD *)v9;
            v11 = v22;
            if ( (v21 & 0x42) != 0 )
              v11 = v22 | 0x42;
          }
        }
LABEL_10:
        if ( (v11 & 1) != 0 )
        {
          do
          {
            if ( v11 >= 0 )
              break;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v11 & 0x7FFFFFFFFFFFFFFFLL, v11);
            v18 = v11 == v19;
            v11 = v19;
            if ( v18 )
              break;
          }
          while ( (v19 & 1) != 0 );
        }
        goto LABEL_11;
      }
      MiUnlockWorkingSetExclusive(a1 + 1280, v5, v6, v7);
    }
    else
    {
      v8 = 17;
LABEL_12:
      LockHandle.LockQueue.Lock = &SpinLock;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
      v12 = ((*(_QWORD *)(a1 + 1544) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v24 = MI_READ_PTE_LOCK_FREE(v12);
      v13 = MI_READ_PTE_LOCK_FREE(&v24);
      *(_QWORD *)(a1 + 1544) = 0LL;
      v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_QWORD *)(a1 + 640) = KeMakeUserDirectoryTableBase(0LL);
      if ( v8 != 17 )
        MiUnlockWorkingSetExclusive(a1 + 1280, v8, v15, v16);
      MiReleasePtes((__int64)&qword_1404669C0, v12, 1u);
      KeFlushProcessTb(v14 << 12);
      if ( (unsigned int)MiDeleteTopLevelPage(v17, v14) != 3 )
        MiReleaseNonPagedResources(v3, 1LL);
    }
  }
}
