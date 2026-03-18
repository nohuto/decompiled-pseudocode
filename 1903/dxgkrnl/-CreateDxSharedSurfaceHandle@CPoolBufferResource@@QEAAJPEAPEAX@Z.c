/*
 * XREFs of ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C006374C
 * Callers:
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C005E73C (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 * Callees:
 *     DxgkGetSharedAllocationObjectType @ 0x1C012F190 (DxgkGetSharedAllocationObjectType.c)
 */

NTSTATUS __fastcall CPoolBufferResource::CreateDxSharedSurfaceHandle(PVOID *this, void **a2)
{
  struct _OBJECT_TYPE *ObjectType; // rax

  ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  return ObOpenObjectByPointer(this[6], 0, 0LL, 0xF0000u, ObjectType, 0, a2);
}
