/*
 * XREFs of ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C006F610
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0067060 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     WPP_IFR_SF_qs @ 0x1C0070B88 (WPP_IFR_SF_qs.c)
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
  _FX_DRIVER_GLOBALS *v15; // rdx
  _FX_DRIVER_GLOBALS *v16; // rdx
  unsigned __int8 *v17; // rsi
  unsigned __int8 v18; // r8
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
    v15 = this->m_Globals;
    if ( v15->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)v15, 9u)
       || v16->FxVerifyDownlevel) )
    {
      FxVerifierDbgBreakPoint(v16);
    }
  }
  v17 = Wait;
  FxIoTarget::GotoRemoveState(this, NewState, PendedRequestListHead, SentRequestListHead, 0, Wait);
  if ( this->m_Reader )
    *v17 = 1;
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v10, v18);
}
