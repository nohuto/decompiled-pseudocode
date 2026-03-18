/*
 * XREFs of ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C027CC58
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C027B7C0 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C027BB60 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsFreeHooked(struct DHPDEV__ *a1, struct UMPDOBJ *a2)
{
  unsigned int v2; // r8d

  v2 = 1;
  if ( !*((_DWORD *)a2 + 106) )
    return *(_QWORD *)(*(_QWORD *)a1 + 408LL) != 0LL;
  return v2;
}
