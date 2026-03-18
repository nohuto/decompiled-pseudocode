/*
 * XREFs of ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003F3A8
 * Callers:
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EA84 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     FxIsEqualGuid @ 0x1C003BBD8 (FxIsEqualGuid.c)
 */

__int64 __fastcall FxIFRValidateLogHeader(_WDF_IFR_HEADER *Header)
{
  unsigned int Size; // eax
  unsigned int v4; // ecx

  Size = Header->Size;
  if ( Size + 72 < Size )
    return Size + 72 < Size ? 0xC0000095 : 0;
  if ( Size - 4024 > 0xF000 )
    return 3221225990LL;
  if ( FxIsEqualGuid(&Header->Guid, &WdfTraceGuid) )
  {
    v4 = Header->Size;
    if ( Header->Offset.u.s.Current <= v4 && Header->Offset.u.s.Previous <= v4 )
      return 0LL;
  }
  return 3221225473LL;
}
