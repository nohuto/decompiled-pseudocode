/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x1406CE464
 * Callers:
 *     PiCMOpenClassKey @ 0x1406CE0E0 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1406CE29C (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x140717D8C (PiCMOpenDeviceKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14087303C (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
