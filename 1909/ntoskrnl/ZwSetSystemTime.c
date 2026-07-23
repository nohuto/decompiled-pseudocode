/*
 * XREFs of ZwSetSystemTime @ 0x1401C4110
 * Callers:
 *     ExpTimeZoneWork @ 0x14090A220 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
