/*
 * XREFs of ??1DXGADAPTERDEVICECREATIONLOCK@@QEAA@XZ @ 0x1C0036E9C
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTERDEVICECREATIONLOCK::~DXGADAPTERDEVICECREATIONLOCK(DXGADAPTERDEVICECREATIONLOCK *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  *(_QWORD *)(v1 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 24, 0LL);
  KeLeaveCriticalRegion();
}
