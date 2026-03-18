/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0002C40
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0001150 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x1C0002950 (CiSchedulerUpdateTimer.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002AE0 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002D00 (CiSchedulerRemoveDeadline.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  char v2; // di
  unsigned __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int v5; // eax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = KeQueryInterruptTimePrecise(&v6);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  CurrentThread = KeGetCurrentThread();
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = CurrentThread;
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v2 = 1;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v2 )
  {
    goto LABEL_5;
  }
  CiSchedulerUpdateTimer(v3);
LABEL_5:
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v5 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState((__int64)CurrentThread);
    v5 = *(_DWORD *)(a1 + 184);
  }
  if ( (v5 & 2) != 0 )
  {
    --CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = v5 & 0xFFFFFFFD;
    CiSystemUpdateMediaBufferingState((__int64)CurrentThread);
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
