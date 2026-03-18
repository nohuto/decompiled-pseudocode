/*
 * XREFs of ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00C2180 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00EF6FC (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0628 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F09B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F2868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3A54 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C010C5B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C010E9B0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0116200 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     DxgGetHandleDataCB @ 0x1C01375C0 (DxgGetHandleDataCB.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C013D630 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z @ 0x1C01537A0 (-DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0153F58 (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C02073E4 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0207CA8 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02080F8 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C02091F0 (DxgkGetResourcePresentPrivateDriverData.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0225F14 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022D250 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     DxgEnumHandleChildrenCB @ 0x1C0231090 (DxgEnumHandleChildrenCB.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C023F690 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C0240334 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C0264B98 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273F2C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 */

void __fastcall DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(struct _EX_RUNDOWN_REF **this, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _KTHREAD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax

  v2 = *this;
  if ( v2 )
    ExReleaseRundownProtection(v2 + 9);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v2, a2) + 247) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4, v3);
      *(_QWORD *)(v6 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v6);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v11 = *ThreadWin32Thread;
          if ( v11 )
          {
            if ( *(_QWORD *)(v11 + 80) )
            {
              v12 = KeGetCurrentThread();
              if ( !v12 )
              {
                v13 = WdLogNewEntry5_WdAssertion(v10, v9);
                *(_QWORD *)(v13 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v13);
              }
              v16 = PsGetCurrentProcessSessionId(v10, v9);
              if ( v16
                && (unsigned int)PsGetThreadSessionId(v12) == v16
                && !IsThreadCrossSessionAttached()
                && (v17 = PsGetThreadWin32Thread(v12)) != 0
                && *(_QWORD *)v17 )
              {
                v18 = *(_QWORD *)(*(_QWORD *)v17 + 80LL);
              }
              else
              {
                v18 = 0LL;
              }
              if ( *(_DWORD *)(v18 + 136) )
              {
                v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
                v19[3] = 275LL;
                v19[4] = 38LL;
                v19[5] = *(int *)(v18 + 136);
                v19[6] = 0LL;
                v19[7] = 0LL;
                WdLogEvent5_WdCriticalError(v19);
              }
            }
          }
        }
      }
    }
  }
}
