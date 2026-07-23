/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1401C2C90
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x14084AC8C (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
