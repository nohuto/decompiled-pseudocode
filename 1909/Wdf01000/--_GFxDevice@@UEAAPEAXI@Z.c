/*
 * XREFs of ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C0052EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C0052BDC (--1FxDevice@@UEAA@XZ.c)
 */

FxDevice *__fastcall FxDevice::`scalar deleting destructor'(FxDevice *this, char a2)
{
  FxDevice *v4; // rcx

  FxDevice::~FxDevice(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDevice *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
