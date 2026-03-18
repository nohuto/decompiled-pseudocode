/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C0060B8C
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0013B50 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_di @ 0x1C0002B18 (WPP_RECORDER_SF_di.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000F620 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C0060C48 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateInternalDeviceFlags @ 0x1C0061524 (Controller_PopulateInternalDeviceFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C006173C (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

_UNKNOWN **__fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r8
  _UNKNOWN **result; // rax
  int v8; // [rsp+20h] [rbp-28h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  v4 = (_QWORD *)(a1 + 336);
  v5 = 0;
  if ( Controller_IsSecureDevice(a1) )
    *v4 |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 625) )
    *(_QWORD *)(a1 + 344) &= ~1uLL;
  Controller_PopulateInternalDeviceFlags();
  do
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_UNKNOWN **)WPP_RECORDER_SF_di(*(_QWORD *)(a1 + 72), 4u, v6, 0xA6u, v8);
    ++v5;
    ++v4;
  }
  while ( v5 < 2 );
  return result;
}
