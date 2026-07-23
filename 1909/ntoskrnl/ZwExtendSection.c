/*
 * XREFs of ZwExtendSection @ 0x1401C27F0
 * Callers:
 *     CmSiExtendSection @ 0x1400EC9A8 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
