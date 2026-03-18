/*
 * XREFs of ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x1C0017D24
 * Callers:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0081774 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGINVERSESEMAPHORE::AcquireInverseSemaphore(DXGINVERSESEMAPHORE *this)
{
  int v2; // eax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 1) = KeGetCurrentThread();
  v2 = *((_DWORD *)this + 10);
  if ( !v2 )
  {
    KeClearEvent((PRKEVENT)((char *)this + 16));
    v2 = *((_DWORD *)this + 10);
  }
  *((_DWORD *)this + 10) = v2 + 1;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
