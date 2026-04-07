/*
 * XREFs of ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x1800408F0
 * Callers:
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800407B4 (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180022D7C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAccentAcrylicBlurBehind *__fastcall CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  __int64 v1; // rcx
  CAccentAcrylicBlurBehind *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)v1 = &CAccentAcrylicBlurBehind::`vftable';
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_DWORD *)(v1 + 336) = 0;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  result = (CAccentAcrylicBlurBehind *)v1;
  *(_DWORD *)(v1 + 368) = 0;
  return result;
}
