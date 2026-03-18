/*
 * XREFs of ?ReleaseD3DResourcesInternal@CDWMOffScreenSwapChain@@UEAAXXZ @ 0x1800DE340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWMOffScreenSwapChain::ReleaseD3DResourcesInternal(CDWMOffScreenSwapChain *this)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 53);
}
