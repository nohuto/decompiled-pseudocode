/*
 * XREFs of ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x1C0073E70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C0073DB0 (--1FxUsbInterface@@MEAA@XZ.c)
 */

FxUsbInterface *__fastcall FxUsbInterface::`vector deleting destructor'(FxUsbInterface *this, char a2)
{
  FxUsbInterface *v4; // rcx

  FxUsbInterface::~FxUsbInterface(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxUsbInterface *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
