/*
 * XREFs of ZwSetBootOptions @ 0x1401C3C90
 * Callers:
 *     BiSetBootOptions @ 0x140931D08 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
