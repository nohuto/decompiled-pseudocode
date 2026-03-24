/*
 * XREFs of ZwSetSystemTime @ 0x1401BB630
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1408CD1B0 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime, NewSystemTime, v2);
}
