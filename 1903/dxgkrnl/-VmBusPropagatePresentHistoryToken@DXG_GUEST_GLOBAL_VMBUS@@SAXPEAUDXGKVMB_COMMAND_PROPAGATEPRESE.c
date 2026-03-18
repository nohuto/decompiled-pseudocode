/*
 * XREFs of ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C003D3A0
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C003CE10 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA08 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N1111@Z @ 0x1C003CC54 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(
        struct DXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN *a1)
{
  CRefCountedBuffer *v2; // rcx
  KSPIN_LOCK *v3; // rax
  int v4; // r8d
  struct _D3DKMT_PRESENTHISTORYTOKEN *v5; // rdx

  v2 = (CRefCountedBuffer *)*((_QWORD *)a1 + 5);
  if ( !v2 || (unsigned __int64)v2 > MmUserProbeAddress )
  {
    v3 = (KSPIN_LOCK *)*((_QWORD *)a1 + 3);
    v4 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 > MmUserProbeAddress )
    {
      v5 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)a1 + 4);
      if ( (unsigned __int64)v5 > MmUserProbeAddress )
      {
        if ( v2 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v2);
          v5 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)a1 + 4);
          v3 = (KSPIN_LOCK *)*((_QWORD *)a1 + 3);
        }
        DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(v3, v5, v4);
      }
    }
  }
}
