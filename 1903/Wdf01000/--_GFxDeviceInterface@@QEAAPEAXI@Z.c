/*
 * XREFs of ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C005F6BC
 * Callers:
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005F710 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0082818 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_ReferenceString.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    *(_QWORD *)&this->m_ReferenceString.Length = 0LL;
    this->m_ReferenceString.Buffer = 0LL;
  }
  if ( this->m_SymbolicLinkName.Buffer )
    RtlFreeUnicodeString(&this->m_SymbolicLinkName);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
