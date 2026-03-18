/*
 * XREFs of ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0004B40
 * Callers:
 *     ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00554B0 (-QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019130 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxMemoryObject::QueryInterface(FxMemoryObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4106 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = (void *)((unsigned __int64)&this->IFxMemory & -(__int64)(this != 0LL));
  return 0;
}
