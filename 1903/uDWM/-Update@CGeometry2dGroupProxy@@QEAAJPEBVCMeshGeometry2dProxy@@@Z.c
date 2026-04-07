/*
 * XREFs of ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x1800B665C
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18009CD04 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18009E0C4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2dGroupProxy::Update(CGeometry2dGroupProxy *this, const struct CMeshGeometry2dProxy *a2)
{
  __int64 v2; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v4 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**(_QWORD **)(v2 + 16) + 992LL))(
           *(_QWORD *)(v2 + 16),
           *(unsigned int *)(v2 + 24),
           &v4,
           1LL);
}
