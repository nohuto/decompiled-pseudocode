/*
 * XREFs of ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023DF0
 * Callers:
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C02258A4 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 * Callees:
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceUnsafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DXGRESOURCE *v10; // rdx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 224) )
  {
    v5 = *(_QWORD *)(a1 + 208);
    v6 = (a3 >> 25) & 0x60;
    v7 = *(_DWORD *)(v5 + 16 * v4 + 8);
    if ( (_BYTE)v6 == (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60) && (v7 & 0x2000) == 0 && (v7 & 0x1F) != 0 )
    {
      v8 = v7 & 0x1F;
      if ( (_BYTE)v8 == 4 )
      {
        v10 = *(struct DXGRESOURCE **)(v5 + 16LL * (unsigned int)v4);
        goto LABEL_8;
      }
      v9 = WdLogNewEntry5_WdError(v8, 2LL * (unsigned int)v4, v6);
      *(_QWORD *)(v9 + 24) = 267LL;
      WdLogEvent5_WdError(v9);
    }
  }
  v10 = 0LL;
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v10);
  return a2;
}
