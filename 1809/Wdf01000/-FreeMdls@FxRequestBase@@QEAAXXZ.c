/*
 * XREFs of ?FreeMdls@FxRequestBase@@QEAAXXZ @ 0x1C00938B8
 * Callers:
 *     ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0093990 (-ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequestBase::FreeMdls(FxRequestBase *this)
{
  _IRP *m_Irp; // rax
  _MDL *MdlAddress; // rdi
  __int16 MdlFlags; // cx
  _MDL *Next; // rsi

  if ( this->m_IrpAllocation && !this->m_CanComplete )
  {
    m_Irp = this->m_Irp.m_Irp;
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
        else if ( this->m_Globals->FxVerifierOn )
        {
          DbgPrint("pMdl %p, Flags 0x%x in PIRP %p should be locked", MdlAddress, MdlFlags, this->m_Irp.m_Irp);
          FxVerifierDbgBreakPoint(this->m_Globals);
        }
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
      m_Irp = this->m_Irp.m_Irp;
    }
    m_Irp->MdlAddress = 0LL;
  }
}
