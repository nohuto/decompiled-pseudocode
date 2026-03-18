/*
 * XREFs of ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0148518
 * Callers:
 *     NtGdiFrameRgn @ 0x1C01467C0 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0148050 (NtGdiFillRgn.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00E2FF8 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
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
