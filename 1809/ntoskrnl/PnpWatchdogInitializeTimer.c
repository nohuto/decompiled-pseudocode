/*
 * XREFs of PnpWatchdogInitializeTimer @ 0x140005C9C
 * Callers:
 *     PnpEnableWatchdog @ 0x140005C04 (PnpEnableWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289D7C (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpWatchdogInitializeTimer(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 200) = a3;
  *(_QWORD *)(a1 + 96) = PnpTimerCallback;
  *(_QWORD *)(a1 + 128) = 0LL;
  result = a1 + 16;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 72) = 275;
  *(_QWORD *)(a1 + 104) = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 8) = 8;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)(a1 + 192) = a4;
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
