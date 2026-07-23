/*
 * XREFs of PopFxReleasePowerIrp @ 0x1401716E8
 * Callers:
 *     PopFreeIrp @ 0x140171080 (PopFreeIrp.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  KIRQL v2; // bp
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // ebx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // si
  int v10; // edx
  __int64 result; // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 496);
  v4 = *(_QWORD *)(a1 + 520);
  v5 = *(_QWORD *)(a1 + 536);
  v6 = *(_DWORD *)(a1 + 512);
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
    v12 = *(_DWORD *)(a1 + 32);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v12, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 504);
      v4 = *(_QWORD *)(a1 + 528);
      v5 = *(_QWORD *)(a1 + 544);
      v6 = *(_DWORD *)(a1 + 516);
    }
  }
  else
  {
    v9 = 0;
    KeSetEvent((PRKEVENT)(a1 + 552), 0, 0);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 228), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 232), 0, 0);
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
  {
    LOBYTE(v10) = 2;
    return PopRequestPowerIrp(v3, v10, v6, v4, v5, 1, 0LL);
  }
  return result;
}
