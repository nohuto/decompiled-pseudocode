/*
 * XREFs of VidMmInitializeAdapter @ 0x1C0017BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008E620 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmInitializeAdapter(struct ADAPTER_RENDER *a1)
{
  return VidMmiInit(a1);
}
