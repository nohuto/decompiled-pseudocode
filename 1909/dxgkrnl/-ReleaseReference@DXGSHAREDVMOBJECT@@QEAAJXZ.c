/*
 * XREFs of ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0219E3C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D1E0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021EBC0 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02298D0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C0263890 (-CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C0263900 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C0263B78 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C02643B0 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDXGSHAREDVMOBJECT@@AEAAPEAXI@Z @ 0x1C003CC98 (--_GDXGSHAREDVMOBJECT@@AEAAPEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DXGSHAREDVMOBJECT::ReleaseReference(int *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int32 v5; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  PERESOURCE *Global; // rax

  if ( P[6] <= 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(P, a2);
    *(_QWORD *)(v4 + 24) = 10491LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = _InterlockedDecrement(P + 6);
  if ( !v5 )
  {
    v6 = *P;
    if ( *P == 4 )
    {
      *((_QWORD *)P + 1) = 0LL;
    }
    else
    {
      if ( v6 == 8 || v6 == 11 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)P, a2);
        DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)P + 1), 0);
        *((_QWORD *)P + 1) = 0LL;
        goto LABEL_12;
      }
      if ( v6 != 16 )
      {
        v7 = WdLogNewEntry5_WdError(P, a2, a3);
        *(_QWORD *)(v7 + 24) = *P;
        WdLogEvent5_WdError(v7);
LABEL_12:
        DXGSHAREDVMOBJECT::`scalar deleting destructor'(P, v8);
        return v5;
      }
    }
    ObCloseHandle(*((HANDLE *)P + 2), 0);
    *((_QWORD *)P + 2) = 0LL;
    goto LABEL_12;
  }
  return v5;
}
