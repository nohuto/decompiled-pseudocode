/*
 * XREFs of EngSetPointerShape @ 0x1C0136A00
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00DC69C (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0136AF0 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C024AD60 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 */

ULONG __stdcall EngSetPointerShape(
        SURFOBJ *pso,
        SURFOBJ *psoMask,
        SURFOBJ *psoColor,
        XLATEOBJ *pxlo,
        LONG xHot,
        LONG yHot,
        LONG x,
        LONG y,
        RECTL *prcl,
        FLONG fl)
{
  struct _XLATEOBJ *v13; // r9
  ULONG v14; // ebx
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h] BYREF

  if ( !g_pDwmState )
    return GdiSetPointerShape(pso, psoMask, psoColor, pxlo, xHot, yHot, x, y, prcl, fl);
  v17 = *((_QWORD *)pso->hdev + 7);
  GreAcquireSemaphore(v17);
  v16 = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v14 = DwmSetPointerShape(pso, psoMask, psoColor, v13, xHot, yHot, x, y, prcl, fl);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return v14;
}
