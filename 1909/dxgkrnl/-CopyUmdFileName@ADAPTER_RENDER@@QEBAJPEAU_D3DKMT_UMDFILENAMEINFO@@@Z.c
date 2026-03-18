/*
 * XREFs of ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00EBDF4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0006790 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C00EBE3C (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C00EBE60 (-GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyUmdFileName(ADAPTER_RENDER *this, struct _D3DKMT_UMDFILENAMEINFO *a2)
{
  enum _KMTUMDVERSION Version; // edx
  const struct _UNICODE_STRING *UMDFileName; // rax
  __int64 v5; // rdx
  unsigned __int16 *v6; // rcx
  __int64 v7; // r8

  Version = a2->Version;
  if ( (unsigned int)Version >= NUM_KMTUMDVERSIONS )
    return 3221225485LL;
  UMDFileName = ADAPTER_RENDER::GetUMDFileName(this, Version);
  if ( (unsigned int)IsNullUmdDriver(UMDFileName) )
    return 3221225485LL;
  else
    return RtlStringCbCopyNW((char *)a2->UmdFileName, v5, *(char **)(v7 + 8), *v6);
}
