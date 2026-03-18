/*
 * XREFs of KeRundownQueueEx @ 0x1400FA99C
 * Callers:
 *     KeRundownQueue @ 0x1400F9B90 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x1400FA83C (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C3E20 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x140845554 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400C2F50 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x1400FAA80 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400FAC90 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBDF0 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v8; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe(a1);
  v5 = (_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 == a1 + 24 )
  {
    v6 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v8 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v8 != v5 )
      __fastfail(3u);
    *v8 = v6;
    *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v5 = v5;
  }
  KeRundownQueueCommon(a1, a1 + 48, a1 + 40, 1, a2);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( a2 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0, CurrentIrql);
  return v6;
}
