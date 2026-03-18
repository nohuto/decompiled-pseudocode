/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x1400FB520
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140022DC0 (MiLinkPoolCommitChain.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int16 v5; // r9
  __int64 CurrentIrql; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // r14
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  v2 = a1;
  v3 = 48 * a2 - 0x58000000000LL;
  v4 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = v4 & 0xFFFFFFFFFLL;
  v8 = 512LL - (v5 & 0x1FF);
  do
  {
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    *(_QWORD *)(v3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v9 = *(_QWORD *)(v3 + 24) & 0xC000000000000001uLL;
    *(_QWORD *)(v3 + 8) = v2;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 24) = v9 | 1;
    LOBYTE(v9) = *(_BYTE *)(v3 + 34) & 0xFE;
    *(_WORD *)(v3 + 32) = 1;
    *(_BYTE *)(v3 + 34) = v9 | 6;
    *(_QWORD *)(v3 + 40) = v7 | *(_QWORD *)(v3 + 40) & 0xFFFFFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v3 += 48LL;
    v2 += 8LL;
    --v8;
  }
  while ( v8 );
  v10 = v14;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v14 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v10;
  __writecr8(v10);
  return result;
}
