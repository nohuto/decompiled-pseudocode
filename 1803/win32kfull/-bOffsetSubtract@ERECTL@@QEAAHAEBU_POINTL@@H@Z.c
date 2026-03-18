/*
 * XREFs of ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C023B610
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::bOffsetSubtract(ERECTL *this, const struct _POINTL *a2, int a3)
{
  __int64 x; // r8
  __int64 y; // r8

  if ( a3 )
  {
    x = a2->x;
    if ( (unsigned __int64)(*(int *)this - x + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    if ( (unsigned __int64)(*((int *)this + 2) - x + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    y = a2->y;
    if ( (unsigned __int64)(*((int *)this + 1) - y + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(*((int *)this + 3) - y + 0x80000000LL) > 0xFFFFFFFF )
    {
      return 0LL;
    }
  }
  *(_DWORD *)this -= a2->x;
  *((_DWORD *)this + 2) -= a2->x;
  *((_DWORD *)this + 1) -= a2->y;
  *((_DWORD *)this + 3) -= a2->y;
  return 1LL;
}
