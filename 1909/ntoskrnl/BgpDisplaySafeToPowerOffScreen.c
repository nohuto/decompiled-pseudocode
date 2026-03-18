/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x140349B34
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x140348998 (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x1403489D0 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x140349024 (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x140349998 (BcpGetDisplayType.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx
  int DisplayType; // esi
  unsigned int v2; // r8d
  int *v3; // rax
  int v4; // ecx
  unsigned __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  if ( (dword_14042C010 & 2) != 0 )
  {
    v6 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v7 = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(&v6);
    *(_DWORD *)(*(_QWORD *)(qword_14046B6F0 + 24) + 40LL) = -16777216;
    BgpClearScreen(0xFF000000);
    v0 = 0;
    v3 = &dword_140429ED0[18 * DisplayType + 5];
    LODWORD(BcpCursor) = dword_140429ED0[18 * DisplayType + 4];
    v4 = *v3;
    HIDWORD(BcpCursor) = *v3;
    if ( v3 )
      dword_140463EC8 = v4;
    BcpDisplayCriticalString((__int16 *)&stru_14046B6E0, dword_140429ED0[18 * DisplayType + 2], v2, DisplayType);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
