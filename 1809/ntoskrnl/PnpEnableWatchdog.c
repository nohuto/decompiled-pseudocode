/*
 * XREFs of PnpEnableWatchdog @ 0x140005C04
 * Callers:
 *     PnpEnablePnpEventWorkerWatchdog @ 0x140005BDC (PnpEnablePnpEventWorkerWatchdog.c)
 *     PnpEnableDeviceCompletionQueueWatchdog @ 0x14015A460 (PnpEnableDeviceCompletionQueueWatchdog.c)
 *     PnpEnableDelayedRemoveWorkerWatchdog @ 0x140289D0C (PnpEnableDelayedRemoveWorkerWatchdog.c)
 * Callees:
 *     PnpWatchdogInitializeTimer @ 0x140005C9C (PnpWatchdogInitializeTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 */

__int64 __fastcall PnpEnableWatchdog(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KEVENT *v5; // rcx
  __int16 v6; // r10
  __int64 result; // rax

  if ( a1 )
  {
    *(_QWORD *)(a1 + 208) = a3;
    *(_WORD *)(a1 + 136) = 1;
    *(_DWORD *)(a1 + 200) = a4;
    PnpWatchdogInitializeTimer(a1, a2, a4, a1);
    v5 += 6;
    LOWORD(v5->Header.Lock) = v6;
    v5->Header.Size = 6;
    v5->Header.SignalState = 1;
    v5->Header.WaitListHead.Blink = &v5->Header.WaitListHead;
    v5->Header.WaitListHead.Flink = &v5->Header.WaitListHead;
    KeResetEvent(v5);
    *(_QWORD *)a1 = MEMORY[0xFFFFF78000000008];
    return KiSetTimerEx((int)a1 + 8, -100000000, 0, 0, a1 + 72);
  }
  return result;
}
