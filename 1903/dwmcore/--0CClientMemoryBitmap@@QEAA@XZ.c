/*
 * XREFs of ??0CClientMemoryBitmap@@QEAA@XZ @ 0x180039BAC
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180039930 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180039C20 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  CSystemMemoryBitmap::CSystemMemoryBitmap(this);
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CSystemMemoryBitmap::`vftable';
  return this;
}
