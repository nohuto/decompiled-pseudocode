/*
 * XREFs of MiConstructNewLargeFreePage @ 0x1400910F0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140090750 (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiConstructNewLargeFreePage(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rcx
  char v13; // al
  char v14; // al
  __int64 v15; // rbx
  unsigned __int8 v16; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  __int64 v20; // [rsp+60h] [rbp+8h]
  int v21; // [rsp+68h] [rbp+10h] BYREF

  v3 = a3;
  v5 = (unsigned int)a2;
  v6 = MiLargePageSizes[v5];
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = 0;
  v20 = v7;
  if ( v6 )
  {
    v9 = (volatile signed __int32 *)(v7 + 24);
    v10 = 0LL;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v21 = 0;
      while ( _interlockedbittestandset64(v9, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21, a2, a3);
        while ( *(__int64 *)v9 < 0 );
      }
      a2 = MiLargePageSizes[v5];
      a3 = v10 + a1;
      v12 = 48 * (v10 + a1) - 0x58000000000LL;
      *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v12 + 40) &= ~0x200000000000000uLL;
      v13 = *(_BYTE *)(v12 + 34);
      *(_BYTE *)(v12 + 35) &= 0xF8u;
      *(_BYTE *)(v12 + 34) = v13 & 0xEF;
      *(_QWORD *)(v12 + 8) = 0LL;
      if ( ((a2 - 1) & (v10 + a1)) != 0 )
      {
        v14 = *(_BYTE *)(v12 + 34);
        a2 = (MiLargePageContainingFrames[v5] ^ *(_QWORD *)(v12 + 40)) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v12 + 40) ^= a2;
        *(_BYTE *)(v12 + 34) ^= (v3 ^ v14) & 7;
      }
      _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      ++v8;
      v9 += 12;
      v10 = v8;
    }
    while ( v8 < v6 );
    v7 = v20;
  }
  v15 = MiLargePageContainingFrames[v5];
  v16 = MiLockPageInline(v7);
  *(_QWORD *)(v7 + 40) ^= (v15 ^ *(_QWORD *)(v7 + 40)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v7 + 34) ^= (*(_BYTE *)(v7 + 34) ^ v3) & 7;
  MiInsertLargePageInNodeListHelper(a1);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19);
  }
  result = v16;
  __writecr8(v16);
  return result;
}
