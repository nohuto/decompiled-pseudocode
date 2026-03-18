/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C00C7240
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002DBC0 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013764 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0014210 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0014874 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0015934 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0067BB0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0068800 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00C737C (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(LARGE_INTEGER *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  DWORD LowPart; // eax
  __int64 v8; // rbp
  DWORD v9; // eax
  LARGE_INTEGER *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8

  v3 = this[11];
  v5 = *(_QWORD *)(v3.QuadPart + 104);
  v6 = *(_QWORD *)(v3.QuadPart + 96);
  LowPart = this[6].LowPart;
  v8 = *(_QWORD *)(v5 + 32);
  if ( LowPart )
  {
    switch ( LowPart )
    {
      case 8u:
        VidSchiSubmitPagingCommand(this);
        break;
      case 3u:
        VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)this, a2, a3);
        break;
      case 4u:
        VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 5u:
        VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)this);
        break;
      case 6u:
        v9 = this[39].LowPart;
        v10 = this + 40;
        if ( v9 - 5 > 1 )
          v10 = (LARGE_INTEGER *)v10->QuadPart;
        ((void (__fastcall *)(LARGE_INTEGER *))this[37].QuadPart)(v10);
        VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)this, v11, v12);
        break;
      case 7u:
        VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)this);
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
      this[8].LowPart &= ~4u;
    }
    if ( (this[8].LowPart & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 2840));
      RtlSetBitEx(v8 + 472, *(unsigned __int16 *)(v6 + 4));
    }
    if ( (this[34].LowPart & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)this);
    else
      VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)this);
  }
}
