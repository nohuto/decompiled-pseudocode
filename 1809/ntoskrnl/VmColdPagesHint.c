/*
 * XREFs of VmColdPagesHint @ 0x14030B960
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUnlockVirtualMemory @ 0x1401BBB70 (ZwUnlockVirtualMemory.c)
 *     VmpProcessContextLockShared @ 0x14030D3F4 (VmpProcessContextLockShared.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // r14
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int8 v11; // si
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR NumberOfBytesToUnlock[7]; // [rsp+20h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+20h] BYREF

  v4 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15];
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
    v10 = *(_QWORD *)(v4 + 16);
    v11 = v9;
    v12 = *v8;
    if ( (v10 & 1) != 0 && v12 )
      v12 ^= (unsigned __int64)v8;
    v13 = v10 & 1;
    while ( 1 )
    {
      if ( !v12 )
        goto LABEL_29;
      if ( v6 <= *(_QWORD *)(v12 + 32) )
        break;
      v14 = *(_QWORD *)(v12 + 8);
LABEL_15:
      if ( v13 && v14 )
        v12 ^= v14;
      else
        v12 = v14;
    }
    if ( v6 < *(_QWORD *)(v12 + 24) )
    {
      v14 = *(_QWORD *)v12;
      goto LABEL_15;
    }
    v15 = (_QWORD *)(v12 - 24);
    if ( v12 == 24 )
LABEL_29:
      NT_ASSERT("GpaMemoryRange != ((void *)0)");
    BaseAddress = *(PVOID *)(v15[2] + 24LL);
    BaseAddress = (char *)BaseAddress + v6 - v15[6];
    v16 = v15[7];
    if ( v16 >= v7 )
      v16 = v7;
    NumberOfBytesToUnlock[0] = v16 - v6 + 1;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v11);
    BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
    v5 += NumberOfBytesToUnlock[0];
    v6 += NumberOfBytesToUnlock[0];
    NumberOfBytesToUnlock[0] <<= 12;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
  }
  while ( v5 < a2 );
  return 0LL;
}
