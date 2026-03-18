/*
 * XREFs of AnFwDisplayBackgroundUpdate @ 0x140991714
 * Callers:
 *     BgDisplayBackgroundUpdate @ 0x1409916D8 (BgDisplayBackgroundUpdate.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1403489D0 (BgpClearScreen.c)
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

  if ( (dword_14042C010 & 0x4000000) == 0 )
    return 0LL;
  if ( !a1 )
  {
    AnFwDisableBackgroundUpdateTimer();
    return 0LL;
  }
  if ( byte_140509D29 )
    return 3221225473LL;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140424530)(&v6);
  if ( !is_mul_ok(v2, 0x3E8uLL) )
    return 3221225621LL;
  v3 = v2 * (unsigned __int128)0x3E8uLL / v6;
  v4 = v3 + qword_14042C0B0;
  v5 = v3;
  if ( v3 + qword_14042C0B0 < v3 )
    return 3221225621LL;
  DbgPrintEx(0x65u, 0, "BGFX Display Ready Time (ms): %d\n", v3);
  DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time GOAL (ms): %d\n", v4);
  if ( (unsigned __int64)qword_14042C0B0 >= 0x64 )
  {
    qword_14042C0B0 = v4;
    KeInitializeTimerEx(&stru_14050E030, NotificationTimer);
    KeInitializeDpc(&stru_14050E070, AnFwpBackgroundUpdateTimer, 0LL);
    if ( KeSetCoalescableTimer(&stru_14050E030, 0LL, 0x64u, 0, &stru_14050E070) )
    {
      KeCancelTimer(&stru_14050E030);
      byte_140509D29 = 0;
      return BgpClearScreen(HIDWORD(qword_14042C190));
    }
    byte_140509D29 = 1;
    result = 0LL;
  }
  else
  {
    BgpClearScreen(HIDWORD(qword_14042C190));
    DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v5);
    result = BgpGxDrawBitmapImage(qword_14042C058, &qword_14042C06C);
  }
  if ( (int)result < 0 )
    return BgpClearScreen(HIDWORD(qword_14042C190));
  return result;
}
