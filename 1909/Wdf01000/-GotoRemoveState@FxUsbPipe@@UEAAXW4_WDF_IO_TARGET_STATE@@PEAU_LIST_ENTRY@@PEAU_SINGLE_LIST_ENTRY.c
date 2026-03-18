/*
 * XREFs of ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C006FC10
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C00676F0 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     WPP_IFR_SF_qs @ 0x1C0071168 (WPP_IFR_SF_qs.c)
 */

void __fastcall FxUsbPipe::GotoRemoveState(
        FxUsbPipe *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 LockSelf,
        unsigned __int8 *Wait)
{
  unsigned __int8 v10; // di
  FxUsbPipeContinuousReader *m_Reader; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const char *id; // r8
  const void *flags; // rdx
  unsigned int v15; // edx
  _FX_DRIVER_GLOBALS *v16; // rcx
  _FX_DRIVER_GLOBALS *v17; // rcx
  unsigned __int8 *v18; // rsi
  unsigned __int8 v19; // r8
  const _GUID *Lock; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v10 = irql;
  }
  m_Reader = this->m_Reader;
  if ( m_Reader && m_Reader->m_ReadersSubmitted && this->m_State == WdfIoTargetStarted )
  {
    m_Globals = this->m_Globals;
    id = "in EvtCleanupCallback of the miniport framework device object";
    if ( (m_Globals->Public.DriverFlags & 2) == 0 )
      id = "in EvtDeviceD0Exit callback";
    flags = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      flags = 0LL;
    WPP_IFR_SF_qs(
      m_Globals,
      (unsigned __int8)flags,
      (unsigned int)id,
      (unsigned __int16)SentRequestListHead,
      Lock,
      flags,
      id);
    v16 = this->m_Globals;
    if ( v16->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v16, v15, 9u) || v17->FxVerifyDownlevel) )
    {
      FxVerifierDbgBreakPoint(v17);
    }
  }
  v18 = Wait;
  FxIoTarget::GotoRemoveState(this, NewState, PendedRequestListHead, SentRequestListHead, 0, Wait);
  if ( this->m_Reader )
    *v18 = 1;
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v10, v19);
}
