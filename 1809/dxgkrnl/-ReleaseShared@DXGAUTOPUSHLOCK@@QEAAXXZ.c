/*
 * XREFs of ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00208B8
 * Callers:
 *     DxgkAcquireHandleDataCB @ 0x1C00F2AD0 (DxgkAcquireHandleDataCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOPUSHLOCK::ReleaseShared(DXGAUTOPUSHLOCK *this)
{
  *((_DWORD *)this + 4) = 0;
  ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
  KeLeaveCriticalRegion();
}
