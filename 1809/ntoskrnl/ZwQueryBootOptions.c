/*
 * XREFs of ZwQueryBootOptions @ 0x1401BAA10
 * Callers:
 *     BiQueryBootOptions @ 0x1408F5678 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x1408F692C (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
