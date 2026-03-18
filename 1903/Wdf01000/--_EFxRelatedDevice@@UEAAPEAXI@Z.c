/*
 * XREFs of ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C0095A70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007360 (--1FxObject@@UEAA@XZ.c)
 */

FxRelatedDevice *__fastcall FxRelatedDevice::`vector deleting destructor'(FxRelatedDevice *this, char a2)
{
  unsigned int v4; // edx
  unsigned int v5; // r8d
  FxRelatedDevice *v6; // rcx

  this->__vftable = (FxRelatedDevice_vtbl *)FxRelatedDevice::`vftable';
  ObfDereferenceObject(this->m_DeviceObject);
  FxObject::~FxObject(this, v4, v5);
  if ( (a2 & 1) != 0 )
  {
    v6 = (FxRelatedDevice *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v6 = this;
    FxPoolFree((FX_POOL_TRACKER *)v6);
  }
  return this;
}
