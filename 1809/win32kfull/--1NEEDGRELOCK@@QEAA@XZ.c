/*
 * XREFs of ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C025133C
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0054DA4 (GreGetDIBitsInternal.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C011440C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreCreateHalftonePalette @ 0x1C029B37C (GreCreateHalftonePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall NEEDGRELOCK::~NEEDGRELOCK(NEEDGRELOCK *this)
{
  NEEDGRELOCK::vUnlock(this);
}
