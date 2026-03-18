/*
 * XREFs of ?CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C0054A80
 * Callers:
 *     imp_WdfMemoryCopyToBuffer @ 0x1C004A070 (imp_WdfMemoryCopyToBuffer.c)
 * Callees:
 *     ?_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z @ 0x1C0054B4C (-_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z.c)
 */

int __fastcall IFxMemory::CopyToPtr(
        IFxMemory *this,
        _WDFMEMORY_OFFSET *SourceOffsets,
        void *DestinationBuffer,
        unsigned __int64 DestinationBufferLength,
        _WDFMEMORY_OFFSET *DestinationOffsets)
{
  unsigned __int64 v9; // rdi
  void *v10; // rax

  v9 = this->GetBufferSize(this);
  v10 = (void *)this->GetBuffer(this);
  return IFxMemory::_CopyPtrToPtr(
           v10,
           v9,
           SourceOffsets,
           DestinationBuffer,
           DestinationBufferLength,
           DestinationOffsets);
}
