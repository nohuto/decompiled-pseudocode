/*
 * XREFs of ?GetDispatchPnp@FxPkgFdo@@EEAAPEBQ6AJPEAVFxPkgPnp@@PEAVFxIrp@@@ZXZ @ 0x1C000C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int (__fastcall *const *__fastcall FxPkgFdo::GetDispatchPnp(FxPkgFdo *this))(FxPkgPnp *, FxIrp *)
{
  return FxPkgFdo::m_FdoPnpFunctionTable;
}
