/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x1C005987C
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0010F70 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_di @ 0x1C0002670 (WPP_RECORDER_SF_di.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C000D094 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C0059928 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateInternalDeviceFlags @ 0x1C005A170 (Controller_PopulateInternalDeviceFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C005A360 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  v4 = (_QWORD *)(a1 + 272);
  v5 = 0;
  if ( Controller_IsSecureDevice(a1) )
    *v4 |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 561) )
    *(_QWORD *)(a1 + 280) &= ~1uLL;
  Controller_PopulateInternalDeviceFlags();
  do
  {
    result = WPP_RECORDER_SF_di(*(_QWORD *)(a1 + 72), 4u, v6, 0xA4u, v8);
    ++v5;
    ++v4;
  }
  while ( v5 < 2 );
  return result;
}
