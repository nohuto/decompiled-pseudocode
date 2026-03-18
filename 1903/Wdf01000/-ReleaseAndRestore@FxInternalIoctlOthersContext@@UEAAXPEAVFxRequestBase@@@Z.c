/*
 * XREFs of ?ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00162B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInternalIoctlOthersContext::ReleaseAndRestore(
        FxInternalIoctlOthersContext *this,
        FxRequestBase *Request)
{
  IFxMemory **m_MemoryObjects; // rdi
  __int64 v5; // rbp
  _IRP *m_Irp; // rax
  _MDL *MdlAddress; // rdi
  IFxMemory *m_RequestMemory; // rcx
  __int16 MdlFlags; // cx
  _MDL *Next; // rbp

  m_MemoryObjects = this->m_MemoryObjects;
  v5 = 2LL;
  do
  {
    if ( *m_MemoryObjects )
    {
      (*m_MemoryObjects)->Release(
        *m_MemoryObjects,
        this,
        153,
        "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\fxiotarget.hpp");
      *m_MemoryObjects = 0LL;
    }
    ++m_MemoryObjects;
    --v5;
  }
  while ( v5 );
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
}
