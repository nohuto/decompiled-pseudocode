/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C00C4BEC
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01B1A80 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x1C00C4C44 (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C010A594 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 OldRedirectionBitmap; // rsi

  v2 = 0;
  OldRedirectionBitmap = GetOldRedirectionBitmap(a1);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1LL);
  }
  return v2;
}
