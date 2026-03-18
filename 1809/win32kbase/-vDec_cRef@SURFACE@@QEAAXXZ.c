/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001F994
 * Callers:
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C006D02C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     GreMakeBitmapNonStock @ 0x1C0043BC0 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int16 v3; // ax
  __int64 v4; // rcx

  HmgDecrementShareReferenceCountEx(this);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      v3 = *((_WORD *)this + 51);
      if ( (v3 & 0x400) != 0 )
      {
        v4 = *(_QWORD *)this;
        *((_WORD *)this + 51) = v3 & 0xFBFF;
        GreMakeBitmapNonStock(v4);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
