/*
 * XREFs of InvalidateDCE @ 0x1C00354F8
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     RevalidateDCE @ 0x1C00EC450 (RevalidateDCE.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C008C040 (GreSelectRedirectionBitmap.c)
 */

__int64 __fastcall InvalidateDCE(__int64 a1)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 64) & 0x4002 | 0x800;
  *(_DWORD *)(a1 + 64) = v2;
  if ( (v2 & 0x4000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)(a1 + 8), 0LL);
    *(_DWORD *)(a1 + 64) &= ~0x4000u;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
}
