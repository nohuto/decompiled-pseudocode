/*
 * XREFs of PnpWatchdogInitializeTimer @ 0x14009B0B4
 * Callers:
 *     PnpInitWatchdog @ 0x14009AFE0 (PnpInitWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FD18 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall PnpWatchdogInitializeTimer(__int64 a1, __int64 a2, int a3, __int64 a4))()
{
  __int64 (__fastcall *result)(); // rax

  *(_DWORD *)(a1 + 200) = a3;
  *(_QWORD *)(a1 + 96) = PnpTimerCallback;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 72) = 275;
  *(_QWORD *)(a1 + 104) = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 8) = 8;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  result = PnpWatchdogWorkItem;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 184) = PnpWatchdogWorkItem;
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
