/*
 * XREFs of EngCreatePalette_0 @ 0x1C01646B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HPALETTE __stdcall EngCreatePalette_0(
        ULONG iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  return EngCreatePalette(iMode, cColors, pulColors, flRed, flGreen, flBlue);
}
