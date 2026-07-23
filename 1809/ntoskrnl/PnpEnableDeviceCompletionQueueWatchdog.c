/*
 * XREFs of PnpEnableDeviceCompletionQueueWatchdog @ 0x14015A460
 * Callers:
 *     PnpDeviceCompletionRequestCreate @ 0x1406E9330 (PnpDeviceCompletionRequestCreate.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 */

__int64 __fastcall PnpEnableDeviceCompletionQueueWatchdog(__int64 a1)
{
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 88) = 1;
  *(_BYTE *)(a1 + 90) = 6;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  return PnpEnableWatchdog(*(_QWORD *)(a1 + 120), (__int64)PnpDeviceCompletionQueueWatchdogWorkItem, a1, 2u);
}
