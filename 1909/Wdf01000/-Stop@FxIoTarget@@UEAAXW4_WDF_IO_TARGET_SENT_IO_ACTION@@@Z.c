/*
 * XREFs of ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C00683A0
 * Callers:
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C00740E0 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C00689F0 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::Stop(FxIoTarget *this, __int64 Action)
{
  FxIoTarget_vtbl *v2; // rax
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  unsigned __int8 wait; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+50h] [rbp+18h] BYREF
  _SINGLE_LIST_ENTRY head; // [rsp+58h] [rbp+20h] BYREF

  v2 = this->__vftable;
  head.Next = 0LL;
  wait = 0;
  v2->GotoStopState(this, (_WDF_IO_TARGET_SENT_IO_ACTION)Action, &head, &wait, 1u);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
  if ( wait )
  {
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v4);
    v5 = irql;
    this->m_WaitingForSentIo = 0;
    FxNonPagedObject::Unlock(this, v5, v6);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
}
