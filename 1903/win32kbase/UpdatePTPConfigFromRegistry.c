/*
 * XREFs of UpdatePTPConfigFromRegistry @ 0x1C0064424
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0064530 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C00621B0 (GetDWORDSettingValuesEx.c)
 */

__int64 UpdatePTPConfigFromRegistry()
{
  if ( gTouchPadMonitor )
    return 1LL;
  if ( (unsigned int)GetDWORDSettingValuesEx(0LL, (__int64)off_1C020B098, 0xDu, 1) )
  {
    if ( *((_DWORD *)off_1C020B098 + 7) )
      HIDWORD(gTouchPadParameters) |= 4u;
    if ( *((_DWORD *)off_1C020B098 + 11) )
      HIDWORD(gTouchPadParameters) |= 8u;
    if ( *((_DWORD *)off_1C020B098 + 3) <= 4u )
      DWORD2(gTouchPadParameters) = *((_DWORD *)off_1C020B098 + 3);
    if ( (unsigned int)(*((_DWORD *)off_1C020B098 + 31) - 1) <= 0x13 )
      qword_1C0213A18 = *((_DWORD *)off_1C020B098 + 31);
    if ( *((_DWORD *)off_1C020B098 + 15) )
      HIDWORD(gTouchPadParameters) |= 0x80u;
    if ( *((_DWORD *)off_1C020B098 + 19) )
      HIDWORD(gTouchPadParameters) |= 0x100u;
    if ( *((_DWORD *)off_1C020B098 + 51) )
      *(&qword_1C0213A18 + 1) |= 0x40u;
    if ( !*((_DWORD *)off_1C020B098 + 35) )
      *(&qword_1C0213A18 + 1) &= ~1u;
    if ( !*((_DWORD *)off_1C020B098 + 39) )
      *(&qword_1C0213A18 + 1) &= ~2u;
    if ( !*((_DWORD *)off_1C020B098 + 43) )
      *(&qword_1C0213A18 + 1) &= ~4u;
    if ( !*((_DWORD *)off_1C020B098 + 23) )
      HIDWORD(gTouchPadParameters) &= ~0x200u;
    if ( !*((_DWORD *)off_1C020B098 + 27) )
      HIDWORD(gTouchPadParameters) &= ~0x400u;
    LODWORD(gTouchPadParameters) = 0;
    gTouchPadMonitor = 1;
    return 1LL;
  }
  return 0LL;
}
