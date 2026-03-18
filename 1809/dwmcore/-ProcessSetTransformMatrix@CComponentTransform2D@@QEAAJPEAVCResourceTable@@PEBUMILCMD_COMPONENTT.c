/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x18006AD38
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::ProcessSetTransformMatrix(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803051D8)(
           (char *)this + SDWORD2(xmmword_1803051D8),
           &CComponentTransform2D::sc_TransformMatrix,
           (char *)a3 + 8);
}
