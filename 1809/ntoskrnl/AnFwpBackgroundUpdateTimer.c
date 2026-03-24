/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140953FF0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140160460 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140327714 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140950424 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140950440 (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140954520 (BgpGxDrawBitmapImage.c)
 */

void __fastcall AnFwpBackgroundUpdateTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v4; // kr00_8
  int v5; // ebx
  unsigned __int64 v6; // rdi
  _BOOL8 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = ((__int64 (__fastcall *)(_QWORD *, PVOID, PVOID, PVOID))off_1403FE530)(
         v8,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v8[0];
    BgpFwAcquireLock();
    if ( v6 >= qword_140405B70 )
    {
      if ( byte_1404DC871 )
      {
        AnFwpDisableProgressTimer(v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( qword_140405B18 )
        {
          BgpClearScreen(HIDWORD(qword_140405C50));
          v5 = BgpGxDrawBitmapImage(qword_140405B18, &qword_140405B2C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_140405C50));
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
