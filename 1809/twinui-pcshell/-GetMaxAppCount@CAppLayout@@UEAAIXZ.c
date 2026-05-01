/*
 * XREFs of ?GetMaxAppCount@CAppLayout@@UEAAIXZ @ 0x1803BAF30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803AC844 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayout::GetMaxAppCount(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v2; // rdx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v4);
  LODWORD(v1) = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)&v1[3], v2);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v4);
  return (unsigned int)v1;
}
