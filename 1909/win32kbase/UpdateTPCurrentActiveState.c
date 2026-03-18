/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C0053740
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C008C440 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0107600 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0053780 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateMouseConnectionState @ 0x1C00538A4 (UpdateMouseConnectionState.c)
 */

void UpdateTPCurrentActiveState()
{
  UpdateMouseConnectionState();
  if ( (*(_BYTE *)(&qword_1C0210A18 + 1) & 1) != 0 )
    *(&qword_1C0210A18 + 1) |= 8u;
  else
    *(&qword_1C0210A18 + 1) = *(&qword_1C0210A18 + 1) & 0xFFFFFFF7 | ((unsigned __int8)(~*((_BYTE *)&qword_1C0210A18 + 4) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
}
