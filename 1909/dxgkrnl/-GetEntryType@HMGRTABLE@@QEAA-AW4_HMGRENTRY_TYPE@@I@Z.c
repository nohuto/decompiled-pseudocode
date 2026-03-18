/*
 * XREFs of ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C013D5F4
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C013D1F0 (DxgkShareObjectsInternal.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D1E0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C02515CC (DxgkCreateBundleObjectInternal.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C0264B98 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C028DFE4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C028ED88 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::GetEntryType(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 16) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v5 + 24) = 217LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(_DWORD *)(*(_QWORD *)a1 + 16 * v3 + 8) & 0x1F;
}
