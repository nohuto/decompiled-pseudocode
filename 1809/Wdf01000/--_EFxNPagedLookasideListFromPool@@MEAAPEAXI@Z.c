/*
 * XREFs of ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0056930
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007880 (--1FxObject@@UEAA@XZ.c)
 */

FxNPagedLookasideListFromPool *__fastcall FxNPagedLookasideListFromPool::`vector deleting destructor'(
        FxNPagedLookasideListFromPool *this,
        char a2,
        unsigned int a3)
{
  bool v3; // zf
  FxNPagedLookasideListFromPool *v6; // rcx

  v3 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxNPagedLookasideListFromPool_vtbl *)FxNPagedLookasideListFromPool::`vftable';
  if ( !v3 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  if ( this->m_BufferSize )
    ExDeleteNPagedLookasideList(&this->m_PoolLookaside);
  this->__vftable = (FxNPagedLookasideListFromPool_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v6 = (FxNPagedLookasideListFromPool *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v6 = this;
    FxPoolFree((FX_POOL_TRACKER *)v6);
  }
  return this;
}
