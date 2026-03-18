/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C000F2F0
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000EAD0 (NtGdiCreateRectRgn.c)
 *     GreSetRectRgn @ 0x1C000F200 (GreSetRectRgn.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001B2B0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreCreateRectRgn @ 0x1C012F350 (GreCreateRectRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::vOrder(ERECTL *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)this > v2 )
  {
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 2) = v1;
  }
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  if ( v3 > v4 )
  {
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 3) = v3;
  }
}
