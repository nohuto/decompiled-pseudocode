/*
 * XREFs of ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C000B960
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoContext::ReleaseAndRestore(FxIoContext *this, FxRequestBase *Request)
{
  _MDL *m_MdlToFree; // rcx
  IFxMemory *m_OtherMemory; // rcx
  _IRP *m_Irp; // rax
  _MDL *MdlAddress; // rsi
  IFxMemory *m_RequestMemory; // rcx
  __int16 MdlFlags; // cx
  _MDL *Next; // rbp

  if ( this->m_RestoreState )
  {
    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)this->m_OriginalSystemBuffer;
    Request->m_Irp.m_Irp->UserBuffer = this->m_OriginalUserBuffer;
    Request->m_Irp.m_Irp->MdlAddress = this->m_OriginalMdl;
    Request->m_Irp.m_Irp->Flags = this->m_OriginalFlags;
    this->m_OriginalSystemBuffer = 0LL;
    this->m_OriginalUserBuffer = 0LL;
    this->m_OriginalMdl = 0LL;
    this->m_OriginalFlags = 0;
    this->m_RestoreState = 0;
  }
  m_MdlToFree = this->m_MdlToFree;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
    }
    this->m_OriginalMdl = (_MDL *)Request->m_Globals;
  }
  m_OtherMemory = this->m_OtherMemory;
  if ( m_OtherMemory )
  {
    m_OtherMemory->Release(
      m_OtherMemory,
      this,
      123,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\km\\fxiotargetkm.hpp");
    this->m_OtherMemory = 0LL;
  }
  if ( Request->m_IrpAllocation && !Request->m_CanComplete )
  {
    m_Irp = Request->m_Irp.m_Irp;
    MdlAddress = m_Irp->MdlAddress;
    if ( MdlAddress )
    {
      do
      {
        MdlFlags = MdlAddress->MdlFlags;
        Next = MdlAddress->Next;
        if ( (MdlFlags & 2) != 0 )
        {
          MmUnlockPages(MdlAddress);
        }
        else if ( Request->m_Globals->FxVerifierOn )
        {
          DbgPrint("pMdl %p, Flags 0x%x in PIRP %p should be locked", MdlAddress, MdlFlags, Request->m_Irp.m_Irp);
          FxVerifierDbgBreakPoint(Request->m_Globals);
        }
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
      m_Irp = Request->m_Irp.m_Irp;
    }
    m_Irp->MdlAddress = 0LL;
  }
  m_RequestMemory = this->m_RequestMemory;
  if ( m_RequestMemory )
  {
    m_RequestMemory->Release(
      m_RequestMemory,
      this,
      112,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    this->m_RequestMemory = 0LL;
  }
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
