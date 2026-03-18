/*
 * XREFs of ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0021394
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C01F5890 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 * Callees:
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceUnsafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGRESOURCE *v9; // rdx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 248) )
  {
    v5 = *(_QWORD *)(a1 + 232);
    v6 = *(_DWORD *)(v5 + 16 * v4 + 8);
    if ( ((a3 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60) && (v6 & 0x2000) == 0 && (v6 & 0x1F) != 0 )
    {
      v7 = v6 & 0x1F;
      if ( (_BYTE)v7 == 4 )
      {
        v9 = *(struct DXGRESOURCE **)(v5 + 16LL * (unsigned int)v4);
        goto LABEL_8;
      }
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = 316LL;
      WdLogEvent5_WdError(v8);
    }
  }
  v9 = 0LL;
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v9);
  return a2;
}
