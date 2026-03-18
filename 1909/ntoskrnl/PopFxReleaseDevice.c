/*
 * XREFs of PopFxReleaseDevice @ 0x1402F4628
 * Callers:
 *     PopRequestCompletion @ 0x1401725B0 (PopRequestCompletion.c)
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1408A51B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A52D4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408A6400 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 236), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 240), 0, 0);
  return result;
}
