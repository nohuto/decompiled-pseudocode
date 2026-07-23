/*
 * XREFs of ZwSetBootOptions @ 0x1401C3110
 * Callers:
 *     BiSetBootOptions @ 0x140932294 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
