/*
 * XREFs of ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0055AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C00559FC (--1FxDriver@@UEAA@XZ.c)
 */

FxDriver *__fastcall FxDriver::`vector deleting destructor'(FxDriver *this, char a2)
{
  FxDriver *v4; // rcx

  FxDriver::~FxDriver(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDriver *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
