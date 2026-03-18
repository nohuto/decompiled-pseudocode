/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C00C9F58
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002E430 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0009290 (VidSchIsTDRPending.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EFA0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0012410 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0012AA0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00136A4 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0014C94 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0079440 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007A0A0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CA094 (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(_VIDSCH_QUEUE_PACKET *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rbp
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8

  v3 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v3 + 104);
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *((_DWORD *)this + 12);
  v8 = *(_QWORD *)(v5 + 32);
  if ( v7 )
  {
    switch ( v7 )
    {
      case 8:
        VidSchiSubmitPagingCommand(this);
        break;
      case 3:
        VidSchiSubmitMmIoFlipCommand(this, a2, a3);
        break;
      case 4:
        VidSchiSubmitWaitCommand(this);
        break;
      case 5:
        VidSchiSubmitSignalCommand(this);
        break;
      case 6:
        v9 = *((_DWORD *)this + 78);
        v10 = (_QWORD *)((char *)this + 320);
        if ( (unsigned int)(v9 - 5) > 1 )
          v10 = (_QWORD *)*v10;
        (*((void (__fastcall **)(_QWORD *))this + 37))(v10);
        VidSchiProcessCompletedQueuePacket(this, v11, v12);
        break;
      case 7:
        VidSchiSubmitSoftwareCommand(this);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 2428) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v5 + 32))
      || *(_BYTE *)(v5 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
    {
      *((_DWORD *)this + 16) &= ~4u;
    }
    if ( (*((_DWORD *)this + 16) & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 2840));
      RtlSetBitEx(v8 + 472, *(unsigned __int16 *)(v6 + 4));
    }
    if ( (*((_DWORD *)this + 68) & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand(this);
    else
      VidSchiSubmitRenderCommand(this);
  }
}
