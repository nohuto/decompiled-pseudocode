/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x140159C60
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140159BA0 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1406E7E44 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x140159CB0 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 14, 0xFFFFFFFF) == 1 )
  {
    if ( *((_QWORD *)P + 15) )
    {
      PnpDisableDeviceCompletionQueueWatchdog();
      ExFreePoolWithTag(*((PVOID *)P + 15), 0x57647050u);
      *((_QWORD *)P + 15) = 0LL;
    }
    ExFreePoolWithTag(P, 0x31706E50u);
  }
}
