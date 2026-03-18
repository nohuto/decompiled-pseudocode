/*
 * XREFs of KeEnumerateProcessorDpcs @ 0x1402AA71C
 * Callers:
 *     DbgkpLkmdSnapGlobals @ 0x14028131C (DbgkpLkmdSnapGlobals.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateProcessorDpcs(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  KSPIN_LOCK *v6; // rbx
  __int64 v7; // rbp
  _QWORD *i; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = KiProcessorBlock[a1];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = (KSPIN_LOCK *)(v4 + 11792);
  v7 = 2LL;
  do
  {
    KxAcquireSpinLock(v6);
    for ( i = (_QWORD *)*(v6 - 2); i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(__int64, _QWORD *, __int64))(a3 + 10304))(a3 + 10240, i - 1, 64LL);
    KxReleaseSpinLock(v6);
    v6 += 5;
    --v7;
  }
  while ( v7 );
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
