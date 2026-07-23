/*
 * XREFs of ZwQueryBootOptions @ 0x1401C3390
 * Callers:
 *     BiQueryBootOptions @ 0x140931B0C (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140932D8C (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
