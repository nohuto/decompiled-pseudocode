/*
 * XREFs of PopDripsWatchdogResetCallbackState @ 0x14086F974
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x14086F250 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x14086FB8C (PopDripsWatchdogStartWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDripsWatchdogResetCallbackState(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 12) != 1 )
    *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *a3;
  *(_DWORD *)a1 = 0;
  v4 = a3[1];
  result = (unsigned int)PopDripsWatchdogDebounceTickInterval;
  *(_OWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 4) = result;
  *(_OWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
