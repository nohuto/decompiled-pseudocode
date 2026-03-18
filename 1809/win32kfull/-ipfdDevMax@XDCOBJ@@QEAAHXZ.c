/*
 * XREFs of ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C029E390
 * Callers:
 *     GreDescribePixelFormat @ 0x1C029E480 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C029E5D0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C029E3B8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMax(XDCOBJ *this)
{
  __int16 v1; // dx

  v1 = *(_WORD *)(*(_QWORD *)this + 2096LL);
  if ( v1 < 0 )
    return XDCOBJ::ipfdDevMaxGet(this);
  else
    return (unsigned int)v1;
}
