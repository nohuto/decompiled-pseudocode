/*
 * XREFs of ZwQueryBootOptions @ 0x1401BA890
 * Callers:
 *     BiQueryBootOptions @ 0x1408F43D8 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x1408F568C (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions, BootOptionsLength, v2);
}
