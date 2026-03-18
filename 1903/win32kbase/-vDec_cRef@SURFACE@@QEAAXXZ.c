/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00BDB10
 * Callers:
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B3478 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     GreMakeBitmapNonStock @ 0x1C00833B0 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int16 v3; // ax
  unsigned __int64 v4; // rcx

  HmgDecrementShareReferenceCountEx(this, 0LL);
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
