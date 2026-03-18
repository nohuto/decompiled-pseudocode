/*
 * XREFs of ZwCreateKeyedEvent @ 0x1401B96D0
 * Callers:
 *     ExpKeyedEventInitialization @ 0x1409DA2F8 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateKeyedEvent(
        PHANDLE OutHandle,
        ACCESS_MASK AccessMask,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(OutHandle, *(_QWORD *)&AccessMask, ObjectAttributes);
}
