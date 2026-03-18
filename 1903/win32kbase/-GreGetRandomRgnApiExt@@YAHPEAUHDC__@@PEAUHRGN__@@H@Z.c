/*
 * XREFs of ?GreGetRandomRgnApiExt@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C01228E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRandomRgnApiExt(HDC a1, HRGN a2, unsigned int a3)
{
  int RandomRgnSupported; // eax
  unsigned int v7; // r9d

  RandomRgnSupported = IsGreGetRandomRgnSupported();
  v7 = 0;
  if ( RandomRgnSupported >= 0 )
    return (unsigned int)GreGetRandomRgn(a1, a2, a3, 0LL);
  return v7;
}
