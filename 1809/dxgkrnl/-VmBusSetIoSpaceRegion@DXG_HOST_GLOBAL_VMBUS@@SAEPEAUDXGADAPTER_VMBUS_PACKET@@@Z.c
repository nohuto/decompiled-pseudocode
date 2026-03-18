/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F8A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003660C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C022A868 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v4 = v2;
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal(v3);
    v7 = *(_QWORD *)(v4 + 32);
    if ( v7 == *((_QWORD *)Global + 174) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 456LL);
      if ( !*(_QWORD *)(v9 + 168) )
      {
        *(_QWORD *)(v9 + 168) = *(_QWORD *)(v4 + 24);
        *(_QWORD *)(v9 + 176) = v7;
      }
      if ( g_VgpuEnableGuestDebug )
        DXGVIRTUALMACHINE::SetSharedPage(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 456LL), *(_DWORD *)(v4 + 40));
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(v4 + 32);
      WdLogEvent5_WdError(v8);
      v11 = -1073741811;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v11, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
