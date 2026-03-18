/*
 * XREFs of ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0147F50
 * Callers:
 *     NtGdiSetPixel @ 0x1C01468C0 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 *     NtGdiExtFloodFill @ 0x1C02B25B0 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::bOffsetAdd(ERECTL *this, const struct _POINTL *a2, int a3)
{
  __int64 x; // r8
  __int64 y; // r8

  if ( a3 )
  {
    x = a2->x;
    if ( (unsigned __int64)(x + *(int *)this + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    if ( (unsigned __int64)(x + *((int *)this + 2) + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    y = a2->y;
    if ( (unsigned __int64)(y + *((int *)this + 1) + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(y + *((int *)this + 3) + 0x80000000LL) > 0xFFFFFFFF )
    {
      return 0LL;
    }
  }
  *(_DWORD *)this += a2->x;
  *((_DWORD *)this + 2) += a2->x;
  *((_DWORD *)this + 1) += a2->y;
  *((_DWORD *)this + 3) += a2->y;
  return 1LL;
}
