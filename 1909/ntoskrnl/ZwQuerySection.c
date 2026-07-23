/*
 * XREFs of ZwQuerySection @ 0x1401C1670
 * Callers:
 *     CmSiGetSectionLength @ 0x1400ED564 (CmSiGetSectionLength.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
