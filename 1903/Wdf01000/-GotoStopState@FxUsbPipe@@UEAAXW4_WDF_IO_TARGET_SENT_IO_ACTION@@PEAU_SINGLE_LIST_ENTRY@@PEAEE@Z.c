/*
 * XREFs of ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C006FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0067A30 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     WPP_IFR_SF_qLL @ 0x1C0070F88 (WPP_IFR_SF_qLL.c)
 */

void __fastcall FxUsbPipe::GotoStopState(
        FxUsbPipe *this,
        __int32 Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_IO_TARGET_SENT_IO_ACTION flags; // r14d
  const void *v10; // rdi
  const void *level; // rax
  unsigned __int8 v12; // r8
  FxUsbPipeContinuousReader *m_Reader; // rax
  unsigned int v14; // edx
  _FX_DRIVER_GLOBALS *v15; // rcx
  struct _KTHREAD *m_WorkItemThread; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+38h] [rbp-30h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  flags = Action;
  irql = 0;
  if ( LockSelf )
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)SentRequestListHead);
  v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( this->m_Reader )
  {
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qLL(m_Globals, Action, (unsigned int)SentRequestListHead, 0x14u, traceGuid, level, flags, v18);
    flags = WdfIoTargetCancelSentIo;
  }
  FxIoTarget::GotoStopState(this, flags, SentRequestListHead, Wait, 0);
  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    m_Reader->m_ReadersSubmitted = 0;
    if ( this->m_Reader->m_WorkItemThread == KeGetCurrentThread() )
    {
      if ( !this->m_ObjectSize )
        v10 = 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipe_cpp_Traceguids, v10);
      if ( m_Globals->FxVerifierOn
        && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v14, 9u) || m_Globals->FxVerifyDownlevel) )
      {
        FxVerifierDbgBreakPoint(v15);
      }
    }
    m_WorkItemThread = this->m_Reader->m_WorkItemThread;
    if ( m_WorkItemThread != KeGetCurrentThread()
      || _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)m_WorkItemThread, 9u) )
    {
      *Wait = 1;
    }
  }
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, irql, v12);
}
