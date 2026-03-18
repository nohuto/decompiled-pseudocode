/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x1406A7204
 * Callers:
 *     PiCMOpenClassKey @ 0x1406A6D40 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A6ED8 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A7054 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14083849C (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
