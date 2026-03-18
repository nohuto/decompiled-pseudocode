/*
 * XREFs of ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C001B9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetPinnedMode(DMMVIDPNTARGETMODESET *this)
{
  return (struct DMMVIDPNTARGETMODE *)*((_QWORD *)this + 18);
}
