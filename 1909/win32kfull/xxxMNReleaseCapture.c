/*
 * XREFs of xxxMNReleaseCapture @ 0x1C0225FA4
 * Callers:
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0246FFC (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 */

void __fastcall xxxMNReleaseCapture(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 8);
    if ( (v1 & 0x40000) != 0 )
    {
      *(_DWORD *)(a1 + 8) = v1 & 0xFFFBFFFF;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x100000u;
      xxxReleaseCapture();
      if ( gpqForeground )
      {
        v2 = *(_QWORD *)(gpqForeground + 120LL);
        if ( v2 )
        {
          if ( *(_QWORD *)(v2 + 16) == gptiCurrent )
            xxxWindowEvent(0x80000005, (struct tagWND *)v2, 0LL, 1, 33);
        }
      }
    }
  }
}
