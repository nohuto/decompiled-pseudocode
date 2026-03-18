/*
 * XREFs of PopFxReleaseDevice @ 0x1402F4B74
 * Callers:
 *     PopRequestCompletion @ 0x140171E80 (PopRequestCompletion.c)
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408A5950 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A5A74 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408A6BA0 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 236), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 240), 0, 0);
  return result;
}
