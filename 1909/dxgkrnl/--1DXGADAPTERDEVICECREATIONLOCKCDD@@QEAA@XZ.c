/*
 * XREFs of ??1DXGADAPTERDEVICECREATIONLOCKCDD@@QEAA@XZ @ 0x1C0036ED4
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTERDEVICECREATIONLOCKCDD::~DXGADAPTERDEVICECREATIONLOCKCDD(
        DXGADAPTERDEVICECREATIONLOCKCDD *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  *(_QWORD *)(v1 + 48) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 40, 0LL);
  KeLeaveCriticalRegion();
}
