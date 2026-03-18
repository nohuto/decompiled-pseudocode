/*
 * XREFs of ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0056800
 * Callers:
 *     <none>
 * Callees:
 *     FxAllocateFromNPagedLookasideList @ 0x1C0036C2C (FxAllocateFromNPagedLookasideList.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C0056ABC (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C0057E9C (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C0057F6C (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C00580F8 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C00585F8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 */

__int64 __fastcall FxPagedLookasideListFromPool::Allocate(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromPoolLookaside **PPMemory)
{
  PSLIST_ENTRY v4; // rax
  __int64 result; // rax
  FxMemoryBufferFromLookaside *inited; // rdi
  PSLIST_ENTRY v7; // rbp
  FxDeviceBase *m_MemoryDeviceBase; // rbx
  FxMemoryBufferFromPoolLookaside *v9; // rax
  FxMemoryBufferFromPoolLookaside *v10; // rdi
  FxDeviceBase *v11; // rbx
  FxMemoryBufferFromPoolLookaside *v12; // rax
  unsigned __int16 ObjectType; // [rsp+20h] [rbp-18h]

  v4 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v4 )
    return 3221225626LL;
  inited = (FxMemoryBufferFromLookaside *)FxLookasideList::InitObjectAlloc(this, v4);
  ++this->m_PoolLookaside.L.TotalAllocates;
  v7 = ExpInterlockedPopEntrySList(&this->m_PoolLookaside.L.ListHead);
  if ( !v7 )
  {
    ++this->m_PoolLookaside.L.AllocateMisses;
    v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_PoolLookaside.L.AllocateEx)(
                         (unsigned int)this->m_PoolLookaside.L.Type,
                         this->m_PoolLookaside.L.Size,
                         this->m_PoolLookaside.L.Tag);
  }
  if ( !v7 )
  {
    this->Reclaim(this, inited);
    return 3221225626LL;
  }
  if ( this->m_BufferSize < 0x1000 )
    v7 = (PSLIST_ENTRY)FxPagedLookasideListFromPool::InitPagedAlloc(this, v7);
  m_MemoryDeviceBase = this->m_MemoryDeviceBase;
  v9 = (FxMemoryBufferFromPoolLookaside *)FxObjectAndHandleHeaderInit(
                                            this->m_Globals,
                                            inited,
                                            0x90u,
                                            &this->m_MemoryAttributes,
                                            FxObjectTypeExternal);
  v10 = v9;
  if ( !m_MemoryDeviceBase )
  {
    if ( v9 )
    {
      FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
        v9,
        this->m_Globals,
        this,
        this->m_BufferSize,
        v7);
      v10 = v12;
      goto LABEL_15;
    }
LABEL_14:
    v10 = 0LL;
    goto LABEL_15;
  }
  if ( !v9 )
    goto LABEL_14;
  v11 = this->m_MemoryDeviceBase;
  FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v9, this->m_Globals, this, this->m_BufferSize, ObjectType);
  v10->m_Pool = v7;
  v10->FxMemoryBufferFromLookaside::FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPoolLookaside_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
  v10->FxMemoryBufferFromLookaside::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
  v10->m_DeviceBase = v11;
LABEL_15:
  v10->m_ObjectFlags |= 0x11u;
  result = 0LL;
  *PPMemory = v10;
  return result;
}
