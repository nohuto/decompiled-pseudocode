/*
 * XREFs of ??0CDrawListBitmap@@QEAA@XZ @ 0x180063E40
 * Callers:
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180025F0C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180027A70 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
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
