/*
 * XREFs of KsepStringFree @ 0x14067E16C
 * Callers:
 *     KsepLoadShimProvider @ 0x14029F95C (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x14029FE70 (KsepCacheHwIdFree.c)
 *     KsepDbFreeDriverShims @ 0x14067DA9C (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14067DE78 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x14067DF60 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067E0C0 (KsepEngineGetShimsFromRegistry.c)
 *     KseShimDriverIoCallbacks @ 0x14068091C (KseShimDriverIoCallbacks.c)
 *     KseAddHardwareId @ 0x1406FEFE8 (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140720BBC (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x140720E70 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x140720FA0 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1408475F0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140847AA4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140848C94 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140848F74 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F4C94 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1402EF760 (RtlAssert.c)
 */

void __fastcall KsepStringFree(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *a1 = 0LL;
      a1[1] = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = -1073740768;
    KsepHistoryErrors[2 * v3] = 197451;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Bu, 0LL);
  }
}
