/*
 * XREFs of ZwExtendSection @ 0x1401B9E70
 * Callers:
 *     CmSiExtendSection @ 0x140139A70 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
