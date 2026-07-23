/*
 * XREFs of ZwCreateKeyedEvent @ 0x1401B9850
 * Callers:
 *     ExpKeyedEventInitialization @ 0x1409DB2F8 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateKeyedEvent(
        PHANDLE OutHandle,
        ACCESS_MASK AccessMask,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(OutHandle);
}
