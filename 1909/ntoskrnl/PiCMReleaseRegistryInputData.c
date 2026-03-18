/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x1406CD204
 * Callers:
 *     PiCMOpenClassKey @ 0x1406CCE80 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1406CD03C (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x140719B7C (PiCMOpenDeviceKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14087273C (PiCMOpenDeviceInterfaceKey.c)
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
