/*
 * XREFs of ?ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00238A0
 * Callers:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0023BC0 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleasePowerTransitionLockShared(ADAPTER_RENDER *this)
{
  ExReleasePushLockSharedEx(*((_QWORD *)this + 2) + 96LL, 0LL);
  KeLeaveCriticalRegion();
}
