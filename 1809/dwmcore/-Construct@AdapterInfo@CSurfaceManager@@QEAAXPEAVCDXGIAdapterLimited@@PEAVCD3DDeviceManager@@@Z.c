/*
 * XREFs of ?Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x18008AB80
 * Callers:
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18008AAA0 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?OpenRenderFence@CD3DDeviceLevel1@@QEBAPEAXXZ @ 0x18008ABEC (-OpenRenderFence@CD3DDeviceLevel1@@QEBAPEAXXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

void __fastcall CSurfaceManager::AdapterInfo::Construct(
        CSurfaceManager::AdapterInfo *this,
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
      CD3DSurface::Release((CD3DDeviceLevel1 *)((char *)v5 + 496));
  }
}
