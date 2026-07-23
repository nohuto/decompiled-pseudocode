/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x140103D50
 * Callers:
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  __int64 v6; // r8
  __int16 v7; // r9
  __int64 CurrentIrql; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int8 v12; // r14
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h]

  v2 = a1;
  v3 = 48 * a2 - 0x58000000000LL;
  v5 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  v16 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v9 = v5 & 0xFFFFFFFFFLL;
  v10 = 512LL - (v7 & 0x1FF);
  do
  {
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15, v4, v6);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    *(_QWORD *)(v3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v11 = *(_QWORD *)(v3 + 24) & 0xC000000000000001uLL;
    *(_QWORD *)(v3 + 8) = v2;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 24) = v11 | 1;
    LOBYTE(v11) = *(_BYTE *)(v3 + 34) & 0xFE;
    *(_WORD *)(v3 + 32) = 1;
    *(_BYTE *)(v3 + 34) = v11 | 6;
    *(_QWORD *)(v3 + 40) = v9 | *(_QWORD *)(v3 + 40) & 0xFFFFFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v3 += 48LL;
    v2 += 8LL;
    --v10;
  }
  while ( v10 );
  v12 = v16;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v16 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v12;
  __writecr8(v12);
  return result;
}
