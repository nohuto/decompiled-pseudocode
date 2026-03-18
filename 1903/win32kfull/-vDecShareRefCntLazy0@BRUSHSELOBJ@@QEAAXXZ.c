/*
 * XREFs of ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0147768
 * Callers:
 *     NtGdiFrameRgn @ 0x1C0145A10 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C01472A0 (NtGdiFillRgn.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0108F48 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::vDecShareRefCntLazy0(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)this);
    *(_QWORD *)this = 0LL;
  }
}
