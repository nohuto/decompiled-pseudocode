/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C0086DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C005237C (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgFdo::DeleteSymbolicLinkOverload(FxPkgFdo *this, unsigned __int8 GracefulRemove)
{
  FxDevice::DeleteSymbolicLink(this->m_Device);
}
