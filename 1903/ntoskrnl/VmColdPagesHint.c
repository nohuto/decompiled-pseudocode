/*
 * XREFs of VmColdPagesHint @ 0x140329460
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUnlockVirtualMemory @ 0x1401C3970 (ZwUnlockVirtualMemory.c)
 *     VmpProcessContextLockShared @ 0x14032ADD8 (VmpProcessContextLockShared.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // r14
  unsigned __int8 v9; // si
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR NumberOfBytesToUnlock[7]; // [rsp+20h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+20h] BYREF

  v4 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[19];
  if ( !v4 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( *(_QWORD *)(v4 + 72) != a3 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v5 = 0LL;
  v6 = a1 >> 12;
  v7 = (a1 >> 12) + a2 - 1;
  v8 = (unsigned __int64 *)(v4 + 8);
  do
  {
    v9 = VmpProcessContextLockShared((PEX_SPIN_LOCK)v4);
    v10 = *v8;
    if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v10 )
      v10 ^= (unsigned __int64)v8;
    while ( 1 )
    {
      if ( !v10 )
        goto LABEL_19;
      if ( v6 <= *(_QWORD *)(v10 + 32) )
        break;
      v11 = *(_QWORD *)(v10 + 8);
LABEL_14:
      if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v11 )
        v10 ^= v11;
      else
        v10 = v11;
    }
    if ( v6 < *(_QWORD *)(v10 + 24) )
    {
      v11 = *(_QWORD *)v10;
      goto LABEL_14;
    }
    v13 = (_QWORD *)(v10 - 24);
    if ( v10 == 24 )
LABEL_19:
      NT_ASSERT("GpaMemoryRange != ((void *)0)");
    BaseAddress = *(PVOID *)(v13[2] + 24LL);
    BaseAddress = (char *)BaseAddress + v6 - v13[6];
    v14 = v13[7];
    if ( v14 >= v7 )
      v14 = v7;
    NumberOfBytesToUnlock[0] = v14 - v6 + 1;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
    BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
    v5 += NumberOfBytesToUnlock[0];
    v6 += NumberOfBytesToUnlock[0];
    NumberOfBytesToUnlock[0] <<= 12;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
  }
  while ( v5 < a2 );
  return 0LL;
}
