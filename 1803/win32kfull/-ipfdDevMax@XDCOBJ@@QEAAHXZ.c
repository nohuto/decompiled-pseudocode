/*
 * XREFs of ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C028A648
 * Callers:
 *     GreDescribePixelFormat @ 0x1C028A72C (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C028A850 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C028A670 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMax(XDCOBJ *this)
{
  __int16 v1; // dx

  v1 = *(_WORD *)(*(_QWORD *)this + 2480LL);
  if ( v1 < 0 )
    return XDCOBJ::ipfdDevMaxGet(this);
  else
    return (unsigned int)v1;
}
