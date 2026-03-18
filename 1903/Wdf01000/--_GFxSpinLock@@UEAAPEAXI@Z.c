/*
 * XREFs of ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C0064C40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007360 (--1FxObject@@UEAA@XZ.c)
 */

FxSpinLock *__fastcall FxSpinLock::`scalar deleting destructor'(FxSpinLock *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FX_POOL_TRACKER *p_Blink; // rcx

  v3 = a2;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    p_Blink = (FX_POOL_TRACKER *)&this[-1].m_ChildEntry.Blink;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_Blink = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_Blink);
  }
  return this;
}
