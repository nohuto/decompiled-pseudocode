/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180029C34
 * Callers:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002841C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x180028598 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800CD120 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1801AC430 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x180029CD0 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(
        CChannelContext *this,
        const struct MIL_MESSAGE *a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  _DWORD *v7; // rdi
  unsigned int v8; // ebx
  _OWORD *v9; // rcx
  void *v10; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v15; // [rsp+60h] [rbp+18h] BYREF

  lpMem = 0LL;
  v15 = 0LL;
  v5 = CTransportCmdPacker::AllocateNotification(this, *(unsigned int *)a2, a3, &lpMem, &v15);
  v7 = lpMem;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Fu, 0LL);
  }
  else
  {
    v9 = v15;
    v10 = lpMem;
    *v15 = *(_OWORD *)a2;
    *((_QWORD *)v9 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v9 + 6) = *((_DWORD *)a2 + 6);
    v7[4] = *((_DWORD *)this + 4);
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 4) + 24LL))(*((_QWORD *)this + 4), v10);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA7u, 0LL);
  }
  operator delete(v7);
  return v8;
}
