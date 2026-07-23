/*
 * XREFs of MiCapturePfnVm @ 0x140083638
 * Callers:
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     MiIsStoreProcess @ 0x1400837DC (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     MiAttachToOwningSession @ 0x14011A53C (MiAttachToOwningSession.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char *__fastcall MiCapturePfnVm(__int64 a1, ULONG_PTR a2, unsigned int a3, _QWORD *a4, unsigned __int64 *a5, int *a6)
{
  char *v7; // rsi
  unsigned __int8 v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 TopLevelPfn; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  int IsStoreProcess; // eax
  __int16 v20; // r9
  char *v21; // rdx
  char *AnyMultiplexedVm; // rbx
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v7 = 0LL;
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 24;
  v11 = MiLockPageInline(a2);
  v12 = MiCombineCandidate(a1, a3, a2);
  v13 = v12;
  if ( v12 )
  {
    v14 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    *a5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a6 = v14;
    if ( v12 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2);
      v16 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      IsStoreProcess = MiIsStoreProcess(v16, v17, v18, *(unsigned int *)(v16 + 0x824));
      v21 = 0LL;
      AnyMultiplexedVm = 0LL;
      if ( !IsStoreProcess )
        v21 = (char *)(v16 + 1280);
      if ( (v20 & 0x1000) == 0 )
        AnyMultiplexedVm = v21;
      if ( ObReferenceObjectSafeWithTag(v16) )
        *a4 = v16;
      else
        AnyMultiplexedVm = 0LL;
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( v12 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    }
    else
    {
      LOBYTE(v13) = 17;
      v24 = MiAttachToOwningSession(a2, v13, 0LL);
      if ( v24 )
      {
        AnyMultiplexedVm = (char *)(*(_QWORD *)(v24 + 1024) + 3008LL);
        *a4 = v24;
      }
      else
      {
        AnyMultiplexedVm = 0LL;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v7 = AnyMultiplexedVm;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  __writecr8(v11);
  return v7;
}
