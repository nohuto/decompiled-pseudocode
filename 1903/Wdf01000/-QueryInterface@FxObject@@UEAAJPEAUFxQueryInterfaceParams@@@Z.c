/*
 * XREFs of ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019160
 * Callers:
 *     ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0003980 (-QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxUserObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019130 (-QueryInterface@FxUserObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C004EFD0 (-QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0054CD0 (-QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00558B0 (-QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0057E70 (-QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0067FF0 (-QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00799A0 (-QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::QueryInterface(FxObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4096 )
    return 3221226169LL;
  *Params->Object = this;
  return 0LL;
}
