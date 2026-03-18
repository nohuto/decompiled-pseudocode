/*
 * XREFs of MiPreparePhysicalPagesMdlForFree @ 0x1402D6F50
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPreparePhysicalPagesMdlForFree(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // r8
  _QWORD *v4; // r10
  unsigned __int64 v5; // r9
  unsigned int v6; // eax
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx
  __int64 result; // rax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 44) = 0;
  v2 = (_QWORD *)(a1 + 48);
  if ( a2 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
    v4 = &v2[a2 * v3];
    do
    {
      --v3;
      v5 = 1LL;
      v4 -= a2;
      *v4 = v2[v3];
      while ( v5 < a2 )
      {
        v4[v5] = v4[v5 - 1] + 1LL;
        ++v5;
      }
    }
    while ( v3 );
    v6 = a2 * *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v6;
  }
  v7 = 0LL;
  v8 = (unsigned __int64)v6 >> 12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  for ( ; v8; --v8 )
  {
    v10 = 48LL * *v2 - 0x58000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(v10 + 24) & 0x8000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    ++v2;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
