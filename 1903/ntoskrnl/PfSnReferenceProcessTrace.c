/*
 * XREFs of PfSnReferenceProcessTrace @ 0x140094AA0
 * Callers:
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     PfSnLogPageFault @ 0x140095FF4 (PfSnLogPageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     PfSnLogHelper @ 0x14065788C (PfSnLogHelper.c)
 *     PfSnAsyncContextInitialize @ 0x140669E38 (PfSnAsyncContextInitialize.c)
 *     PfSnEndProcessTrace @ 0x1406E6D0C (PfSnEndProcessTrace.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x140096AD0 (ExAcquireRundownProtectionEx.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // r8
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned int v5; // r8d
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  BOOLEAN v9; // bp
  KIRQL v10; // si
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 Count; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v15; // rdx

  _m_prefetchw((const void *)(a1 + 1192));
  v2 = *(_QWORD *)(a1 + 1192);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v2 - 1, v2);
      if ( v2 == v8 )
        break;
      v2 = v8;
    }
    while ( (v8 & 0xF) != 0 );
  }
  v3 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    return v3;
  v5 = v2 & 0xF;
  if ( v5 > 1 )
    return v3;
  if ( v5 )
  {
    if ( ExAcquireRundownProtectionEx(v3 + 45, 0xFu) )
    {
      _m_prefetchw((const void *)(a1 + 1192));
      v6 = *(_QWORD *)(a1 + 1192);
      while ( (v6 & 0xF) == 0 )
      {
        if ( v3 != (struct _EX_RUNDOWN_REF *)(v6 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v6 + 15, v6);
        if ( v7 == v6 )
          return v3;
      }
      _m_prefetchw(&v3[45]);
      Count = v3[45].Count;
      if ( (Count & 1) != 0 )
      {
LABEL_28:
        v15 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v15 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&v3[45], Count - 30, Count);
          v13 = Count == v14;
          Count = v14;
          if ( v13 )
            break;
          if ( (v14 & 1) != 0 )
            goto LABEL_28;
        }
      }
    }
  }
  else
  {
    v9 = 1;
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_140467CD0);
    v3 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v3 )
      v9 = ExAcquireRundownProtection_0(v3 + 45);
    KxReleaseSpinLock(&qword_140467CD0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v10);
    if ( !v9 )
      return 0LL;
  }
  return v3;
}
