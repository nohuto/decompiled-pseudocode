/*
 * XREFs of ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1C008E544
 * Callers:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0090DF0 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C028CF40 (-UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::bNeedThunk(UMPDOBJ *this, PVOID a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *((_DWORD *)this + 106) || a2 >= MmSystemRangeStart )
    return 1;
  return v2;
}
