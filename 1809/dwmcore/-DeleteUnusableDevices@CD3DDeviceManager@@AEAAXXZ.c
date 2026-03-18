/*
 * XREFs of ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008A1D4
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008A208 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014B6A8 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180036D7C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 */

void __fastcall CD3DDeviceManager::DeleteUnusableDevices(CD3DDeviceManager *this)
{
  unsigned int i; // ebx

  for ( i = *((_DWORD *)this + 38); i && i > *((_DWORD *)this + 52); CD3DDeviceManager::DeleteUnusedDevice(this, i) )
    --i;
}
