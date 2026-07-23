/*
 * XREFs of ZwQueryBootOptions @ 0x1401C2810
 * Callers:
 *     BiQueryBootOptions @ 0x140932098 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140933318 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
