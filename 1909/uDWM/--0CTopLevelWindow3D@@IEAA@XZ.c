/*
 * XREFs of ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180026284
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800263B0 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180022D7C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v1; // rcx
  CTopLevelWindow3D *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v1 + 280) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)v1 = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *(_BYTE *)(v1 + 290) = 0;
  *(_QWORD *)(v1 + 456) = 0LL;
  *(_QWORD *)(v1 + 464) = 0LL;
  *(_QWORD *)(v1 + 472) = 0LL;
  result = (CTopLevelWindow3D *)v1;
  *(_BYTE *)(v1 + 480) = 0;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  return result;
}
