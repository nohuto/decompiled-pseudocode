/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C007AEF0
 * Callers:
 *     hdcOpenDCW @ 0x1C0039EC0 (hdcOpenDCW.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
