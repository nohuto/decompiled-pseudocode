/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C0067FB0
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0064530 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0109F70 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0067FF0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateMouseConnectionState @ 0x1C0068114 (UpdateMouseConnectionState.c)
 */

void UpdateTPCurrentActiveState()
{
  UpdateMouseConnectionState();
  if ( (*(_BYTE *)(&qword_1C0213A18 + 1) & 1) != 0 )
    *(&qword_1C0213A18 + 1) |= 8u;
  else
    *(&qword_1C0213A18 + 1) = *(&qword_1C0213A18 + 1) & 0xFFFFFFF7 | ((unsigned __int8)(~*((_BYTE *)&qword_1C0213A18 + 4) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
}
