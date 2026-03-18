/*
 * XREFs of ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C00569C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C000DCB4 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C003784C (FxAllocateFromNPagedLookasideList.c)
 *     ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C00584AC (--0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C00586A8 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 */

__int64 __fastcall FxNPagedLookasideList::Allocate(FxNPagedLookasideList *this, FxMemoryObject **PPMemory)
{
  FxMemoryObject *v2; // rbx
  PSLIST_ENTRY v6; // rax
  FxObject *inited; // rax
  FxMemoryBufferFromLookaside *v8; // rax
  FxMemoryObject *v9; // rax

  v2 = 0LL;
  if ( !PPMemory )
    return 3221225485LL;
  *PPMemory = 0LL;
  v6 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v6 )
    return 3221225626LL;
  inited = (FxObject *)FxLookasideList::InitObjectAlloc(this, v6);
  v8 = (FxMemoryBufferFromLookaside *)FxObjectAndHandleHeaderInit(
                                        this->m_Globals,
                                        inited,
                                        ((LOWORD(this->m_BufferSize) + 15) & 0xFFF0u) + 128,
                                        &this->m_MemoryAttributes,
                                        FxObjectTypeExternal);
  if ( v8 )
  {
    FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v8, this->m_Globals, this, this->m_BufferSize);
    v2 = v9;
  }
  *PPMemory = v2;
  return 0LL;
}
