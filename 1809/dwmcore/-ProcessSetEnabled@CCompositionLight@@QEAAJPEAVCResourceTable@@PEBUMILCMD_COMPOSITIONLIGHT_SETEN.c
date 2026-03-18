/*
 * XREFs of ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x18018FF10
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionLight::ProcessSetEnabled(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONLIGHT_SETENABLED *a3)
{
  *((_BYTE *)this + 154) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
