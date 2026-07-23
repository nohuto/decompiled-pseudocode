/*
 * XREFs of MiGetDanglingExtent @ 0x1402B614C
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // r14
  volatile signed __int32 *v15; // rbx
  unsigned __int128 v16; // rax
  __int64 v17; // rdi
  struct _KPRCB *v18; // rcx
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  memset(&v19, 0, sizeof(v19));
  v2 = 0LL;
  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14043E9E0, &v19);
  do
  {
    v4 = qword_140439DE8;
    v5 = v3;
    v6 = v2;
    if ( !qword_140439DE8 )
      break;
    v7 = *(_QWORD *)qword_140439DE8;
    ++v2;
    qword_140439DE8 = *(_QWORD *)qword_140439DE8;
    v3 = v4;
    if ( v6 )
      v3 = v5;
  }
  while ( v7 == v4 - 48 );
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v19);
  OldIrql = v19.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( !v2 )
    return -1LL;
  v12 = v3 - 48 * v2;
  v13 = v12 + 48;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v13 <= v3 )
  {
    v15 = (volatile signed __int32 *)(v12 + 72);
    v16 = (v3 - v13) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v17 = (*((_QWORD *)&v16 + 1) >> 5) + 1LL;
    do
    {
      v20 = 0;
      while ( _interlockedbittestandset64(v15, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20, *((__int64 *)&v16 + 1), v8);
        while ( *(__int64 *)v15 < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)v15, 0x7FFFFFFFFFFFFFFFuLL);
      v15 += 12;
      --v17;
    }
    while ( v17 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v18);
  }
  __writecr8(CurrentIrql);
  *a1 = v2;
  return (__int64)(v12 + 0x58000000030LL) / 48;
}
