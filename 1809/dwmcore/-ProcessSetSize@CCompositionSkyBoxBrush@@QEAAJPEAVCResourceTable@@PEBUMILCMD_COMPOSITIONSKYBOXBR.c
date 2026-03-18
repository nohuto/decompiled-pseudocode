/*
 * XREFs of ?ProcessSetSize@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETSIZE@@@Z @ 0x1801913C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetSize(
        CCompositionSkyBoxBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306E00)(
           (char *)this + SDWORD2(xmmword_180306E00),
           &CCompositionSkyBoxBrush::sc_Size,
           (char *)a3 + 8);
}
