/*
 * XREFs of DpiGetAdapterDeviceIds @ 0x1C0130054
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetAdapterDeviceIds(__int64 a1, _DWORD *a2)
{
  unsigned int *v2; // r8
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 64);
  *a2 = v2[279];
  a2[1] = v2[280];
  a2[2] = v2[281];
  a2[3] = v2[282];
  a2[4] = v2[283];
  result = v2[278];
  a2[5] = result;
  return result;
}
