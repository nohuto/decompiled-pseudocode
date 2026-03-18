/*
 * XREFs of ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C0093EB4
 * Callers:
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C006E570 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0070090 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0075FB4 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::AssignValues(
        FxRequestBuffer *this,
        _MDL **PPBuffer,
        _MDL **PPMdl,
        unsigned int *BufferLength)
{
  unsigned int Length; // ebx
  _MDL **p_pMdl; // rsi
  FxRequestBufferType DataType; // ecx
  _MDL **v9; // rdx
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  _WDFMEMORY_OFFSET *v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  _WDFMEMORY_OFFSET *Offsets; // rdx
  _MDL *pMdl; // [rsp+40h] [rbp+8h] BYREF

  Length = 0;
  p_pMdl = &pMdl;
  DataType = this->DataType;
  if ( PPBuffer )
    p_pMdl = PPBuffer;
  v9 = &pMdl;
  if ( PPMdl )
    v9 = PPMdl;
  v10 = DataType - 1;
  if ( !v10 )
  {
    v15 = ((__int64 (__fastcall *)(IFxMemory *, _MDL **))this->u.Memory.Memory->GetBuffer)(this->u.Memory.Memory, v9);
    LODWORD(v14) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    Offsets = this->u.Memory.Offsets;
    if ( Offsets )
    {
      if ( Offsets->BufferLength )
        v14 = Offsets->BufferLength;
      if ( Offsets->BufferOffset )
        v15 += Offsets->BufferOffset;
    }
    *p_pMdl = (_MDL *)v15;
    goto LABEL_22;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *v9 = this->u.Mdl.Mdl;
    *p_pMdl = 0LL;
    goto LABEL_15;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *v9 = 0LL;
    *p_pMdl = this->u.Mdl.Mdl;
LABEL_15:
    Length = this->u.Mdl.Length;
    goto LABEL_23;
  }
  if ( v12 == 1 )
  {
    *v9 = this->u.RefMdl.Mdl;
    *p_pMdl = 0LL;
    v13 = this->u.Memory.Offsets;
    if ( !v13 || (v14 = v13->BufferLength) == 0 )
      LODWORD(v14) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
LABEL_22:
    Length = v14;
    goto LABEL_23;
  }
  *v9 = 0LL;
  *p_pMdl = 0LL;
LABEL_23:
  *BufferLength = Length;
}
