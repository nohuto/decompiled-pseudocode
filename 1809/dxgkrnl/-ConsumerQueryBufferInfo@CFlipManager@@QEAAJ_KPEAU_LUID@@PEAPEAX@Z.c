/*
 * XREFs of ?ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C0059E5C
 * Callers:
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00576A8 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C005B4DC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C005C5D4 (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 */

signed int __fastcall CFlipManager::ConsumerQueryBufferInfo(
        struct _LIST_ENTRY *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  struct CFlipResourceState *ResourceState; // rbx
  void **v6; // r11
  signed int result; // eax

  ResourceState = CEndpointResourceStateManager::FindResourceState((CEndpointResourceStateManager *)this, a2, this + 6);
  result = ResourceState == 0LL ? 0xC000000D : 0;
  if ( ResourceState )
    result = CPoolBufferResource::CreateDxSharedSurfaceHandle(*((CPoolBufferResource **)ResourceState + 3), v6);
  if ( result >= 0 )
    *a3 = *(struct _LUID *)(*((_QWORD *)ResourceState + 3) + 64LL);
  return result;
}
