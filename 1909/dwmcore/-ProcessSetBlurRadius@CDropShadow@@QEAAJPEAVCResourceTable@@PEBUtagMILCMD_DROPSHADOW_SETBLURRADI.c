/*
 * XREFs of ?ProcessSetBlurRadius@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETBLURRADIUS@@@Z @ 0x1800D9398
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetBlurRadius(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETBLURRADIUS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803380D8)(
           (char *)this + SDWORD2(xmmword_1803380D8),
           &CDropShadow::sc_BlurRadius,
           (char *)a3 + 8);
}
