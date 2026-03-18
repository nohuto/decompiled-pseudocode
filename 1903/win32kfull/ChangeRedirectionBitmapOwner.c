/*
 * XREFs of ChangeRedirectionBitmapOwner @ 0x1C01E92FC
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0244B1C (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C01210A0 (GreSetRedirectionBitmapOwner.c)
 */

__int64 __fastcall ChangeRedirectionBitmapOwner(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 RedirectionBitmap; // rax

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
      RedirectionBitmap = GetRedirectionBitmap(a1);
      if ( RedirectionBitmap )
        return (unsigned int)GreSetRedirectionBitmapOwner(RedirectionBitmap, -1LL, a2);
    }
  }
  return v3;
}
