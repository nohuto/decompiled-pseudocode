/*
 * XREFs of ?QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0057E70
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019160 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxSystemWorkItem::QueryInterface(FxSystemWorkItem *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4145 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
