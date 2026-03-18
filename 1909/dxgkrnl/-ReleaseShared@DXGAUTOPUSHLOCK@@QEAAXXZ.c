/*
 * XREFs of ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0023464
 * Callers:
 *     DxgkAcquireHandleDataCB @ 0x1C0137CA0 (DxgkAcquireHandleDataCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOPUSHLOCK::ReleaseShared(DXGAUTOPUSHLOCK *this)
{
  *((_DWORD *)this + 4) = 0;
  ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
  KeLeaveCriticalRegion();
}
