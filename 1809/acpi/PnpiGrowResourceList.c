/*
 * XREFs of PnpiGrowResourceList @ 0x1C0099744
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_dL @ 0x1C0016B38 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016C0C (WPP_RECORDER_SF_ddL.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C0098B84 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(const void **a1, int *a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v9; // esi
  int v10; // [rsp+20h] [rbp-38h]

  if ( *a1 && (v7 = *a2) != 0 )
  {
    v8 = 8 * v7;
    v9 = v7 + 8;
    WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, a3, 0x20u, v10);
    result = ACPIInternalGrowBuffer(a1, v8, v8 + 64);
    if ( (int)result < 0 )
      v9 = 0;
    *a2 = v9;
  }
  else
  {
    WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x1Fu, v10);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x52706341u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
    {
      *a2 = 8;
      memset(PoolWithTag, 0, 0x40uLL);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
