/*
 * XREFs of MiInitializeLargeLeafPfn @ 0x1402DFBF4
 * Callers:
 *     MiInitializeLargeLeafPfns @ 0x1402DFDF0 (MiInitializeLargeLeafPfns.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeLargeLeafPfn(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // r8
  unsigned __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 i; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 8) & 3;
  v5 = MiLargePageSizes[v2];
  v6 = (*(_QWORD *)(a1 + 8) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) - 8 + 8 * v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  for ( i = a1 + 48 * v5 - 48; i >= a1; i -= 48LL )
  {
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(i + 24) < 0 );
    }
    *(_BYTE *)(i + 35) &= 0xF8u;
    *(_QWORD *)(i + 40) &= ~0x200000000000000uLL;
    v9 = *(_QWORD *)(i + 24) & 0xC000000000000001uLL;
    *(_WORD *)(i + 32) = 2;
    *(_QWORD *)(i + 24) = v9 | 1;
    *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 6;
    *(_QWORD *)(i + 16) = ZeroPte;
    if ( i != a1 )
    {
      *(_QWORD *)i = 0LL;
      *(_QWORD *)i = (a2 >> 3) & 0xFFFFFFFFFFELL;
    }
    v10 = *(_QWORD *)(i + 40);
    *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
    *(_QWORD *)(i + 8) = v6;
    *(_QWORD *)(i + 40) = MiLargePageContainingFrames[v2] & 0xFFFFFFFFFLL | v10 & 0xFE7FFFF000000000uLL | 0x40000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 -= 8LL;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
