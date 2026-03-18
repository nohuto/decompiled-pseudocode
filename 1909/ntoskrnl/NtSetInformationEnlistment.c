/*
 * XREFs of NtSetInformationEnlistment @ 0x14019F4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  return __imp_NtSetInformationEnlistment(
           EnlistmentHandle,
           EnlistmentInformationClass,
           EnlistmentInformation,
           EnlistmentInformationLength);
}
