/*
 * XREFs of ?get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1803BF360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_ActivationViewSwitcher(
        RTL_SRWLOCK *this,
        struct Windows::UI::ViewManagement::IActivationViewSwitcher **a2)
{
  __int64 *v3; // rdi
  unsigned int v4; // ebx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)&this[2];
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 5, &v6);
  *a2 = 0LL;
  v4 = *v3 == 0 ? 0x80004002 : 0;
  if ( *v3 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
    v4 = 0;
    *a2 = (struct Windows::UI::ViewManagement::IActivationViewSwitcher *)*v3;
  }
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v6);
  return v4;
}
