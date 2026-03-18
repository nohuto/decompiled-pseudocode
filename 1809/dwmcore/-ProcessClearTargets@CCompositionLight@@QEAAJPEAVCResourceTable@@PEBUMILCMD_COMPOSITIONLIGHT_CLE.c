/*
 * XREFs of ?ProcessClearTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@Z @ 0x180066698
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionLight::ProcessClearTargets(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONLIGHT_CLEARTARGETS *a3)
{
  return CCompositionLight::RemoveAllTargets(this, 0LL);
}
