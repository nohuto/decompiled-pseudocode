/*
 * XREFs of ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C0066A08
 * Callers:
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C006B3C0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C006FD1C (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x1C0071B08 (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0066E14 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0068370 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::CancelSentIo(FxIoTarget *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoTarget *v5; // rcx
  unsigned __int8 v6; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 sentAdded; // [rsp+58h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY sentRequestListHead; // [rsp+60h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  sentRequestListHead.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  FxIoTarget::GetSentRequestsListLocked(v5, &sentRequestListHead, &this->m_SentIoListHead, &sentAdded);
  FxNonPagedObject::Unlock(this, irql, v6);
  m_ObjectSize = this->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x38u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  if ( sentAdded )
    FxIoTarget::_CancelSentRequests(&sentRequestListHead);
}
