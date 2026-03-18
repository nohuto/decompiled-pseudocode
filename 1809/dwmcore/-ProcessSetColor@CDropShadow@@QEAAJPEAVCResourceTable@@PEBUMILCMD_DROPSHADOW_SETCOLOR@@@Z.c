/*
 * XREFs of ?ProcessSetColor@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETCOLOR@@@Z @ 0x180077564
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetColor(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306E38)(
           (char *)this + SDWORD2(xmmword_180306E38),
           &CDropShadow::sc_Color,
           (char *)a3 + 8);
}
