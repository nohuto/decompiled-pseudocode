/*
 * XREFs of ?ProcessSetBaselineOrigin@CCompositionGlyphRun@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONGLYPHRUN_SETBASELINEORIGIN@@@Z @ 0x1801CF7C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionGlyphRun::ProcessSetBaselineOrigin(
        CCompositionGlyphRun *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONGLYPHRUN_SETBASELINEORIGIN *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338308)(
           (char *)this + SDWORD2(xmmword_180338308),
           &CCompositionGlyphRun::sc_BaselineOrigin,
           (char *)a3 + 8);
}
