/*
 * XREFs of ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0012590
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfRequestWdmGetIrp @ 0x1C004CC70 (imp_WdfRequestWdmGetIrp.c)
 *     ?GetRequestorProcessId@FxRequest@@QEAAKXZ @ 0x1C004FF1C (-GetRequestorProcessId@FxRequest@@QEAAKXZ.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetIrp(FxRequest *this, _IRP **ppIrp, unsigned __int8 a3)
{
  _IRP *m_Irp; // rdi
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // esi
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Irp = 0LL;
  if ( this->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
    else
      IsNotCompleted = 0;
    if ( IsNotCompleted >= 0 )
      m_Irp = this->m_Irp.m_Irp;
    else
      IsNotCompleted = -1073741808;
    *ppIrp = m_Irp;
    FxNonPagedObject::Unlock(this, irql, v7);
    return (unsigned int)IsNotCompleted;
  }
  else
  {
    *ppIrp = this->m_Irp.m_Irp;
    return 0LL;
  }
}
