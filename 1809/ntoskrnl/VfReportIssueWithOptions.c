/*
 * XREFs of VfReportIssueWithOptions @ 0x14030AE18
 * Callers:
 *     VfCheckImageCompliance @ 0x1409271A4 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409274A0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140927548 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409275EC (VfCheckPoolType.c)
 *     ADD_MAP_REGISTERS @ 0x14092917C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140929288 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140929324 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409293B8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x14092944C (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1409294E0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140929580 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140929614 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409296A0 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140929720 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x14092A430 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14092A770 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x14092AB00 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x14092B360 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14092B6F0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14092BAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092BC70 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14092BE70 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x14092C9A0 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x14092CE08 (ViCheckPadding.c)
 *     ViCheckTag @ 0x14092CFBC (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x14092D248 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x14092D374 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x14092D868 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x14092DA20 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x14092DB34 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x14092E13C (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14092E59C (ViReleaseDmaAdapter.c)
 *     VfDeadlockAcquireResource @ 0x14093B514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14093C260 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x14093C74C (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x14093CAA8 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x14093D948 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14093DAE4 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x1402EC990 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x140309A4C (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x140935FA8 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1409360D8 (VfErrorStoreTriageInformation.c)
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
