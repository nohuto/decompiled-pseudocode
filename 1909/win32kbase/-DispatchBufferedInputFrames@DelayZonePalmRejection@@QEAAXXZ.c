/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01804C8
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017C9D0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017D340 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C0180AC8 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0180B58 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0024120 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0163C70 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(DelayZonePalmRejection *this)
{
  struct CPointerInputFrame *Next; // rax
  struct CPointerInputFrame *v3; // rdi
  int v4; // eax

  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        (_DWORD)gBaseLog,
        4,
        8,
        12,
        (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
        *((_DWORD *)this + 10),
        *((_DWORD *)this + 11));
    Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
    v3 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
    while ( Next && Next != v3 )
      Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(gpTouchProcessor, Next);
    if ( v3 )
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(gpTouchProcessor, v3);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    {
      v4 = 2;
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      v4 = 0;
    }
    *((_DWORD *)this + 1) = v4;
    if ( *((_QWORD *)this + 3) )
      HMAssignmentUnlock((__int64 *)this + 3);
  }
}
