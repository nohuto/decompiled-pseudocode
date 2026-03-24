/*
 * XREFs of PopDripsWatchdogScheduleNextTimer @ 0x14086E7C0
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x14086DFF0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086E420 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086E92C (PopDripsWatchdogStartWatchdog.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013BA40 (PopOkayToQueueNextWorkItem.c)
 */

_BOOL8 __fastcall PopDripsWatchdogScheduleNextTimer(__int64 a1)
{
  __int64 v2; // rdx
  _BOOL8 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008];
  v2 = -10000000LL * *(unsigned int *)(a1 + 176);
  v4[1] = -1LL;
  v4[0] = 0LL;
  if ( *(_DWORD *)(a1 + 168) )
    PopOkayToQueueNextWorkItem(a1 + 136);
  result = KeSetTimer2(a1, v2, 0LL, (__int64)v4);
  *(_DWORD *)(a1 + 180) |= 2u;
  return result;
}
