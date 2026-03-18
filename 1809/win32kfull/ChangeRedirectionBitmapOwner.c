/*
 * XREFs of ChangeRedirectionBitmapOwner @ 0x1C01D4004
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C022BAEC (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C0118D0C (GreSetRedirectionBitmapOwner.c)
 */

__int64 __fastcall ChangeRedirectionBitmapOwner(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  HSURF RedirectionBitmap; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( (*(_BYTE *)(v2 + 27) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v2 + 26) & 0x20) != 0 )
    {
      return 1;
    }
    else
    {
      RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1);
      if ( RedirectionBitmap )
        return (unsigned int)GreSetRedirectionBitmapOwner(RedirectionBitmap, -1LL, a2);
    }
  }
  return v3;
}
