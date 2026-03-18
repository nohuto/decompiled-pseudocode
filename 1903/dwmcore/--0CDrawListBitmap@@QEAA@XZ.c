/*
 * XREFs of ??0CDrawListBitmap@@QEAA@XZ @ 0x1800C0FD0
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073910 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180073B38 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 * Callees:
 *     <none>
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  return this;
}
