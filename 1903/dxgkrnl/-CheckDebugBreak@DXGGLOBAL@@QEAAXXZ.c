/*
 * XREFs of ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C003CBE0
 * Callers:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003D3FC (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C021989C (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0219978 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C028DE68 (-AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::CheckDebugBreak(DXGGLOBAL *this)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)*((_QWORD *)this + 168);
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
