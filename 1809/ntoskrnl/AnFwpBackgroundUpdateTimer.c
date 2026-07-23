/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140954FF0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x140327904 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140951424 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140951440 (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140955520 (BgpGxDrawBitmapImage.c)
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

  v4 = ((__int64 (__fastcall *)(_QWORD *, PVOID, PVOID, PVOID))off_1403FF530)(
         v8,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v8[0];
    BgpFwAcquireLock();
    if ( v6 >= qword_140406B70 )
    {
      if ( byte_1404DD941 )
      {
        AnFwpDisableProgressTimer(v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( qword_140406B18 )
        {
          BgpClearScreen(HIDWORD(qword_140406C50));
          v5 = BgpGxDrawBitmapImage(qword_140406B18, &qword_140406B2C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_140406C50));
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
