/*
 * XREFs of ?ProcessSetOpacity@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETOPACITY@@@Z @ 0x180077538
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetOpacity(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETOPACITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306EA8)(
           (char *)this + SDWORD2(xmmword_180306EA8),
           &CDropShadow::sc_Opacity,
           (char *)a3 + 8);
}
