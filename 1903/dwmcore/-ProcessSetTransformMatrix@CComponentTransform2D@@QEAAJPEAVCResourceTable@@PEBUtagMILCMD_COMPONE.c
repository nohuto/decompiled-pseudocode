/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x1800C8838
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::ProcessSetTransformMatrix(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803391D8)(
           (char *)this + SDWORD2(xmmword_1803391D8),
           &CComponentTransform2D::sc_TransformMatrix,
           (char *)a3 + 8);
}
