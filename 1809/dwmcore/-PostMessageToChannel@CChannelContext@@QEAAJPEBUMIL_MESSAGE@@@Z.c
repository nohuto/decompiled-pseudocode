/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CB9C
 * Callers:
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180071630 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x180075D68 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18009DAB4 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180179CF0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009CA88 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x18009CC30 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(CConnection **this, const struct MIL_MESSAGE *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  struct UCE_RDP_HEADER *v7; // rdi
  unsigned int v8; // ebx
  _OWORD *v9; // rcx
  struct UCE_RDP_HEADER *v10; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  struct UCE_RDP_HEADER *v14; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v5 = CTransportCmdPacker::AllocateNotification(this, *(unsigned int *)a2, a3, &v14, &v15);
  v7 = v14;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xAAu);
  }
  else
  {
    v9 = v15;
    v10 = v14;
    *v15 = *(_OWORD *)a2;
    *((_QWORD *)v9 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v9 + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)v7 + 4) = *((_DWORD *)this + 4);
    v11 = CConnection::PostMessageToClient(this[4], v10);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xB2u);
  }
  WPF::ProcessHeapImpl::Free(v7);
  return v8;
}
