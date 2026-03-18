/*
 * XREFs of ?ProcessSetBaselineOrigin@CCompositionGlyphRun@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONGLYPHRUN_SETBASELINEORIGIN@@@Z @ 0x1801D0F60
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionGlyphRun::ProcessSetBaselineOrigin(
        CCompositionGlyphRun *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONGLYPHRUN_SETBASELINEORIGIN *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B208)(
           (char *)this + SDWORD2(xmmword_18033B208),
           &CCompositionGlyphRun::sc_BaselineOrigin,
           (char *)a3 + 8);
}
