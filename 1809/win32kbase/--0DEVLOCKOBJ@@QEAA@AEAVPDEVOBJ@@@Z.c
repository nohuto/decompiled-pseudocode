/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A0594
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C00A03D0 (pProcessDfbSurfacesInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00F8214 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C01061E4 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C001DE64 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A05CC (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  DCOBJ::DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vLock(this, a2);
  return this;
}
