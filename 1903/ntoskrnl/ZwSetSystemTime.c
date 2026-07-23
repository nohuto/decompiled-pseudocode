/*
 * XREFs of ZwSetSystemTime @ 0x1401C3590
 * Callers:
 *     ExpTimeZoneWork @ 0x14090A7C0 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
