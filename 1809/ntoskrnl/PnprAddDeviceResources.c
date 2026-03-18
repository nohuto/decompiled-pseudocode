/*
 * XREFs of PnprAddDeviceResources @ 0x1408342D0
 * Callers:
 *     <none>
 * Callees:
 *     PnprAddMemoryResources @ 0x140834348 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140834540 (PnprAddProcessorResources.c)
 *     PnprIsMemoryDevice @ 0x1408350B8 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14083516C (PnprIsProcessorDevice.c)
 */

__int64 __fastcall PnprAddDeviceResources(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h]
  unsigned int v7; // [rsp+38h] [rbp+10h]

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int8)PnprIsMemoryDevice(v2) )
    return PnprAddMemoryResources(v2, v3 + 24);
  if ( (unsigned __int8)PnprIsProcessorDevice(v2) )
    return PnprAddProcessorResources(v5, v7, v6, v3 + 16);
  return 0LL;
}
