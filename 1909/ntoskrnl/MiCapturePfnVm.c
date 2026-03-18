/*
 * XREFs of MiCapturePfnVm @ 0x14013F330
 * Callers:
 *     MiProcessCrcList @ 0x1406F56E0 (MiProcessCrcList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetTopLevelPfn @ 0x1400C2850 (MiGetTopLevelPfn.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiAttachToOwningSession @ 0x14012D08C (MiAttachToOwningSession.c)
 *     MiGetCombineDomain @ 0x14013EC80 (MiGetCombineDomain.c)
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 */

char *__fastcall MiCapturePfnVm(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        int *a7,
        __int64 *a8)
{
  unsigned __int64 *v9; // rdi
  int *v10; // rsi
  unsigned int v12; // edx
  __int64 v13; // r14
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  int v16; // r15d
  unsigned __int8 CurrentIrql; // r13
  int v18; // ebp
  int v19; // ecx
  __int64 TopLevelPfn; // r14
  unsigned __int64 v21; // rdi
  char *AnyMultiplexedVm; // rsi
  __int64 v23; // rax
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 CombineDomain; // rax
  _QWORD *v28; // rax
  struct _KPRCB *v29; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v9 = a6;
  v10 = a7;
  v12 = *((_DWORD *)a1 + 14);
  v13 = *a1;
  *a5 = 0LL;
  v14 = (_QWORD *)a1[5];
  v15 = 0;
  *v9 = 0LL;
  *v10 = 24;
  if ( v12 )
  {
    while ( a4 != *v14 )
    {
      ++v15;
      ++v14;
      if ( v15 >= v12 )
        goto LABEL_4;
    }
    v16 = 1;
    *a8 = qword_140465DD0;
  }
  else
  {
LABEL_4:
    v16 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LODWORD(a6) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v18 = MiCombineCandidate(v13, a3, a2);
  if ( v18 )
  {
    v19 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    *v9 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *v10 = v19;
    if ( v18 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2);
      v21 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      AnyMultiplexedVm = (char *)(v21 + 1280);
      v23 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v21 + 0x5AE));
      if ( *(_DWORD *)(v23 + 1144) && *(_QWORD *)(v23 + 1264) == v21 )
        AnyMultiplexedVm = 0LL;
      if ( (*(_DWORD *)(((*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) + 0x854) & 0x1000) != 0
        && !v16 )
      {
        AnyMultiplexedVm = 0LL;
      }
      _m_prefetchw((const void *)(v21 - 48));
      v24 = *(_QWORD *)(v21 - 48);
      if ( v24 )
      {
        while ( 1 )
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 - 48), v24 + 1, v24);
          if ( v25 == v24 )
            break;
          if ( !v24 )
            goto LABEL_35;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v21 - 48);
        *a5 = v21;
      }
      else
      {
LABEL_35:
        AnyMultiplexedVm = 0LL;
      }
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_20;
    }
    if ( !v16 )
      goto LABEL_29;
    if ( v18 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      goto LABEL_20;
    }
    v28 = MiAttachToOwningSession(a2, 0x11u);
    if ( v28 )
    {
      AnyMultiplexedVm = (char *)(v28[128] + 256LL);
      *a5 = (unsigned __int64)v28;
    }
    else
    {
LABEL_29:
      AnyMultiplexedVm = 0LL;
    }
LABEL_20:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( AnyMultiplexedVm )
    {
      if ( !v16 )
      {
        CombineDomain = MiGetCombineDomain(v18, (__int64)AnyMultiplexedVm);
        *a8 = CombineDomain;
      }
    }
    return AnyMultiplexedVm;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v29 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v29);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
