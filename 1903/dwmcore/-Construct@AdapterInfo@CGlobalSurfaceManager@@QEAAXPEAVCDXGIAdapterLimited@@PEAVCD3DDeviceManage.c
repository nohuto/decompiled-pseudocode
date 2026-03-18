/*
 * XREFs of ?Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800CEE74
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CED90 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003F394 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OpenRenderFence@CD3DDeviceLevel1@@QEBAPEAXXZ @ 0x1800CEEE0 (-OpenRenderFence@CD3DDeviceLevel1@@QEBAPEAXXZ.c)
 */

void __fastcall CGlobalSurfaceManager::AdapterInfo::Construct(
        CGlobalSurfaceManager::AdapterInfo *this,
        struct CDXGIAdapterLimited *a2,
        struct CD3DDeviceManager *a3)
{
  struct _LUID v3; // rdx
  CD3DDeviceLevel1 *v5; // rbx
  CD3DDeviceLevel1 *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _LUID)*((_QWORD *)a2 + 42);
  *((_QWORD *)this + 1) = 0LL;
  v6 = 0LL;
  *(struct _LUID *)this = v3;
  if ( (int)CD3DDeviceManager::GetExistingDevice(a3, v3, &v6) >= 0 )
  {
    v5 = v6;
    *((_QWORD *)this + 1) = CD3DDeviceLevel1::OpenRenderFence(v6);
    if ( v5 )
      CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v5 + 496));
  }
}
