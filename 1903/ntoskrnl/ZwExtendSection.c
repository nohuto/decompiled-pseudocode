/*
 * XREFs of ZwExtendSection @ 0x1401C1C70
 * Callers:
 *     CmSiExtendSection @ 0x14013CE70 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
