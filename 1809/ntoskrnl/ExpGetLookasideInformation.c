/*
 * XREFs of ExpGetLookasideInformation @ 0x1403192B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLookasideInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v4; // ebp
  int v5; // r15d
  _DWORD *v6; // r12
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  KSPIN_LOCK *v10; // r14
  KIRQL v11; // al
  __int64 *v12; // rdx
  KIRQL v13; // si
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v15; // al
  __int64 *v16; // rdx
  _DWORD *v17; // rbx
  struct _KPRCB *v18; // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2 >> 5;
  v5 = 0;
  v6 = a3;
  if ( (unsigned int)a2 >> 5 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    v5 = ExLockUserBuffer(a1, a2, a3, 1LL, &v20, &MemoryDescriptorList);
    if ( v5 >= 0 )
    {
      v7 = (__int64 *)ExPoolLookasideListHead;
      v8 = v20;
      v5 = 0;
      while ( v7 != &ExPoolLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v7 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v7 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v7 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v7 - 11) - *((_DWORD *)v7 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v7 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v7 - 9) - *((_DWORD *)v7 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v7 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v7 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v7 - 5);
        if ( v3 == v4 )
          goto LABEL_30;
        v7 = (__int64 *)*v7;
        v8 += 32LL;
        v20 = v8;
      }
      v9 = (__int64 *)ExSystemLookasideListHead;
      while ( v9 != &ExSystemLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v9 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v9 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v9 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v9 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v9 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v9 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v9 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v9 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v9 - 5);
        if ( v3 == v4 )
          goto LABEL_30;
        v9 = (__int64 *)*v9;
        v8 += 32LL;
        v20 = v8;
      }
      v10 = &ExNPagedLookasideLock;
      v11 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
      v12 = (__int64 *)ExNPagedLookasideListHead;
      v13 = v11;
      while ( v12 != &ExNPagedLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v12 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v12 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v12 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v12 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v12 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v12 - 8);
        *(_DWORD *)(v8 + 20) = 0;
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v12 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v12 - 5);
        if ( v3 == v4 )
          goto LABEL_24;
        v12 = (__int64 *)*v12;
        v8 += 32LL;
        v20 = v8;
      }
      KxReleaseSpinLock(&ExNPagedLookasideLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        v8 = v20;
      }
      __writecr8(v13);
      v10 = &ExPagedLookasideLock;
      v15 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
      v16 = (__int64 *)ExPagedLookasideListHead;
      v13 = v15;
      if ( (__int64 *)ExPagedLookasideListHead != &ExPagedLookasideListHead )
      {
        v17 = (_DWORD *)(v8 + 4);
        do
        {
          ++v3;
          *((_WORD *)v17 - 2) = *((_WORD *)v16 - 32);
          *((_WORD *)v17 - 1) = *((_WORD *)v16 - 24);
          *v17 = *((_DWORD *)v16 - 11);
          v17[1] = *((_DWORD *)v16 - 10);
          v17[2] = *((_DWORD *)v16 - 9);
          v17[3] = *((_DWORD *)v16 - 8);
          v17[4] = 1;
          v17[5] = *((_DWORD *)v16 - 6);
          v17[6] = *((_DWORD *)v16 - 5);
          if ( v3 == v4 )
            break;
          v16 = (__int64 *)*v16;
          v17 += 8;
        }
        while ( v16 != &ExPagedLookasideListHead );
      }
LABEL_24:
      KxReleaseSpinLock(v10);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        v18 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
      __writecr8(v13);
LABEL_30:
      MmUnlockPages(MemoryDescriptorList);
      ExFreePoolWithTag(MemoryDescriptorList, 0);
    }
  }
  result = (unsigned int)v5;
  *v6 = 32 * v3;
  return result;
}
