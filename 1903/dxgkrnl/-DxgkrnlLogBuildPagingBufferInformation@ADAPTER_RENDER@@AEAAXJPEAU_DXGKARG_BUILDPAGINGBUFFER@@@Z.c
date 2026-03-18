/*
 * XREFs of ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0100390
 * Callers:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C01000A0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(
        ADAPTER_RENDER *this,
        __int64 a2,
        struct _DXGKARG_BUILDPAGINGBUFFER *a3)
{
  DXGK_BUILDPAGINGBUFFER_OPERATION Operation; // eax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  SIZE_T TransferSize; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax

  Operation = a3->Operation;
  v5 = (int)a2;
  if ( Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v7[3] = v5;
    v7[4] = a3->Fill.FillSize;
    v7[5] = a3->UpdatePageTable.hProcess;
    v7[6] = a3->Transfer.Destination.SegmentId;
    this = (ADAPTER_RENDER *)a3->UpdatePageTable.NumPageTableEntries;
    v7[7] = this;
LABEL_5:
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v8);
    v9[3] = v5;
    v9[4] = a3->Transfer.hAllocation;
    v9[5] = a3->Transfer.TransferOffset;
    this = (ADAPTER_RENDER *)a3->Transfer.TransferSize;
    v9[6] = this;
LABEL_6:
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v8);
    v10[3] = v5;
    v10[4] = a3->Transfer.hAllocation;
    v10[5] = a3->Transfer.Source.SegmentId & 1;
    v10[6] = a3->Transfer.TransferOffset;
    TransferSize = a3->Transfer.TransferSize;
LABEL_7:
    v10[7] = TransferSize;
  }
  else if ( Operation == DXGK_OPERATION_FLUSH_TLB )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v6[3] = v5;
    v6[4] = a3->Transfer.TransferSize;
    v6[5] = a3->ReadPhysical.SegmentId;
    v6[6] = a3->Fill.FillSize;
  }
  else
  {
    v8 = 0x1C0000000uLL;
    switch ( Operation )
    {
      case DXGK_OPERATION_TRANSFER:
      case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
        v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        v10[3] = v5;
        v10[4] = a3->Transfer.hAllocation;
        v10[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        v10[6] = a3->Transfer.Destination.SegmentId;
        TransferSize = a3->Transfer.Destination.SegmentAddress.QuadPart;
        goto LABEL_7;
      case DXGK_OPERATION_FILL:
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        v16[3] = v5;
        v16[4] = a3->Transfer.hAllocation;
        v16[5] = a3->Transfer.Source.SegmentId;
        v16[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_DISCARD_CONTENT:
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        v13[3] = v5;
        v13[4] = a3->Transfer.hAllocation;
        v13[5] = a3->DiscardContent.SegmentId;
        v13[6] = a3->Transfer.TransferSize;
        break;
      case DXGK_OPERATION_READ_PHYSICAL:
      case DXGK_OPERATION_WRITE_PHYSICAL:
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        v17[3] = v5;
        v17[4] = a3->ReadPhysical.SegmentId;
        v17[5] = a3->Fill.FillSize;
        break;
      case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
      case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
        v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        v12[3] = v5;
        v12[4] = a3->Transfer.hAllocation;
        v12[5] = a3->Fill.FillSize;
        v12[6] = a3->Fill.FillPattern;
        break;
      case DXGK_OPERATION_VIRTUAL_TRANSFER:
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        v15[3] = v5;
        v15[4] = a3->Transfer.hAllocation;
        v15[5] = a3->MapApertureSegment.OffsetInPages;
        v15[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_VIRTUAL_FILL:
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        v14[3] = v5;
        v14[4] = a3->Transfer.hAllocation;
        v14[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
        goto LABEL_5;
      case DXGK_OPERATION_NOTIFY_RESIDENCY:
        goto LABEL_6;
      default:
        v18 = WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL);
        *(_QWORD *)(v18 + 24) = v5;
        *(_QWORD *)(v18 + 32) = a3->Operation;
        break;
    }
  }
}
