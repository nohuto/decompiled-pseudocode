/*
 * XREFs of PopFxReleasePowerIrp @ 0x14017EEC0
 * Callers:
 *     PopFreeIrp @ 0x140172020 (PopFreeIrp.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PopRequestPowerIrp @ 0x140172EB0 (PopRequestPowerIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  KIRQL v2; // bp
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  ULONG v6; // ebx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // si
  __int64 result; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 504);
  v4 = *(_QWORD *)(a1 + 528);
  v5 = *(_QWORD *)(a1 + 544);
  v6 = *(_DWORD *)(a1 + 520);
  _m_prefetchw((const void *)(a1 + 32));
  v7 = *(_DWORD *)(a1 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x20) != 0 )
  {
    v9 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v11 = *(_DWORD *)(a1 + 32);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v11, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 512);
      v4 = *(_QWORD *)(a1 + 536);
      v5 = *(_QWORD *)(a1 + 552);
      v6 = *(_DWORD *)(a1 + 524);
    }
  }
  else
  {
    v9 = 0;
    KeSetEvent((PRKEVENT)(a1 + 560), 0, 0);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 236), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 240), 0, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  if ( v9 )
    return PopRequestPowerIrp(v3, 2, v6, v4, v5, 1, 0LL);
  return result;
}
