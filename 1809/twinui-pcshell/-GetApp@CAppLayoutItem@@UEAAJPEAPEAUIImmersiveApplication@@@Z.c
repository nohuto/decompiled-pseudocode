/*
 * XREFs of ?GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1803BD210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003DE50 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CAppLayoutItem::GetApp(RTL_SRWLOCK *this, struct IImmersiveApplication **a2)
{
  struct IImmersiveApplication **v4; // r8
  __int64 (__fastcall ***Ptr)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  unsigned int ApplicationFromView; // edi
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 3, &v8);
  Ptr = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))this[5].Ptr;
  ApplicationFromView = -2147023728;
  if ( Ptr )
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(Ptr, (struct IApplicationView *)a2, v4);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v8);
  return ApplicationFromView;
}
