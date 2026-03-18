/*
 * XREFs of ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0067FF0
 * Callers:
 *     ?QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0069E00 (-QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019160 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxIoTarget::QueryInterface(FxIoTarget *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4608 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
