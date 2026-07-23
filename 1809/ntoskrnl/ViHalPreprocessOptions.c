/*
 * XREFs of ViHalPreprocessOptions @ 0x14092ED28
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x14092A17C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14092A288 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x14092A324 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14092A3B8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x14092A44C (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x14092A4E0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14092A580 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x14092A614 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x14092A6A0 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14092A720 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14092B770 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x14092BB00 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14092C6F0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14092CAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092CC70 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14092CE70 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x14092D9A0 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x14092DE08 (ViCheckPadding.c)
 *     ViCheckTag @ 0x14092DFBC (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x14092E248 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x14092E374 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x14092EA20 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x14092F13C (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14092F59C (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 */

__int64 ViHalPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  int v7; // ebx
  const CHAR *v8; // rdi
  __int64 result; // rax

  v7 = a3 & 0x10000000;
  v8 = a2;
  if ( (a3 & 0x10000000) != 0 )
    a3 = (unsigned int)a3 & 0xEFFFFFFF;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    if ( (unsigned int)a3 >= 0x26 )
    {
      result = 4LL;
    }
    else
    {
      a2 = (const char *)ViHalDefaultActions;
      result = *((unsigned int *)ViHalDefaultActions + a3);
    }
    *a1 = result;
  }
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** VF: ");
    if ( v7 )
      DbgPrintEx(0x65u, 0, v8, a5, a6);
    else
      DbgPrintEx(0x65u, 0, v8, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
