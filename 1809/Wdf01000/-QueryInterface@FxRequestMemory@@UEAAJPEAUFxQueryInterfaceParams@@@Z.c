/*
 * XREFs of ?QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0057B50
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00554B0 (-QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxRequestMemory::QueryInterface(FxRequestMemory *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4146 )
    return FxMemoryBufferPreallocated::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
