/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C0064108
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C005E7F0 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C0082A30 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009610 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0064194 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d

  this->__vftable = (FxCollection_vtbl *)FxCollection::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this, v2, v3);
}
