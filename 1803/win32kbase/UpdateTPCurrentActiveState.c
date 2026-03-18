/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C0012E20
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0012D10 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00AABAC (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0012E60 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateMouseConnectionState @ 0x1C0012E94 (UpdateMouseConnectionState.c)
 */

void UpdateTPCurrentActiveState()
{
  UpdateMouseConnectionState();
  if ( (qword_1C01A02B8 & 0x100000000LL) != 0 )
    HIDWORD(qword_1C01A02B8) |= 8u;
  else
    HIDWORD(qword_1C01A02B8) = HIDWORD(qword_1C01A02B8) & 0xFFFFFFF7 | ((unsigned __int8)(~BYTE4(qword_1C01A02B8) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
}
