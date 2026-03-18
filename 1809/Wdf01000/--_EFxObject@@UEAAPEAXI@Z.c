/*
 * XREFs of ??_EFxObject@@UEAAPEAXI@Z @ 0x1C0054F40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007880 (--1FxObject@@UEAA@XZ.c)
 */

FxWaitLock *__fastcall FxObject::`vector deleting destructor'(FxWaitLock *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxWaitLock *v5; // rcx

  v3 = a2;
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxWaitLock *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
