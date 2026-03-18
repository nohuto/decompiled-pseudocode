/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00E32F0
 * Callers:
 *     GreRealizePalette @ 0x1C00983DC (GreRealizePalette.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C015EA8C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     NtGdiResizePalette @ 0x1C029BC50 (NtGdiResizePalette.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00E3330 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(this);
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
  }
}
