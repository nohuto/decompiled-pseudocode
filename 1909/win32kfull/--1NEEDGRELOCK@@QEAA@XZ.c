/*
 * XREFs of ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026A538
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall NEEDGRELOCK::~NEEDGRELOCK(NEEDGRELOCK *this)
{
  NEEDGRELOCK::vUnlock(this);
}
