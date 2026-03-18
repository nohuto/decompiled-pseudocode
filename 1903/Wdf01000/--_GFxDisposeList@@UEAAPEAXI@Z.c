/*
 * XREFs of ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0056D30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009610 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxDisposeList *__fastcall FxDisposeList::`scalar deleting destructor'(
        FxDisposeList *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxDisposeList *v5; // rcx

  v3 = a2;
  this->__vftable = (FxDisposeList_vtbl *)FxDisposeList::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxDisposeList *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
