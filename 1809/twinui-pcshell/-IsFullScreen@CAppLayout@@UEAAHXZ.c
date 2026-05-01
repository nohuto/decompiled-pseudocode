/*
 * XREFs of ?IsFullScreen@CAppLayout@@UEAAHXZ @ 0x1803BB6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CAppLayout::IsFullScreen(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v4);
  v2 = 1;
  if ( this[9].Ptr != (PVOID)1
    || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this[8].Ptr + 24LL))(*(_QWORD *)this[8].Ptr) != 1 )
  {
    v2 = 0;
  }
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v4);
  return v2;
}
