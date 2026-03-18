/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x1C000CE9C
 * Callers:
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000260C (XilCommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0016D20 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0017360 (XilEndpoint_FreeStreamContextArray.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C0018BF0 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C00193E0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019580 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C001A0A0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BE60 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     TR_AcquireSecureSegments @ 0x1C0027D40 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C002867C (TR_CreateSecureObject.c)
 *     TR_WdfEvtCleanupCallback @ 0x1C00299F0 (TR_WdfEvtCleanupCallback.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x1C0040D00 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0040E60 (Crashdump_UcxEvtGetDumpData.c)
 *     XilCoreCommand_FreeResources @ 0x1C0047404 (XilCoreCommand_FreeResources.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0048620 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreUsbDevice_FreeResources @ 0x1C0048ABC (XilCoreUsbDevice_FreeResources.c)
 * Callees:
 *     CommonBuffer_ReleaseSecureBuffer @ 0x1C00025D8 (CommonBuffer_ReleaseSecureBuffer.c)
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x1C0048274 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v4; // rbx

  v2 = a2[20];
  switch ( v2 )
  {
    case 1:
      v4 = a1 + 88;
      *(_BYTE *)(a1 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
      XilCoreCommonBuffer_ReleaseBufferInternal(v4, a2);
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 16), *(_BYTE *)(v4 + 25));
      break;
    case 2:
      ExFreePoolWithTag(a2, 0x49434858u);
      break;
    case 3:
      CommonBuffer_ReleaseSecureBuffer(a1, a2);
      break;
  }
}
