/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C001A480
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0007494 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001A4CC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00D81F0 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CFlipExBuffer *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 40);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 39);
    if ( v3 )
      DxgkImmediateSignalSynchronizationObjectByReference(v3, v1);
  }
  CFlipExBuffer::DisableCascadedSignaling(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31));
}
