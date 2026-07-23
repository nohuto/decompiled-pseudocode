/*
 * XREFs of KsepStringFree @ 0x14067F30C
 * Callers:
 *     KsepLoadShimProvider @ 0x14029FC4C (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1402A0160 (KsepCacheHwIdFree.c)
 *     KsepDbFreeDriverShims @ 0x14067EC3C (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14067F018 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067F260 (KsepEngineGetShimsFromRegistry.c)
 *     KseShimDriverIoCallbacks @ 0x140681ABC (KseShimDriverIoCallbacks.c)
 *     KseAddHardwareId @ 0x140700268 (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140721E3C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x1407220F0 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x140722220 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x140848830 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140848CE4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140849ED4 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14084A1B4 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
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
