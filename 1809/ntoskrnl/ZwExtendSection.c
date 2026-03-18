/*
 * XREFs of ZwExtendSection @ 0x1401B9CF0
 * Callers:
 *     CmSiExtendSection @ 0x140139950 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, NewMaximumSize, v2);
}
