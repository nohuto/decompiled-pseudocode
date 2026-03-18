/*
 * XREFs of ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180024174
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800240B0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800B1074 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceLevel1::DeleteFreedResources(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 79) )
    CD3DResourceManager::DestroyDelayedResources((CD3DDeviceLevel1 *)((char *)this + 896));
}
