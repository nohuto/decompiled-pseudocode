/*
 * XREFs of ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C005237C
 * Callers:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00523D8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C005318C (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C007B6F0 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C007BD40 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C0086DA0 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
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
