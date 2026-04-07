/*
 * XREFs of ??0CText@@AEAA@XZ @ 0x180037464
 * Callers:
 *     ?Create@CText@@SAJPEAPEAV1@@Z @ 0x180036E40 (-Create@CText@@SAJPEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180036EF0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180022E18 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 */

CText *__fastcall CText::CText(CText *this)
{
  CRenderDataVisual::CRenderDataVisual(this);
  *((_QWORD *)this + 36) = 0LL;
  *(_QWORD *)this = &CText::`vftable';
  memset_0((char *)this + 296, 0, 0x5CuLL);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 102) = -1;
  *((_DWORD *)this + 103) = -1;
  *((_QWORD *)this + 52) = 0x3FF0000000000000LL;
  return this;
}
