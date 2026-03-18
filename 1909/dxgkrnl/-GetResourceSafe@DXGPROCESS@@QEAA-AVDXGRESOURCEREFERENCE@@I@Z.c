/*
 * XREFs of ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D5C
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F09B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F2868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C010C5B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C010E9B0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z @ 0x1C01537A0 (-DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C02073E4 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0207CA8 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02080F8 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C02091F0 (DxgkGetResourcePresentPrivateDriverData.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceSafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DXGRESOURCE *v12; // rdx

  v3 = a1 + 184;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 184));
  v7 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 224) )
  {
    v8 = *(_QWORD *)(a1 + 208);
    v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
    if ( ((a3 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
    {
      v10 = v9 & 0x1F;
      if ( (_BYTE)v10 == 4 )
      {
        v12 = *(struct DXGRESOURCE **)(v8 + 16LL * (unsigned int)v7);
        goto LABEL_8;
      }
      v11 = WdLogNewEntry5_WdError(v10, 2LL * (unsigned int)v7, v8);
      *(_QWORD *)(v11 + 24) = 267LL;
      WdLogEvent5_WdError(v11);
    }
  }
  v12 = 0LL;
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v12);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
