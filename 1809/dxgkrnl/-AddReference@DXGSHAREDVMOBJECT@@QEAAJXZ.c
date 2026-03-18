/*
 * XREFs of ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E7A58
 * Callers:
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9080 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022F710 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C022F970 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGSHAREDVMOBJECT::AddReference(DXGSHAREDVMOBJECT *this)
{
  __int64 v2; // rax

  if ( *((int *)this + 6) < 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 10459LL;
    WdLogEvent5_WdAssertion(v2);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
