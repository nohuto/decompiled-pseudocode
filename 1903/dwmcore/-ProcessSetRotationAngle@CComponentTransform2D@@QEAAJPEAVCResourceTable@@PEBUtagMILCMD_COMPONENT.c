/*
 * XREFs of ?ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@@Z @ 0x1800CC050
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::ProcessSetRotationAngle(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339210)(
           (char *)this + SDWORD2(xmmword_180339210),
           &CComponentTransform2D::sc_RotationAngle,
           (char *)a3 + 8);
}
