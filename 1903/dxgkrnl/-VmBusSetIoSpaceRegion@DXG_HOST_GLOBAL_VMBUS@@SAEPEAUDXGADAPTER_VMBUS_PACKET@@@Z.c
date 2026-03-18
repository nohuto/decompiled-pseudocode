/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0228C00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C9F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C025F0EC (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v5 = v2;
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal(v4, v3);
    v9 = *(_QWORD *)(v5 + 32);
    if ( v9 == *((_QWORD *)Global + 170) )
    {
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 432LL);
      if ( !*(_QWORD *)(v11 + 168) )
      {
        *(_QWORD *)(v11 + 168) = *(_QWORD *)(v5 + 24);
        *(_QWORD *)(v11 + 176) = v9;
      }
      if ( g_VgpuEnableGuestDebug )
        DXGVIRTUALMACHINE::SetSharedPage(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 432LL), *(_DWORD *)(v5 + 40));
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v7, v9, v8);
      *(_QWORD *)(v10 + 24) = *(_QWORD *)(v5 + 32);
      WdLogEvent5_WdError(v10);
      v13 = -1073741811;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v13, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
