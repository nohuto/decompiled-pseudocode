/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0001E30
 * Callers:
 *     CiSchedulerSleep @ 0x1C0001C90 (CiSchedulerSleep.c)
 *     CiSchedulerDeepSleep @ 0x1C0002D60 (CiSchedulerDeepSleep.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x1C0002950 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0002A50 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002AE0 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002C00 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C00040A8 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0004118 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C00044A0 (CiLogTurboEngaged.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  int v3; // esi
  int v4; // r14d
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 DeviceObjectExtension; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // [rsp+58h] [rbp+10h] BYREF

  result = WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return result;
  v3 = 0;
  v4 = 0;
  if ( CiSchedulerWaitStatus == 257 )
    v5 = KeQueryInterruptTimePrecise(&v13);
  else
    v5 = MEMORY[0xFFFFF78000000008];
  v6 = v5 + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
LABEL_9:
    if ( DeviceObjectExtension )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(DeviceObjectExtension + 24) > v6 )
          goto LABEL_31;
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
        v8 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
        *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
        if ( !v8 )
        {
          v12 = 16;
          goto LABEL_26;
        }
        if ( *(_BYTE *)(DeviceObjectExtension + 36) )
        {
          v9 = DeviceObjectExtension - 96;
        }
        else
        {
          v10 = *(_DWORD *)(DeviceObjectExtension + 128);
          v9 = DeviceObjectExtension - 56;
          if ( (v10 & 1) != 0 )
          {
            v4 = 1;
            ++CiTotalTasksDeadlineExpired;
            *(_DWORD *)(v9 + 184) = v10 | 4;
          }
        }
        CiSchedulerUpdateTaskIndexPriorities(v9);
        v11 = *(_DWORD *)(v9 + 184);
        if ( (v11 & 2) != 0 && (*(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v9 + 132)) )
        {
          *(_DWORD *)(v9 + 184) = v11 & 0xFFFFFFFD;
          CiSchedulerSetTaskIndexThreadTag(v9, 0LL);
          --CiTotalTasksBuffering;
        }
        if ( !byte_1C00072E8 )
          goto LABEL_24;
        if ( *(_BYTE *)(DeviceObjectExtension + 36) )
          break;
        CiLogTaskIndexDeadlineExpired(v9);
        v12 = 32;
LABEL_26:
        v3 |= v12;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_31;
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                       + 1);
        }
        else
        {
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
        }
        if ( !DeviceObjectExtension )
          goto LABEL_31;
      }
      CiLogTaskIndexPreDeadlineExpired(v9);
LABEL_24:
      v12 = 32;
      goto LABEL_26;
    }
    goto LABEL_31;
  }
  if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)1 )
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
    goto LABEL_9;
  }
LABEL_31:
  if ( (v3 & 0x20) != 0 )
  {
    if ( v4 )
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
    CiSchedulerUpdateTimer(v6 - 2000);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v4 )
  {
    if ( byte_1C00072E8 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v3;
  return (*a1 & 0xFFFFFFDF) != 0;
}
