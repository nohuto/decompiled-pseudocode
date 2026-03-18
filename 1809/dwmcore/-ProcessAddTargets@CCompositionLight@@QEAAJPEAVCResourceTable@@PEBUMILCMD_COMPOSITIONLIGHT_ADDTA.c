/*
 * XREFs of ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x18009F8F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800A2AD8 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CCompositionLight::ProcessAddTargets(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONLIGHT_ADDTARGETS *a3,
        const void *a4)
{
  return CCompositionLight::AddTargets(this, a2, *((unsigned int *)a3 + 2), a4);
}
