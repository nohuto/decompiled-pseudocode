/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C0072A8C
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01D4310 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C0072A5C (GetOldRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C0129084 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  HSURF OldRedirectionBitmap; // rsi

  v2 = 0;
  OldRedirectionBitmap = (HSURF)GetOldRedirectionBitmap(a1);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1);
  }
  return v2;
}
