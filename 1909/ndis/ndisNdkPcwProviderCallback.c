/*
 * XREFs of ndisNdkPcwProviderCallback @ 0x1C0100340
 * Callers:
 *     <none>
 * Callees:
 *     ndisNdkPcwAddCounter @ 0x1C00AB920 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00ABAA8 (ndisNdkPcwEnumerateInstances.c)
 *     ndisNdkPcwCollectData @ 0x1C010037C (ndisNdkPcwCollectData.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C011A114 (ndisNdkPcwRemoveCounter.c)
 */

__int64 __fastcall ndisNdkPcwProviderCallback(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return ndisNdkPcwAddCounter(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return ndisNdkPcwRemoveCounter(a2);
  v3 = v2 - 1;
  if ( !v3 )
    return ndisNdkPcwEnumerateInstances(*(PPCW_BUFFER *)(a2 + 24));
  if ( v3 == 1 )
    return ndisNdkPcwCollectData(a2);
  return 0LL;
}
