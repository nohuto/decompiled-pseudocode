/*
 * XREFs of KsepStringFree @ 0x14070D2C4
 * Callers:
 *     KsepLoadShimProvider @ 0x1402B6E70 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1402B7350 (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x140709B34 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x14070AAFC (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14070CFC0 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x14070D0B4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070D218 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14071AD10 (KseAddHardwareId.c)
 *     KsepCacheDeviceInsertData @ 0x14074CB80 (KsepCacheDeviceInsertData.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14074D0CC (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x14074D390 (KsepCacheDeviceFree.c)
 *     KseSetDeviceFlags @ 0x140882A50 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882F38 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140884164 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140884444 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140154098 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x14030E410 (RtlAssert.c)
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
