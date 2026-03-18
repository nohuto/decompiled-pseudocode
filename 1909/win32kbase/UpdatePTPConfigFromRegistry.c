/*
 * XREFs of UpdatePTPConfigFromRegistry @ 0x1C008C550
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C008C440 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C008C7A0 (GetDWORDSettingValuesEx.c)
 */

__int64 UpdatePTPConfigFromRegistry()
{
  if ( gTouchPadMonitor )
    return 1LL;
  if ( (unsigned int)GetDWORDSettingValuesEx(0LL, off_1C0208098, 13LL) )
  {
    if ( *((_DWORD *)off_1C0208098 + 7) )
      HIDWORD(gTouchPadParameters) |= 4u;
    if ( *((_DWORD *)off_1C0208098 + 11) )
      HIDWORD(gTouchPadParameters) |= 8u;
    if ( *((_DWORD *)off_1C0208098 + 3) <= 4u )
      DWORD2(gTouchPadParameters) = *((_DWORD *)off_1C0208098 + 3);
    if ( (unsigned int)(*((_DWORD *)off_1C0208098 + 31) - 1) <= 0x13 )
      qword_1C0210A18 = *((_DWORD *)off_1C0208098 + 31);
    if ( *((_DWORD *)off_1C0208098 + 15) )
      HIDWORD(gTouchPadParameters) |= 0x80u;
    if ( *((_DWORD *)off_1C0208098 + 19) )
      HIDWORD(gTouchPadParameters) |= 0x100u;
    if ( *((_DWORD *)off_1C0208098 + 51) )
      *(&qword_1C0210A18 + 1) |= 0x40u;
    if ( !*((_DWORD *)off_1C0208098 + 35) )
      *(&qword_1C0210A18 + 1) &= ~1u;
    if ( !*((_DWORD *)off_1C0208098 + 39) )
      *(&qword_1C0210A18 + 1) &= ~2u;
    if ( !*((_DWORD *)off_1C0208098 + 43) )
      *(&qword_1C0210A18 + 1) &= ~4u;
    if ( !*((_DWORD *)off_1C0208098 + 23) )
      HIDWORD(gTouchPadParameters) &= ~0x200u;
    if ( !*((_DWORD *)off_1C0208098 + 27) )
      HIDWORD(gTouchPadParameters) &= ~0x400u;
    LODWORD(gTouchPadParameters) = 0;
    gTouchPadMonitor = 1;
    return 1LL;
  }
  return 0LL;
}
