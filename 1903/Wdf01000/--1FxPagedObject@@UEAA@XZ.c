/*
 * XREFs of ??1FxPagedObject@@UEAA@XZ @ 0x1C0061D44
 * Callers:
 *     ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x1C0061D80 (--_GFxPagedObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007360 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxPagedObject::~FxPagedObject(FxPagedObject *this, unsigned int a2, unsigned int a3)
{
  MxPagedLock *m_Lock; // rcx

  this->__vftable = (FxPagedObject_vtbl *)FxPagedObject::`vftable';
  m_Lock = this->m_Lock;
  if ( m_Lock )
  {
    FxPoolFree((FX_POOL_TRACKER *)m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this, a2, a3);
}
