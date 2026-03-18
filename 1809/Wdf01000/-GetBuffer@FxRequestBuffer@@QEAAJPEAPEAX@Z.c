/*
 * XREFs of ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0093FB4
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006540 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0069CD4 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxRequestBuffer::GetBuffer(FxRequestBuffer *this, IFxMemory **Buffer)
{
  _MDL *Mdl; // rcx
  IFxMemory *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *Offsets; // rcx
  IFxMemory *Memory; // rcx
  IFxMemory *v9; // rax
  __int64 (*GetBuffer)(void); // rax
  IFxMemory *v11; // rcx

  if ( this->DataType )
  {
    if ( this->DataType == FxRequestBufferMemory )
    {
      GetBuffer = (__int64 (*)(void))this->u.Memory.Memory->GetBuffer;
      if ( this->u.Memory.Offsets )
        v11 = (IFxMemory *)(this->u.Memory.Offsets->BufferOffset + GetBuffer());
      else
        v11 = (IFxMemory *)GetBuffer();
      *Buffer = v11;
      return 0LL;
    }
    if ( this->DataType == FxRequestBufferMdl )
    {
      Memory = this->u.Memory.Memory;
      if ( (BYTE2(Memory[1].__vftable) & 5) != 0 )
        v9 = (IFxMemory *)Memory[3].__vftable;
      else
        v9 = (IFxMemory *)MmMapLockedPagesSpecifyCache((PMDL)Memory, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
      *Buffer = v9;
      if ( v9 )
        return 0LL;
      return 3221225626LL;
    }
    if ( this->DataType != FxRequestBufferBuffer )
    {
      if ( this->DataType != FxRequestBufferReferencedMdl )
        return 3221225485LL;
      Mdl = this->u.RefMdl.Mdl;
      if ( (Mdl->MdlFlags & 5) != 0 )
        MappedSystemVa = (IFxMemory *)Mdl->MappedSystemVa;
      else
        MappedSystemVa = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                                        Mdl,
                                        0,
                                        MmCached,
                                        0LL,
                                        0,
                                        ExDefaultMdlProtection | 0x10);
      *Buffer = MappedSystemVa;
      if ( MappedSystemVa )
      {
        Offsets = this->u.Memory.Offsets;
        if ( Offsets )
          *Buffer = (IFxMemory *)((char *)MappedSystemVa + Offsets->BufferOffset);
        return 0LL;
      }
      return 3221225626LL;
    }
    *Buffer = this->u.Memory.Memory;
  }
  else
  {
    *Buffer = 0LL;
  }
  return 0LL;
}
