/*
 * XREFs of ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010C44
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00F4BC8 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C01F5890 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C01F6B9C (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C01F7168 (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C01F7C0C (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 * Callees:
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

DXGALLOCATIONREFERENCE *__fastcall DXGPROCESS::GetAllocationUnsafe(
        __int64 a1,
        DXGALLOCATIONREFERENCE *a2,
        unsigned int a3)
{
  __int64 v4; // rax
  struct DXGALLOCATION *v5; // rdx
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 248) )
  {
    v7 = *(_QWORD *)(a1 + 232);
    v8 = *(_DWORD *)(v7 + 16 * v4 + 8);
    if ( ((a3 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v4 + 8) & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      v9 = v8 & 0x1F;
      if ( (_BYTE)v9 == 5 )
      {
        v5 = *(struct DXGALLOCATION **)(v7 + 16LL * (unsigned int)v4);
        goto LABEL_3;
      }
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = 316LL;
      WdLogEvent5_WdError(v10);
    }
  }
  v5 = 0LL;
LABEL_3:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(a2, v5);
  return a2;
}
