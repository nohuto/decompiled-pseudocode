/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C00895A0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9710 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     SetOldRedirectionBitmap @ 0x1C0085C08 (SetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C00895F8 (GetOldRedirectionBitmap.c)
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
