/*
 * XREFs of ?CopyContentProtectionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01C5F00
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00158A0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyContentProtectionDriverName(char **this, char *a2)
{
  if ( a2 )
    *(_WORD *)a2 = 0;
  return RtlStringCbCopyNW(a2, (__int64)a2, this[54], *((unsigned __int16 *)this + 212));
}
