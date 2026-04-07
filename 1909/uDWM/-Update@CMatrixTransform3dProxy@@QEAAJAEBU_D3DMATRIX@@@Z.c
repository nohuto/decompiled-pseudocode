/*
 * XREFs of ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800B6400
 * Callers:
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A1024 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A13A8 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransform3dProxy::Update(CMatrixTransform3dProxy *this, const struct _D3DMATRIX *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _D3DMATRIX *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                              + 1024LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
