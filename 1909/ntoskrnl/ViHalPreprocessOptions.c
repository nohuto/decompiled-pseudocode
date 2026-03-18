/*
 * XREFs of ViHalPreprocessOptions @ 0x14096C598
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x1409677FC (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140967908 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1409679A4 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140967A38 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140967ACC (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140967B60 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140967C00 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140967C94 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140967D20 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140967DA0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140968B50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140968E90 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x140969220 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140969BD0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140969F60 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14096A320 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14096A4E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14096A6E0 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x14096B210 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x14096B678 (ViCheckPadding.c)
 *     ViCheckTag @ 0x14096B82C (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x14096BAB8 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x14096BBE4 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x14096C290 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x14096C9A8 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14096CE08 (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140327014 (VfUtilDbgPrint.c)
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
