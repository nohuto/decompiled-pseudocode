/*
 * XREFs of DpiFdoGetAdapterUniqueGUID @ 0x1C0147F00
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DpiGdoSetupGdiParameters @ 0x1C014778C (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetAdapterUniqueGUID(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 4736) )
    return v1 + 4728;
  else
    return 0LL;
}
