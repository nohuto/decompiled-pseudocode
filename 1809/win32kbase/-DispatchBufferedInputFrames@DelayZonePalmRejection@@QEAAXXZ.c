/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C014F7FC
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CBF0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CEE0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C014FE10 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C014FED0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0137B70 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(DelayZonePalmRejection *this)
{
  struct CPointerInputFrame *Next; // rax
  struct CPointerInputFrame *v3; // rdi
  int v4; // eax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    v6 = *((_DWORD *)this + 11);
    v5 = *((_DWORD *)this + 10);
    WPP_RECORDER_SF_dd(
      *((_QWORD *)this + 14),
      4u,
      0xDu,
      0xCu,
      (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
      v5,
      v6);
    Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
    v3 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
    while ( Next && Next != v3 )
      Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
               (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
               Next);
    if ( v3 )
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
        (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
        v3);
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
