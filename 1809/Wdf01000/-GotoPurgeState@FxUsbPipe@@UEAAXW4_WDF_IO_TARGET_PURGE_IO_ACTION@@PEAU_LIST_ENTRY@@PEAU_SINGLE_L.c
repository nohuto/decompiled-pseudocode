/*
 * XREFs of ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C006F4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0066EC0 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     WPP_IFR_SF_qLL @ 0x1C00709A8 (WPP_IFR_SF_qLL.c)
 */

void __fastcall FxUsbPipe::GotoPurgeState(
        FxUsbPipe *this,
        __int32 Action,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _WDF_IO_TARGET_PURGE_IO_ACTION flags; // r15d
  const void *v11; // rdi
  const void *level; // rax
  unsigned __int8 *v13; // r14
  unsigned __int8 v14; // r8
  FxUsbPipeContinuousReader *m_Reader; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned int v17; // [rsp+38h] [rbp-30h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  flags = Action;
  irql = 0;
  if ( LockSelf )
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
  v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( this->m_Reader )
  {
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)PendedRequestListHead, 0x16u, traceGuid, level, flags, v17);
    flags = WdfIoTargetPurgeIoAndWait;
  }
  v13 = Wait;
  FxIoTarget::GotoPurgeState(this, flags, PendedRequestListHead, SentRequestListHead, Wait, 0);
  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    m_Reader->m_ReadersSubmitted = 0;
    if ( this->m_Reader->m_WorkItemThread == KeGetCurrentThread() )
    {
      if ( !this->m_ObjectSize )
        v11 = 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbPipe_cpp_Traceguids, v11);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    *v13 = 1;
  }
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, irql, v14);
}
