/*
 * XREFs of PnpInitWatchdog @ 0x1400EEFF0
 * Callers:
 *     PnpEnableWatchdog @ 0x1400EEF6C (PnpEnableWatchdog.c)
 * Callees:
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     PnpWatchdogInitializeTimer @ 0x1400EF0C4 (PnpWatchdogInitializeTimer.c)
 */

__int64 __fastcall PnpInitWatchdog(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KEVENT *v5; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    *(_QWORD *)(a1 + 264) = a3;
    *(_WORD *)(a1 + 136) = 1;
    *(_DWORD *)(a1 + 200) = a4;
    PnpWatchdogInitializeTimer(a1, a2, a4, a1);
    v5 += 6;
    LOWORD(v5->Header.Lock) = 0;
    v5->Header.Size = 6;
    v5->Header.SignalState = 1;
    v5->Header.WaitListHead.Blink = &v5->Header.WaitListHead;
    v5->Header.WaitListHead.Flink = &v5->Header.WaitListHead;
    KeResetEvent(v5);
    *(_QWORD *)(a1 + 216) = 0LL;
    *(_DWORD *)(a1 + 224) = 0;
    *(_DWORD *)(a1 + 208) = 1;
    *(_DWORD *)(a1 + 236) = 0;
    *(_WORD *)(a1 + 232) = 1;
    *(_BYTE *)(a1 + 234) = 6;
    *(_QWORD *)(a1 + 248) = a1 + 240;
    *(_QWORD *)(a1 + 240) = a1 + 240;
    *(_QWORD *)a1 = MEMORY[0xFFFFF78000000008];
    return KiSetTimerEx(a1 + 8, -100000000LL, 0, 0, a1 + 72);
  }
  return result;
}
