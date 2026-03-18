/*
 * XREFs of ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C01970F0
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C0287704 (GreCreateHalftonePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall NEEDGRELOCK::~NEEDGRELOCK(NEEDGRELOCK *this)
{
  NEEDGRELOCK::vUnlock(this);
}
