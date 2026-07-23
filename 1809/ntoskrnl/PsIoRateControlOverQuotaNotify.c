/*
 * XREFs of PsIoRateControlOverQuotaNotify @ 0x140001AB8
 * Callers:
 *     IoNotifyQuotaState @ 0x1400019F0 (IoNotifyQuotaState.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PsIoRateControlOverQuotaNotify(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v8; // rbx
  __int64 UnbiasedInterruptTime; // rsi
  KIRQL v10; // di
  __int64 v11; // rcx
  __int64 result; // rax

  v8 = a1;
  if ( a5 )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  }
  else
  {
    UnbiasedInterruptTime = 0LL;
  }
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 1440));
  if ( a4 != *(_DWORD *)(v8 + 1484) )
  {
    *(_QWORD *)(v8 + 1464) *= 2LL;
    ++*(_DWORD *)(v8 + 1472);
  }
  v11 = *(_QWORD *)(v8 + 1464);
  *(_DWORD *)(v8 + 1480) = a3;
  *(_QWORD *)(v8 + 1464) = v11 | (a2 != 0);
  if ( a5 )
    *(_QWORD *)(v8 + 1488) = UnbiasedInterruptTime;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 1440));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  result = v10;
  __writecr8(v10);
  return result;
}
