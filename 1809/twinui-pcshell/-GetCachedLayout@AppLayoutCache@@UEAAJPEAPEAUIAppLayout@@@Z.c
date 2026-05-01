/*
 * XREFs of ?GetCachedLayout@AppLayoutCache@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x180352D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall AppLayoutCache::GetCachedLayout(RTL_SRWLOCK *this, struct IAppLayout **a2)
{
  PVOID Ptr; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 6, &v8);
  Ptr = this[7].Ptr;
  if ( Ptr )
  {
    v5 = (*(__int64 (__fastcall **)(PVOID, GUID *, struct IAppLayout **))(*(_QWORD *)Ptr + 192LL))(
           Ptr,
           &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
           a2);
  }
  else
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\applayoutcache.cpp",
      (const char *)0x80070490LL);
  }
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v8);
  return v5;
}
