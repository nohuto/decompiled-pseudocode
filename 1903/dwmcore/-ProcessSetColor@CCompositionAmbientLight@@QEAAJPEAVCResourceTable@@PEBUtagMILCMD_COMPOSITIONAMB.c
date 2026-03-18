/*
 * XREFs of ?ProcessSetColor@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR@@@Z @ 0x1800D84E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::ProcessSetColor(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B0F0)(
           (char *)this + SDWORD2(xmmword_18033B0F0),
           &CCompositionAmbientLight::sc_Color,
           (char *)a3 + 8);
}
