/*
 * XREFs of ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0055B3C
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C004CE40 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0055BA4 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     NtGdiGetPixel @ 0x1C005E7C0 (NtGdiGetPixel.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00E3444 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

struct REGION *__fastcall DC::prgnRao(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 147) )
    return (struct REGION *)*((_QWORD *)v1 + 145);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 145);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 145);
  return result;
}
