/*
 * XREFs of ZwQuerySection @ 0x1401C0AF0
 * Callers:
 *     CmSiGetSectionLength @ 0x140098EC0 (CmSiGetSectionLength.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&SectionInformationClass, SectionInformation);
}
