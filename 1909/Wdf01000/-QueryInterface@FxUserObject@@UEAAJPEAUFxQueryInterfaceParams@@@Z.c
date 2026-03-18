/*
 * XREFs of ?QueryInterface@FxUserObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019130
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019160 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxUserObject::QueryInterface(FxUserObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4108 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
