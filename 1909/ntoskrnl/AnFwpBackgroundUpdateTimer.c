/*
 * XREFs of AnFwpBackgroundUpdateTimer @ 0x140994110
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     BgpClearScreen @ 0x1403489D0 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140990474 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140990490 (AnFwpDisableProgressTimer.c)
 *     BgpGxDrawBitmapImage @ 0x140994648 (BgpGxDrawBitmapImage.c)
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

  v4 = ((__int64 (__fastcall *)(_QWORD *, PVOID, PVOID, PVOID))off_140424530)(
         v8,
         DeferredContext,
         SystemArgument1,
         SystemArgument2);
  if ( is_mul_ok(v4, 0x3E8uLL) )
  {
    v5 = 0;
    v6 = v4 * (unsigned __int128)0x3E8uLL / v8[0];
    BgpFwAcquireLock();
    if ( v6 >= qword_14042C0B0 )
    {
      if ( byte_140509D29 )
      {
        AnFwpDisableProgressTimer(v7);
        DbgPrintEx(0x65u, 0, "BGFX Secondary Logo Bitmap Display Time (ms): %d\n", v6);
        if ( qword_14042C058 )
        {
          BgpClearScreen(HIDWORD(qword_14042C190));
          v5 = BgpGxDrawBitmapImage(qword_14042C058, &qword_14042C06C);
        }
        if ( v5 < 0 )
          BgpClearScreen(HIDWORD(qword_14042C190));
      }
      AnFwDisableBackgroundUpdateTimer();
    }
    BgpFwReleaseLock();
  }
}
