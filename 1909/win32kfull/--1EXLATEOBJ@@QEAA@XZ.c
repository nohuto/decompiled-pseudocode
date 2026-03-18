/*
 * XREFs of ??1EXLATEOBJ@@QEAA@XZ @ 0x1C026A524
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C004DE54 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall EXLATEOBJ::~EXLATEOBJ(EXLATEOBJ *this)
{
  EXLATEOBJ::vAltUnlock(this);
}
