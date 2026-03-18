/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C003CA00
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C003C8E0 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00E52E4 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C003CDB0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateMouseConnectionState @ 0x1C003D704 (UpdateMouseConnectionState.c)
 */

void UpdateTPCurrentActiveState()
{
  UpdateMouseConnectionState();
  if ( (qword_1C01CBD28 & 0x100000000LL) != 0 )
    HIDWORD(qword_1C01CBD28) |= 8u;
  else
    HIDWORD(qword_1C01CBD28) = HIDWORD(qword_1C01CBD28) & 0xFFFFFFF7 | ((unsigned __int8)(~BYTE4(qword_1C01CBD28) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
}
