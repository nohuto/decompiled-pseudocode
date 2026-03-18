/*
 * XREFs of KsepStringFree @ 0x14070F0A4
 * Callers:
 *     KsepLoadShimProvider @ 0x1402B6BD0 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1402B70B0 (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x14070B914 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x14070C8DC (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14070EDA0 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x14070EE94 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070EFF8 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14071CB00 (KseAddHardwareId.c)
 *     KsepCacheDeviceInsertData @ 0x14074D610 (KsepCacheDeviceInsertData.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14074DB5C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x14074DE20 (KsepCacheDeviceFree.c)
 *     KseSetDeviceFlags @ 0x140882150 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882638 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140883864 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140883B44 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140154738 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x14030DE60 (RtlAssert.c)
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
