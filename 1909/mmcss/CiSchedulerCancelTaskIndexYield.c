/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C0002A80
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A350 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002940 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002B50 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002B90 (CiSchedulerRemoveDeadline.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0003E30 (CiLogTaskIndexCancelYield.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  char v1; // di
  __int64 v3; // rcx
  int v4; // eax

  v1 = 0;
  if ( byte_1C00072D8 )
    CiLogTaskIndexCancelYield();
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v1 = 1;
  }
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
LABEL_8:
    CiSchedulerUpdateTaskIndexPriorities(a1);
    goto LABEL_9;
  }
  if ( v1 )
    goto LABEL_8;
LABEL_9:
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState(v3);
    v4 = *(_DWORD *)(a1 + 184);
  }
  if ( (v4 & 2) != 0 )
  {
    --CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFFD;
    CiSystemUpdateMediaBufferingState(v3);
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
