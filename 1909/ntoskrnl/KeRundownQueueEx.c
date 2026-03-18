/*
 * XREFs of KeRundownQueueEx @ 0x1400E34CC
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400E3358 (IopDeleteIoCompletionInternal.c)
 *     KeRundownQueue @ 0x14013CE40 (KeRundownQueue.c)
 *     EtwpDeleteRegistrationObject @ 0x1405D4330 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x140880220 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeRundownQueueCommon @ 0x1400E35B0 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400E39A4 (KiAcquireReleaseObjectRundownLockExclusive.c)
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
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
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
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  return v6;
}
