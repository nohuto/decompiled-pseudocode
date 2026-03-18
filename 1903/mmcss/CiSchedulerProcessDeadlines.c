/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0001B30
 * Callers:
 *     CiSchedulerSleep @ 0x1C0001990 (CiSchedulerSleep.c)
 *     CiSchedulerDeepSleep @ 0x1C0002BF0 (CiSchedulerDeepSleep.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001D30 (CiSchedulerUpdateTimer.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002940 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002B50 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003EA0 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0003F10 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C0004298 (CiLogTurboEngaged.c)
 */

bool __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  int v2; // ebp
  int v3; // edi
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 DeviceObjectExtension; // rsi
  bool v7; // zf
  int v8; // eax
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax
  char v13; // [rsp+58h] [rbp+10h] BYREF

  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return 0;
  v2 = 0;
  v3 = 0;
  if ( CiSchedulerWaitStatus == 257 )
    v4 = KeQueryInterruptTimePrecise(&v13);
  else
    v4 = MEMORY[0xFFFFF78000000008];
  v5 = v4 + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_13;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    while ( *(_QWORD *)(DeviceObjectExtension + 24) <= v5 )
    {
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
      v7 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
      *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
      if ( v7 )
      {
        if ( *(_BYTE *)(DeviceObjectExtension + 36) )
        {
          v10 = DeviceObjectExtension - 96;
        }
        else
        {
          v12 = *(_DWORD *)(DeviceObjectExtension + 128);
          v10 = DeviceObjectExtension - 56;
          if ( (v12 & 1) != 0 )
          {
            v2 = 1;
            ++CiTotalTasksDeadlineExpired;
            *(_DWORD *)(v10 + 184) = v12 | 4;
          }
        }
        CiSchedulerUpdateTaskIndexPriorities(v10);
        v11 = *(_DWORD *)(v10 + 184);
        if ( (v11 & 2) != 0 && (*(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v10 + 132)) )
        {
          *(_DWORD *)(v10 + 184) = v11 & 0xFFFFFFFD;
          CiSchedulerSetTaskIndexThreadTag(v10, 0);
          --CiTotalTasksBuffering;
        }
        if ( byte_1C00072D8 )
        {
          if ( *(_BYTE *)(DeviceObjectExtension + 36) )
            CiLogTaskIndexPreDeadlineExpired(v10);
          else
            CiLogTaskIndexDeadlineExpired(v10);
        }
        v8 = 32;
      }
      else
      {
        v8 = 16;
      }
      v3 |= v8;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          break;
        DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                     + 1);
      }
      else
      {
        DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
      if ( !DeviceObjectExtension )
        break;
    }
  }
LABEL_13:
  if ( (v3 & 0x20) != 0 )
  {
    if ( v2 )
    {
      if ( CiCurrentMediaBufferingState )
      {
        CiCurrentMediaBufferingState = 0;
        PoNotifyMediaBuffering(0LL);
      }
    }
    else
    {
      CiSystemUpdateMediaBufferingState();
    }
  }
  if ( (v3 & 0x10) == 0 )
    CiSchedulerUpdateTimer(v5 - 2000);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v2 )
  {
    if ( byte_1C00072D8 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v3;
  return (*a1 & 0xFFFFFFDF) != 0;
}
