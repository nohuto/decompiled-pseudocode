/*
 * XREFs of PnpInitWatchdog @ 0x14009AFE0
 * Callers:
 *     PnpEnableWatchdog @ 0x14009AF5C (PnpEnableWatchdog.c)
 * Callees:
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     PnpWatchdogInitializeTimer @ 0x14009B0B4 (PnpWatchdogInitializeTimer.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
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
    return KiSetTimerEx((int)a1 + 8, -100000000, 0, 0, a1 + 72);
  }
  return result;
}
