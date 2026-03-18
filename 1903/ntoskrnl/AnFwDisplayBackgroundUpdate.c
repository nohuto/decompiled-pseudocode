/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140991714
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1409916D8 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140348F70 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140990474 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140994648 (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (dword_14042C030 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_140509FE9 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140424530)(&v6);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_14042C0D0;
  v5 = v3;
  if ( v3 + qword_14042C0D0 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_14042C0D0 >= 0x64 )
  {
    qword_14042C0D0 = v4;
    KeInitializeTimerEx(&stru_14050E2F0, NotificationTimer);
    KeInitializeDpc(&stru_14050E330, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_14050E2F0, 0LL, 0x64u, 0, &stru_14050E330) )
    {
      KeCancelTimer(&stru_14050E2F0);
      byte_140509FE9 = 0;
      return BgpClearScreen(HIDWORD(qword_14042C1B0));
    }
    byte_140509FE9 = 1;
    result = 0LL;
  }
  else
  {
    BgpClearScreen(HIDWORD(qword_14042C1B0));
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
    result = BgpGxDrawBitmapImage(qword_14042C078, &qword_14042C08C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_14042C1B0));
  return result;
}
