/*
 * XREFs of ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02B4A50
 * Callers:
 *     GreDescribePixelFormat @ 0x1C02B4BA8 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02B4D50 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B4A78 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMax(XDCOBJ *this)
{
  __int16 v1; // dx

  v1 = *(_WORD *)(*(_QWORD *)this + 2072LL);
  if ( v1 < 0 )
    return XDCOBJ::ipfdDevMaxGet(this);
  else
    return (unsigned int)v1;
}
