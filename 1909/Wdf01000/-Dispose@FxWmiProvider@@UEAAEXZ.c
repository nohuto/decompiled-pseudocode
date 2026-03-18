/*
 * XREFs of ?Dispose@FxWmiProvider@@UEAAEXZ @ 0x1C003F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C00413E8 (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 */

unsigned __int8 __fastcall FxWmiProvider::Dispose(FxWmiProvider *this)
{
  FxWmiIrpHandler::RemoveProvider(this->m_Parent, this);
  return 1;
}
