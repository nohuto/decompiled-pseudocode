/*
 * XREFs of MiFreeSlabEntry @ 0x1402C2518
 * Callers:
 *     MiFreeSlabEntries @ 0x1402C23C8 (MiFreeSlabEntries.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402C2F2C (MiUpdateSlabPagePlaceholderState.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSlabEntry(__int64 a1, ULONG_PTR *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v8; // rbx
  unsigned __int128 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // r10
  char v15; // r9
  volatile signed __int32 *v16; // r8
  int v17; // eax
  int v18; // r10d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // [rsp+58h] [rbp+10h] BYREF

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
    v9 = (v6 - v5) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v10 = (*((_QWORD *)&v9 + 1) >> 5) + 1LL;
    do
    {
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21, *((__int64 *)&v9 + 1), v5);
        while ( *(__int64 *)v8 < 0 );
      }
      v11 = *(_QWORD *)(v8 + 16);
      if ( !v4 )
        v4 = *(_QWORD *)(qword_14043B808 + 8 * ((v11 >> 40) & 0x3FF));
      *(_WORD *)(v8 + 8) = 1;
      *((_QWORD *)&v9 + 1) = v11 & 0xFE3FFFFFFFFFFFFFuLL;
      *(_QWORD *)&v9 = *(_QWORD *)v8 & 0xC000000000000001uLL;
      *(_QWORD *)(v8 + 16) = *((_QWORD *)&v9 + 1);
      *(_QWORD *)v8 = v9 | 1;
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 48LL;
      --v10;
    }
    while ( v10 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  MiUpdateSlabPagePlaceholderState(a1, a2[3], 512LL, 0LL);
  LOBYTE(v13) = 1;
  v14 = a2[3] >> 9;
  v15 = v14 & 0x1F;
  v16 = (volatile signed __int32 *)(qword_14043F2D8 + 4 * (a2[3] >> 14));
  if ( (v14 & 0x1F) + 1 <= 0x20 )
  {
    v17 = 1 << v15;
LABEL_26:
    _InterlockedAnd(v16, ~v17);
    goto LABEL_27;
  }
  if ( (v14 & 0x1F) == 0 )
    goto LABEL_25;
  v18 = v14 & 0x1F;
  _InterlockedAnd(v16++, ~(((1 << (32 - v18)) - 1) << v15));
  v13 = 1LL - (unsigned int)(32 - v18);
  if ( v13 >= 0x20 )
  {
    v19 = v13 >> 5;
    v13 += -32LL * (v13 >> 5);
    do
    {
      *v16++ = 0;
      --v19;
    }
    while ( v19 );
  }
  if ( v13 )
  {
LABEL_25:
    v17 = (1 << v13) - 1;
    goto LABEL_26;
  }
LABEL_27:
  v20 = MiFreeLargePageMemory(a2[3], 1u, 0);
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    MiReturnResidentAvailable(v20);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7360), v20);
  MiReturnCommit(v4, v20);
  ExFreePoolWithTag(a2, 0);
}
