/*
 * XREFs of ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C02171C8
 * Callers:
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229260 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263D20 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGSHAREDVMOBJECT::AddReference(DXGSHAREDVMOBJECT *this, __int64 a2)
{
  __int64 v3; // rax

  if ( *((int *)this + 6) < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 10483LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
