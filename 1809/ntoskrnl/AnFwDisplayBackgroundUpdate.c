/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x1409526AC
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x140952670 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140327904 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140951424 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140955520 (BgpGxDrawBitmapImage.c)
 */

__int64 __fastcall AnFwDisplayBackgroundUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( (dword_140406AD0 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_1404DD941 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_1403FF530)(&v5);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v5;
  if ( v3 + qword_140406B70 < v3 )
    return v3 + qword_140406B70 < v3 ? 0xC0000095 : 0;
  v4 = v3 + qword_140406B70;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_140406B70 >= 0x64 )
  {
    qword_140406B70 = v4;
    KeInitializeTimerEx(&stru_1404E1C40, NotificationTimer);
    KeInitializeDpc(&stru_1404E1C80, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_1404E1C40, 0LL, 0x64u, 0, &stru_1404E1C80) )
    {
      KeCancelTimer(&stru_1404E1C40);
      byte_1404DD941 = 0;
      return BgpClearScreen(HIDWORD(qword_140406C50));
    }
    byte_1404DD941 = 1;
    result = 0LL;
  }
  else
  {
    BgpClearScreen(HIDWORD(qword_140406C50));
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v3);
    result = BgpGxDrawBitmapImage(qword_140406B18, &qword_140406B2C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_140406C50));
  return result;
}
