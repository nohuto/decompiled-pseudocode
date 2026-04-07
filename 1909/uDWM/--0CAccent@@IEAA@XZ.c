/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x180029938
 * Callers:
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180029898 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180022D7C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  __int64 v1; // rcx
  CAccent *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)v1 = &CAccent::`vftable';
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_WORD *)(v1 + 397) = 0;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_BYTE *)(v1 + 396) = 0;
  *(_QWORD *)(v1 + 416) = 0LL;
  result = (CAccent *)v1;
  *(_DWORD *)(v1 + 380) = 0xFFFFFF;
  return result;
}
