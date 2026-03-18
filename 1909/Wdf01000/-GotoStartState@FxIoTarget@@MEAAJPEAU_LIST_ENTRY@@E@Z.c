/*
 * XREFs of ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0067890
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C006FD40 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0067348 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

__int64 __fastcall FxIoTarget::GotoStartState(FxIoTarget *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  unsigned __int8 v5; // di
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rcx
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  _FX_DRIVER_GLOBALS *v12; // rcx
  unsigned int v13; // esi
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  irql = 0;
  v5 = 0;
  FxObject::AddRef(this, (void *)0x74727453, 318, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( !Lock )
    goto LABEL_13;
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, v7);
    v5 = irql;
LABEL_13:
    if ( this->m_State == WdfIoTargetDeleted )
    {
      v13 = -1073741436;
      goto LABEL_15;
    }
    if ( !this->m_WaitingForSentIo )
      break;
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 3u, 0xEu, 0xFu, WPP_FxIoTarget_cpp_Traceguids, _a1);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v10, 0xBu) || m_Globals->FxVerifyDownlevel)
      && v5 )
    {
      FxVerifierDbgBreakPoint(v12);
    }
    FxNonPagedObject::Unlock(this, v5, v11);
    this->WaitForSentIoToComplete(this);
  }
  this->m_State = WdfIoTargetStarted;
  v13 = 0;
  this->m_WaitingForSentIo = 0;
  KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  FxIoTarget::DrainPendedRequestsLocked(this, RequestListHead, 1u);
LABEL_15:
  if ( Lock )
    FxNonPagedObject::Unlock(this, v5, v7);
  this->Release(this, (void *)1953657939, 391, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  return v13;
}
