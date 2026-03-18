/*
 * XREFs of MiFreeSlabEntry @ 0x1402DBD58
 * Callers:
 *     MiFreeSlabEntries @ 0x1402DBBD0 (MiFreeSlabEntries.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x140146738 (MiFreeLargePageMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402DCFA8 (MiUpdateSlabPagePlaceholderState.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSlabEntry(__int64 a1, ULONG_PTR *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // r10
  char v14; // r9
  volatile signed __int32 *v15; // r8
  unsigned int v16; // eax
  int v17; // r10d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 48 * a2[3] - 0x58000000000LL;
  v6 = 48 * a2[4] - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v5 <= v6 )
  {
    v8 = v5 + 24;
    v9 = (v6 - v5) / 0x30 + 1;
    do
    {
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)v8 < 0 );
      }
      if ( !v4 )
        v4 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v8 + 16) >> 40) & 0x3FFLL));
      if ( !*(_DWORD *)(a1 + 48) )
        *(_QWORD *)(v8 + 16) &= 0xFE3FFFFFFFFFFFFFuLL;
      v10 = *(_QWORD *)v8 & 0xC000000000000001uLL;
      *(_WORD *)(v8 + 8) = 1;
      *(_QWORD *)v8 = v10 | 1;
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 48LL;
      --v9;
    }
    while ( v9 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  MiUpdateSlabPagePlaceholderState(a1, a2[3], 512LL, 0LL);
  LOBYTE(v12) = 1;
  v13 = a2[3] >> 9;
  v14 = v13 & 0x1F;
  v15 = (volatile signed __int32 *)(qword_14046A040 + 4 * (a2[3] >> 14));
  if ( (v13 & 0x1F) + 1 <= 0x20 )
  {
    v16 = ~(1 << v14);
LABEL_28:
    _InterlockedAnd(v15, v16);
    goto LABEL_29;
  }
  if ( (v13 & 0x1F) == 0 )
    goto LABEL_27;
  v17 = v13 & 0x1F;
  _InterlockedAnd(v15++, ~(((1 << (32 - v17)) - 1) << v14));
  v12 = 1LL - (unsigned int)(32 - v17);
  if ( v12 >= 0x20 )
  {
    v18 = v12 >> 5;
    v12 += -32LL * (v12 >> 5);
    do
    {
      *v15++ = 0;
      --v18;
    }
    while ( v18 );
  }
  if ( v12 )
  {
LABEL_27:
    v16 = -1 << v12;
    goto LABEL_28;
  }
LABEL_29:
  v19 = MiFreeLargePageMemory(a2[3], 1u, 0);
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    MiReturnResidentAvailable(v19);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 8128), v19);
  MiReturnCommit(v4, v19);
  ExFreePoolWithTag(a2, 0);
}
