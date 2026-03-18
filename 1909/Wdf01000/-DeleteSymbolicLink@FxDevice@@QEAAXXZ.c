/*
 * XREFs of ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C0051DAC
 * Callers:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0051E08 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C0052BDC (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C007C0D0 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C007C720 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C0087ED0 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDevice::DeleteSymbolicLink(FxDevice *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_SymbolicLinkName.Buffer;
  if ( Buffer )
  {
    if ( this->m_SymbolicLinkName.Length )
    {
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
      Buffer = this->m_SymbolicLinkName.Buffer;
    }
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    *(_QWORD *)&this->m_SymbolicLinkName.Length = 0LL;
    this->m_SymbolicLinkName.Buffer = 0LL;
  }
}
