/*
 * XREFs of MiConstructNewLargeFreePage @ 0x14009C2D0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14009BB30 (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePage @ 0x1402E8CF8 (MiRebuildLargePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiConstructNewLargeFreePage(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // r13
  __int64 CurrentIrql; // rsi
  unsigned int v9; // edi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  ULONG_PTR v13; // r8
  char v14; // al
  char v15; // al
  __int64 v16; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v19; // [rsp+78h] [rbp+10h] BYREF
  int v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h]

  v5 = a2;
  v6 = MiLargePageSizes[v5];
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v21 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v9 = 0;
  if ( v6 )
  {
    v10 = (volatile signed __int32 *)(v7 + 24);
    v11 = 0LL;
    do
    {
      v19 = 0;
      while ( _interlockedbittestandset64(v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)v10 < 0 );
      }
      v12 = MiLargePageSizes[v5];
      v13 = 48 * (v11 + BugCheckParameter2) - 0x58000000000LL;
      *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v13 + 40) &= ~0x200000000000000uLL;
      v14 = *(_BYTE *)(v13 + 34);
      *(_BYTE *)(v13 + 35) &= 0xF8u;
      *(_BYTE *)(v13 + 34) = v14 & 0xEF;
      *(_QWORD *)(v13 + 8) = 0LL;
      if ( ((v12 - 1) & (v11 + BugCheckParameter2)) != 0 )
      {
        v15 = *(_BYTE *)(v13 + 34);
        *(_QWORD *)(v13 + 40) ^= (MiLargePageContainingFrames[v5] ^ *(_QWORD *)(v13 + 40)) & 0xFFFFFFFFFLL;
        *(_BYTE *)(v13 + 34) = v15 ^ (v15 ^ a3) & 7;
      }
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      ++v9;
      v10 += 12;
      v11 = v9;
    }
    while ( v9 < v6 );
    LOBYTE(CurrentIrql) = v21;
  }
  v16 = MiLargePageContainingFrames[v5];
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  *(_QWORD *)(v7 + 40) ^= (v16 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v7 + 34) ^= (*(_BYTE *)(v7 + 34) ^ a3) & 7;
  MiInsertLargePageInNodeList(BugCheckParameter2, a3, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
