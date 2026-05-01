/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180060BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EB94C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v5; // r14
  struct IApplicationView *Ptr; // rdx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 64;
  v8 = this + 64;
  AcquireSRWLockExclusive(this + 64);
  v5 = this + 69;
  Ptr = (struct IApplicationView *)this[69].Ptr;
  if ( a2 != Ptr || ((__int64)this[70].Ptr & 1) != 0 )
  {
    if ( Ptr && Ptr != a2 )
      CApplicationViewManager::RaiseApplicationViewChanged(
        (__int64)this,
        (void (__fastcall ***)(_QWORD, GUID *, __int64 *))Ptr,
        9u,
        (__int64)a2);
    Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(&this[69], a2);
    LODWORD(this[70].Ptr) &= ~1u;
    if ( v5->Ptr )
      CApplicationViewManager::RaiseApplicationViewChanged((__int64)this, v5->Ptr, 7u, 0LL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  else
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v8);
  }
  return 0LL;
}
