/*
 * XREFs of VfReportIssueWithOptions @ 0x140328B08
 * Callers:
 *     VfCheckImageCompliance @ 0x1409656C0 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409659BC (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140965A64 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x14097BB90 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x14097BEEC (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x14097CD98 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14097CF34 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x14030B150 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1409755D4 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140975790 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  int v10; // ebp
  int v11; // r10d

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = a2;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (v11 & 8) == 0 && (VfOptionFlags & 0x200) == 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
          DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
          switch ( (_BYTE)Response )
          {
            case 'B':
              goto LABEL_15;
            case 'I':
              return;
            case 'R':
              goto LABEL_16;
            case 'W':
              goto LABEL_14;
            case 'b':
LABEL_15:
              VfErrorStoreTriageInformation(a1, v10, v8, v7, a5);
              __debugbreak();
            case 'i':
              return;
          }
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_16:
        *v6 = 0;
      }
    }
    else
    {
      VerifierBugCheckIfAppropriate(a1, a2, a3, a4, a5);
    }
  }
}
