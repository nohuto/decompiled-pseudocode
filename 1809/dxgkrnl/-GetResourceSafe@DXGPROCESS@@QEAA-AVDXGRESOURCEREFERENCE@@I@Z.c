/*
 * XREFs of ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00212B0
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C0105790 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0105F90 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     DxgkPinDirectFlipResources @ 0x1C013F0D0 (DxgkPinDirectFlipResources.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C01D8920 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C01D91E4 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C01D961C (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C01DA690 (DxgkGetResourcePresentPrivateDriverData.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
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

  v3 = a1 + 208;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 208));
  v7 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 248) )
  {
    v8 = *(_QWORD *)(a1 + 232);
    v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
    if ( ((a3 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
    {
      v10 = v9 & 0x1F;
      if ( (_BYTE)v10 == 4 )
      {
        v12 = *(struct DXGRESOURCE **)(v8 + 16LL * (unsigned int)v7);
        goto LABEL_8;
      }
      v11 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v11 + 24) = 316LL;
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
