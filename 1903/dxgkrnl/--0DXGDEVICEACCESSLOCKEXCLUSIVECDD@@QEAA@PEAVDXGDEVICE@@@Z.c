/*
 * XREFs of ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00C6170 (DxgkDisplayOnOff.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CC5E0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00EEBA0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0130D60 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C0131BD0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0131CB0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0146750 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014A0E0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C016EC30 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01F1820 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202490 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020B720 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020BAE0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C020C030 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C020C5B0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C020C790 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021A720 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

DXGDEVICEACCESSLOCKEXCLUSIVECDD *__fastcall DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
        DXGDEVICEACCESSLOCKEXCLUSIVECDD *this,
        struct DXGDEVICE *a2)
{
  struct _KEVENT *v3; // rbx
  __int64 v4; // rbx
  __int64 v6; // rcx
  char v7; // si

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 1;
  v3 = (struct _KEVENT *)*((_QWORD *)a2 + 2);
  if ( !KeReadStateEvent(v3 + 4) )
    KeWaitForSingleObject(&v3[4], Executive, 0, 0, 0LL);
  v4 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 96LL));
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
    if ( *(_DWORD *)(v6 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v6, 0xFFFFFFFFLL);
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v6, &EventBlockThread);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 104), 1u);
    if ( v7 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  return this;
}
