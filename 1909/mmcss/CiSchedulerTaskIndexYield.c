/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x1C0001DF0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A350 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002940 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogSchedulerEvent @ 0x1C0003BC4 (CiLogSchedulerEvent.c)
 *     CiLogTaskIndexYield @ 0x1C0003F80 (CiLogTaskIndexYield.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG v3; // edi
  ULONG ActiveThreadCount; // ebx
  unsigned __int64 v6; // r15
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rax
  __int64 *i; // rdi
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  unsigned int v18; // esi
  __int64 DeviceObjectExtension; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  int v22; // eax
  char v23; // [rsp+50h] [rbp+8h] BYREF

  v3 = a3;
  ActiveThreadCount = a2;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  if ( a3 != -1 )
  {
    if ( a3 < WPP_MAIN_CB.ActiveThreadCount )
      v3 = WPP_MAIN_CB.ActiveThreadCount;
    if ( v3 >= ActiveThreadCount )
      v3 = -1;
  }
  if ( byte_1C00072D8 )
    CiLogTaskIndexYield(a1, ActiveThreadCount, v3);
  v6 = KeQueryInterruptTimePrecise(&v23);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( *(_BYTE *)(a1 + 92) )
      *(_BYTE *)(a1 + 92) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 56);
    if ( CiSchedulerTimerNode == a1 + 56 )
      CiSchedulerTimerNode = 2LL;
  }
  *(_BYTE *)(a1 + 92) = 0;
  v8 = v6 + ActiveThreadCount;
  *(_QWORD *)(a1 + 80) = v8;
  v9 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      v9 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    else
      v9 = 0LL;
  }
  LOBYTE(v7) = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v9 + 24) > v8 )
      {
        v10 = *(_QWORD *)v9;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_30;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_30:
          LOBYTE(v7) = 0;
          break;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_31;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_31:
          LOBYTE(v7) = 1;
          break;
        }
      }
      v9 = v10;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v9, v7, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( *(_BYTE *)(a1 + 132) )
      *(_BYTE *)(a1 + 132) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 96);
    if ( CiSchedulerTimerNode == a1 + 96 )
      CiSchedulerTimerNode = 2LL;
  }
  if ( v3 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
  }
  else
  {
    v11 = v6 + v3;
    *(_BYTE *)(a1 + 132) = 1;
    *(_QWORD *)(a1 + 120) = v11;
    v12 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        v12 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
      else
        v12 = 0LL;
    }
    v13 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v12 + 24) > v11 )
        {
          v14 = *(_QWORD *)v12;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_47;
            v14 ^= v12;
          }
          if ( !v14 )
          {
LABEL_47:
            v13 = 0;
            break;
          }
        }
        else
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_48;
            v14 ^= v12;
          }
          if ( !v14 )
          {
LABEL_48:
            v13 = 1;
            break;
          }
        }
        v12 = v14;
      }
    }
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v12, v13, a1 + 96);
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        v16 = *(i - 1);
        if ( *(_QWORD *)(v16 + 120) || !*(_BYTE *)(v16 + 132) && *(_QWORD *)(v16 + 80) )
        {
          v17 = *(_BYTE *)(*(i - 2) + 40);
          if ( v17 > *((_BYTE *)i + 24) )
            v17 = *((_BYTE *)i + 24);
        }
        else
        {
          v17 = *((_BYTE *)i + 24);
        }
      }
      else
      {
        v17 = *((_BYTE *)i + 26);
      }
      v18 = v17;
      if ( *((unsigned __int8 *)i + 27) != v17 )
      {
        *((_BYTE *)i + 27) = v17;
        if ( byte_1C00072D8 )
          CiLogSchedulerEvent(i - 10, v17);
        KeSetActualBasePriorityThread(i[2], v18);
      }
    }
  }
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_88;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    if ( DeviceObjectExtension != CiSchedulerTimerNode )
    {
      v20 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( v6 > v20 )
      {
        v21 = 0LL;
      }
      else
      {
        v21 = v6 - v20;
        if ( v21 < -2000 )
          v21 += 2000LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    goto LABEL_69;
  }
LABEL_88:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
LABEL_69:
  v22 = *(_DWORD *)(a1 + 184);
  if ( (v22 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v22 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
