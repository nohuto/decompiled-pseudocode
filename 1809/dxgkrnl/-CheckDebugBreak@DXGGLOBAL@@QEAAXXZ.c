/*
 * XREFs of ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C00367F8
 * Callers:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003702C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C01E9F6C (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C01EA048 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C0257BA8 (-AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::CheckDebugBreak(DXGGLOBAL *this)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)*((_QWORD *)this + 172);
  if ( v1 )
  {
    if ( !*v1 )
    {
      if ( !v1[1] )
        return;
      v1[1] = 0;
    }
    __debugbreak();
  }
}
