/*
 * XREFs of ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007B478
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

__int64 __fastcall ndisGetPdInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  unsigned int v5; // ebx
  _IRP::<unnamed_type_AssociatedIrp> v6; // r14
  KIRQL v7; // r13
  _NDIS_PD_BLOCK *PDBlock; // rdx
  unsigned int v9; // r15d
  unsigned int v10; // eax
  char PDDmaAddressWidth; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Read.Length < 0x18 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v6.MasterIrp = (_IRP *)a2->AssociatedIrp;
      *(_DWORD *)&v6.MasterIrp->Type = 1573248;
      v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      PDBlock = a1->PDBlock;
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 4003028;
      if ( PDBlock )
      {
        v9 = -1;
        v10 = PDBlock->PDCurrentConfigSize + 24;
        if ( v10 >= 0x18 )
          v9 = PDBlock->PDCurrentConfigSize + 24;
        v5 = PDBlock->PDCurrentConfigSize >= 0xFFFFFFE8 ? 0xC0000095 : 0;
        if ( v10 >= 0x18 )
        {
          *(_DWORD *)&v6.MasterIrp->AllocationProcessorNumber = v9;
          if ( CurrentStackLocation->Parameters.Read.Length >= v9 )
          {
            *(&v6.MasterIrp->Flags + 1) = PDBlock->DiagnosticCode;
            PDDmaAddressWidth = PDBlock->PDDmaAddressWidth;
            LODWORD(v6.MasterIrp->MdlAddress) = 24;
            LOBYTE(v6.MasterIrp->Flags) = PDDmaAddressWidth;
            HIDWORD(v6.MasterIrp->MdlAddress) = PDBlock->PDCurrentConfigSize;
            memmove(&v6.MasterIrp->AssociatedIrp, PDBlock->PDCurrentConfig, PDBlock->PDCurrentConfigSize);
            v5 = 0;
            a2->IoStatus.Information = v9;
          }
          else
          {
            v5 = -1073676268;
            a2->IoStatus.Information = 24LL;
          }
        }
      }
      else
      {
        v5 = -1073741808;
      }
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v7);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
