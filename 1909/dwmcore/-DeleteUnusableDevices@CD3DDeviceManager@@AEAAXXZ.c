/*
 * XREFs of ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18002CEC4
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002CEF8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801760AC (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18006495C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 */

void __fastcall CD3DDeviceManager::DeleteUnusableDevices(CD3DDeviceManager *this)
{
  unsigned int i; // ebx

  for ( i = *((_DWORD *)this + 38); i && i > *((_DWORD *)this + 52); CD3DDeviceManager::DeleteUnusedDevice(this, i) )
    --i;
}
