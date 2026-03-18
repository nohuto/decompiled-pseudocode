/*
 * XREFs of MiInsertHugeRangeInList @ 0x1402C250C
 * Callers:
 *     MiAddPartitionHugeRange @ 0x1402C180C (MiAddPartitionHugeRange.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x14089BFA4 (MiFreePartitionPageRun.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertHugeRangeInList(int a1, char a2, _QWORD *a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // r15d
  __int64 v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+8h]

  v3 = qword_140465EB0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1 & 0x3FFFF;
  v6 = *(_QWORD *)(qword_140465EB0 + 8 * v4);
  if ( a3 )
    v7 = a3;
  else
    v7 = *(_QWORD **)(qword_140465E88 + 8 * ((v6 >> 40) & 0x7FF));
  v8 = (v6 >> 51) & 0x3F;
  v9 = v7[889] + 8LL * (unsigned int)(2 * v8 * dword_140465840[0]);
  v10 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v11 = 1824LL;
  }
  else
  {
    v9 += 8LL * (unsigned int)dword_140465840[0];
    v11 = 1832LL;
  }
  v22 = v4 % (unsigned int)dword_140465840[0];
  KeAcquireInStackQueuedSpinLock(v7 + 508, &LockHandle);
  v12 = *(_QWORD *)(v3 + 8 * v4);
  if ( a3 )
  {
    v12 ^= (v12 ^ ((unsigned __int64)*(unsigned __int16 *)v7 << 40)) & 0x7FF0000000000LL;
    ++v7[52];
  }
  if ( v10 )
    v13 = v12 & 0xFFFFFFFFFFF3FFFFuLL | 0x40000;
  else
    v13 = v12 & 0xFFFFFFFFFFF3FFFFuLL | 0x80000;
  v14 = v13 & 0xFFFFFFC0000C0000uLL;
  v15 = v4 << 20;
  v16 = *(_QWORD *)(v9 + 8 * v22);
  v17 = v16 & 0x3FFFF;
  if ( (v16 & 0x3FFFF) != 0 )
  {
    *(_QWORD *)(v3 + 8 * v4) = v14 | v17;
    *(_QWORD *)(qword_140465EB0 + 8 * v17) = v15 | *(_QWORD *)(qword_140465EB0 + 8 * v17) & 0xFFFFFFC0000FFFFFuLL;
  }
  else
  {
    *(_QWORD *)(v3 + 8 * v4) = v14;
    v16 = v15 | v16 & 0xFFFFFFC0000FFFFFuLL;
  }
  *(_QWORD *)(v9 + 8 * v22) = v4 | v16 & 0xFFFFFFFFFFFC0000uLL;
  ++*(_QWORD *)(v7[2] + 1984LL * (unsigned int)v8 + v11);
  ++v7[890];
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
