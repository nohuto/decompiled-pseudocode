/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x140328A44
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x1403278CC (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x140327904 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x140327F44 (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x1403288A8 (BcpGetDisplayType.c)
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

  if ( (dword_140406AD0 & 2) != 0 )
  {
    v6 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v7 = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(&v6);
    *(_DWORD *)(*(_QWORD *)(qword_140440C30 + 24) + 40LL) = -16777216;
    BgpClearScreen(0xFF000000);
    v0 = 0;
    v3 = &dword_140404A70[18 * DisplayType + 5];
    LODWORD(BcpCursor) = dword_140404A70[18 * DisplayType + 4];
    v4 = *v3;
    HIDWORD(BcpCursor) = *v3;
    if ( v3 )
      dword_140439800 = v4;
    BcpDisplayCriticalString((__int16 *)&stru_140440C20, dword_140404A70[18 * DisplayType + 2], v2, DisplayType);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
