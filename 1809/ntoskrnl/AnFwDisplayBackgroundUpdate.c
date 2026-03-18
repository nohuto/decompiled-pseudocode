/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1409516AC
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140951670 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56D0 (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x140160440 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140327614 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140950424 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140954520 (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( (dword_140405AD0 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_1404DC881 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_1403FE530)(&v5);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v5;
  if ( v3 + qword_140405B70 < v3 )
    return v3 + qword_140405B70 < v3 ? 0xC0000095 : 0;
  v4 = v3 + qword_140405B70;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_140405B70 >= 0x64 )
  {
    qword_140405B70 = v4;
    KeInitializeTimerEx(&stru_1404E0B80, NotificationTimer);
    KeInitializeDpc(&stru_1404E0BC0, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_1404E0B80, 0LL, 0x64u, 0, &stru_1404E0BC0) )
    {
      KeCancelTimer(&stru_1404E0B80);
      byte_1404DC881 = 0;
      return BgpClearScreen(HIDWORD(qword_140405C50));
    }
    byte_1404DC881 = 1;
    result = 0LL;
  }
  else
  {
    BgpClearScreen(HIDWORD(qword_140405C50));
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
    result = BgpGxDrawBitmapImage(qword_140405B18, &qword_140405B2C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_140405C50));
  return result;
}
