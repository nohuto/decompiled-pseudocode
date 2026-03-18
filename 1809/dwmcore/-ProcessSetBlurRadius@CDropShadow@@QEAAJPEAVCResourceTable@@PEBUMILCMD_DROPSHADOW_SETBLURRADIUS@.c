/*
 * XREFs of ?ProcessSetBlurRadius@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETBLURRADIUS@@@Z @ 0x180077590
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetBlurRadius(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETBLURRADIUS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306E70)(
           (char *)this + SDWORD2(xmmword_180306E70),
           &CDropShadow::sc_BlurRadius,
           (char *)a3 + 8);
}
