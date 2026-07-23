/*
 * XREFs of ZwSetBootOptions @ 0x1401BB310
 * Callers:
 *     BiSetBootOptions @ 0x1408F586C (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
