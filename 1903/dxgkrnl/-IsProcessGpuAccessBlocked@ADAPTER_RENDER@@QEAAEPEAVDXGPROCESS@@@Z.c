/*
 * XREFs of ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00E9944
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EC990 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01301C8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 * Callees:
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C000654C (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_RENDER::IsProcessGpuAccessBlocked(VIDSCH_EXPORT **this, struct DXGPROCESS *a2)
{
  if ( *((_BYTE *)this[2] + 185) )
    return 0;
  else
    return VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(this[65], this[66], a2);
}
