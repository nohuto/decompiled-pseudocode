/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180067730
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180031190 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18012D990 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 *v5; // r14
  struct IApplicationView *Ptr; // rdx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 67;
  v8 = this + 67;
  AcquireSRWLockExclusive(this + 67);
  v5 = (__int64 *)&this[72];
  Ptr = (struct IApplicationView *)this[72].Ptr;
  if ( a2 != Ptr || ((__int64)this[73].Ptr & 1) != 0 )
  {
    if ( Ptr && Ptr != a2 )
      CApplicationViewManager::RaiseApplicationViewChanged((__int64)this, (__int64)Ptr, 9u, (__int64)a2);
    Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(&this[72], a2);
    LODWORD(this[73].Ptr) &= ~1u;
    if ( *v5 )
      CApplicationViewManager::RaiseApplicationViewChanged((__int64)this, *v5, 7u, 0LL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  else
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v8);
  }
  return 0LL;
}
