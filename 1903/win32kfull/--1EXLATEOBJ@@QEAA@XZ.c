/*
 * XREFs of ??1EXLATEOBJ@@QEAA@XZ @ 0x1C026AC54
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00AD034 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall EXLATEOBJ::~EXLATEOBJ(EXLATEOBJ *this)
{
  EXLATEOBJ::vAltUnlock(this);
}
