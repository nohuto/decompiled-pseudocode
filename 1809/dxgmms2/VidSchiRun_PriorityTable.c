/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C0086990
 * Callers:
 *     VidSchiWorkerThread @ 0x1C00868B0 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiDecrementContextReference @ 0x1C0010CD0 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C00125D0 (VidSchiIncrementContextReference.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013764 (VidSchiSubmitWaitCommand.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C0013FE0 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0014210 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0014500 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00145A0 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0014874 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0015934 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     VidSchiRewindPacket @ 0x1C002FC24 (VidSchiRewindPacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0067BB0 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0068800 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00C737C (VidSchiSubmitRenderCommand.c)
 *     VidSchiRecoverFromTDR @ 0x1C00CB454 (VidSchiRecoverFromTDR.c)
 */

__int64 __fastcall VidSchiRun_PriorityTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  struct _VIDSCH_CONTEXT *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r14
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  char v18; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = VidSchiScheduleCommandToRun(a1, &v18);
    v4 = v2;
    if ( v2 )
    {
      v5 = *(struct _VIDSCH_CONTEXT **)(v2 + 88);
      if ( v18 && (unsigned int)(*(_DWORD *)(a1 + 2404) - 2) > 1 )
      {
        VidSchiSetTransferContextRunningTime((__int64)v5, 0LL, 0);
        VidSchiRewindPacket(v4, 0LL, 1, 0);
        VidschiUnselectContext(v5);
      }
      else
      {
        VidSchiIncrementContextReference((__int64)v5, v3);
        v8 = *(_QWORD *)(v4 + 88);
        v9 = *(_QWORD *)(v8 + 104);
        v10 = *(_QWORD *)(v8 + 96);
        v11 = *(_DWORD *)(v4 + 48);
        v12 = *(_QWORD *)(v9 + 32);
        if ( v11 )
        {
          switch ( v11 )
          {
            case 8:
              VidSchiSubmitPagingCommand((LARGE_INTEGER *)v4);
              break;
            case 3:
              VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v4, v6, v7);
              break;
            case 4:
              VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
            case 5:
              VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
            case 6:
              v13 = (_QWORD *)(v4 + 320);
              if ( (unsigned int)(*(_DWORD *)(v4 + 312) - 5) > 1 )
                v13 = (_QWORD *)*v13;
              (*(void (__fastcall **)(_QWORD *))(v4 + 296))(v13);
              VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v4, v14, v15);
              break;
            case 7:
              VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
              break;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v12 + 2428) & 1) != 0
            || VidSchIsTDRPending(*(_QWORD *)(v9 + 32))
            || *(_BYTE *)(v9 + 204)
            || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
          {
            *(_DWORD *)(v4 + 64) &= ~4u;
          }
          if ( (*(_DWORD *)(v4 + 64) & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v10 + 2840));
            RtlSetBitEx(v12 + 472, *(unsigned __int16 *)(v10 + 4));
          }
          if ( (*(_DWORD *)(v4 + 272) & 0x8000000) != 0 )
            VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v4);
          else
            VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v4);
        }
        VidSchiAdjustWorkerThreadPriority((__int64)v5);
        VidSchiSetTransferContextRunningTime((__int64)v5, 0LL, 0);
        VidschiUnselectContext(v5);
        VidSchiDecrementContextReference(v5, 0);
      }
    }
    if ( VidSchIsTDRPending(a1) )
    {
      v16 = *(_DWORD *)(a1 + 2404);
      if ( v16 != 2 && v16 != 3 )
        break;
    }
  }
  return VidSchiRecoverFromTDR(a1);
}
