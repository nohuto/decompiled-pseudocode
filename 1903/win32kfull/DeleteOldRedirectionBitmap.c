/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C0044BD0
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9890 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     SetOldRedirectionBitmap @ 0x1C0041B78 (SetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C0044C28 (GetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  HSURF OldRedirectionBitmap; // rsi

  v2 = 0;
  OldRedirectionBitmap = (HSURF)GetOldRedirectionBitmap();
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1);
  }
  return v2;
}
