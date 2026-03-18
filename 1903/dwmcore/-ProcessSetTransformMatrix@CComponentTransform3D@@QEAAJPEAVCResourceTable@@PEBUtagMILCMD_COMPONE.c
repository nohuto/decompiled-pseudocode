/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1800CA060
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform3D::ProcessSetTransformMatrix(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339018)(
           (char *)this + SDWORD2(xmmword_180339018),
           &CComponentTransform3D::sc_TransformMatrix,
           (char *)a3 + 8);
}
