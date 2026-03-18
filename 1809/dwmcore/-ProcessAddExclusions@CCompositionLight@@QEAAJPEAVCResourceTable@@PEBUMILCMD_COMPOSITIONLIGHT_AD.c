/*
 * XREFs of ?ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@PEBXI@Z @ 0x18018FEE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800A2AD8 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CCompositionLight::ProcessAddExclusions(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS *a3,
        unsigned int *a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  return CCompositionLight::AddTargets((__int64)this, a2, *((_DWORD *)a3 + 2), a4, v5, 1u);
}
