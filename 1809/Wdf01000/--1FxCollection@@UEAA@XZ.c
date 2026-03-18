/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C0063AC0
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C005E650 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C0081C20 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009F30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0063B4C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
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
