/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x1C0001480
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A9C0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002AE0 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogSchedulerEvent @ 0x1C0003DD8 (CiLogSchedulerEvent.c)
 *     CiLogTaskIndexYield @ 0x1C0004188 (CiLogTaskIndexYield.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG ActiveThreadCount; // ebx
  ULONG v4; // edi
  unsigned __int64 v6; // r15
  __int64 v7; // r8
  bool v8; // zf
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 *i; // rdi
  __int64 v17; // rax
  unsigned __int8 v18; // dl
  unsigned int v19; // esi
  __int64 DeviceObjectExtension; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // r15
  int v23; // eax
  char v24; // [rsp+50h] [rbp+8h] BYREF

  ActiveThreadCount = a2;
  v4 = a3;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  if ( a3 != -1 )
  {
    if ( a3 < WPP_MAIN_CB.ActiveThreadCount )
      v4 = WPP_MAIN_CB.ActiveThreadCount;
    if ( v4 >= ActiveThreadCount )
      v4 = -1;
  }
  if ( byte_1C00072E8 )
    CiLogTaskIndexYield(a1, ActiveThreadCount, v4);
  v6 = KeQueryInterruptTimePrecise(&v24);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    v8 = *(_BYTE *)(a1 + 92) == 0;
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( !v8 )
      *(_BYTE *)(a1 + 92) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 56);
    if ( CiSchedulerTimerNode == a1 + 56 )
      CiSchedulerTimerNode = 2LL;
  }
  *(_BYTE *)(a1 + 92) = 0;
  v9 = v6 + ActiveThreadCount;
  *(_QWORD *)(a1 + 80) = v9;
  v10 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 && *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    v10 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  LOBYTE(v7) = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v10 + 24) > v9 )
      {
        v11 = *(_QWORD *)v10;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_30;
          v11 ^= v10;
        }
        if ( !v11 )
        {
LABEL_30:
          LOBYTE(v7) = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_24;
          v11 ^= v10;
        }
        if ( !v11 )
        {
LABEL_24:
          LOBYTE(v7) = 1;
          break;
        }
      }
      v10 = v11;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v10, v7, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    v8 = *(_BYTE *)(a1 + 132) == 0;
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( !v8 )
      *(_BYTE *)(a1 + 132) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 96);
    if ( CiSchedulerTimerNode == a1 + 96 )
      CiSchedulerTimerNode = 2LL;
  }
  if ( v4 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 132) = 1;
    v13 = v6 + v4;
    *(_QWORD *)(a1 + 120) = v13;
    v14 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 && *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      v14 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    LOBYTE(v12) = 0;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v14 + 24) > v13 )
        {
          v15 = *(_QWORD *)v14;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_53;
            v15 ^= v14;
          }
          if ( !v15 )
          {
LABEL_53:
            LOBYTE(v12) = 0;
            break;
          }
        }
        else
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_47;
            v15 ^= v14;
          }
          if ( !v15 )
          {
LABEL_47:
            LOBYTE(v12) = 1;
            break;
          }
        }
        v14 = v15;
      }
    }
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v14, v12, a1 + 96);
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        v17 = *(i - 1);
        if ( *(_QWORD *)(v17 + 120) || !*(_BYTE *)(v17 + 132) && *(_QWORD *)(v17 + 80) )
        {
          v18 = *(_BYTE *)(*(i - 2) + 40);
          if ( v18 > *((_BYTE *)i + 24) )
            v18 = *((_BYTE *)i + 24);
        }
        else
        {
          v18 = *((_BYTE *)i + 24);
        }
      }
      else
      {
        v18 = *((_BYTE *)i + 26);
      }
      v19 = v18;
      if ( *((unsigned __int8 *)i + 27) != v18 )
      {
        *((_BYTE *)i + 27) = v18;
        if ( byte_1C00072E8 )
          CiLogSchedulerEvent(i - 10, v18);
        KeSetActualBasePriorityThread(i[2], v19);
      }
    }
  }
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_83;
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
      v21 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( v6 <= v21 )
      {
        v22 = v6 - v21;
        if ( v22 < -2000 )
          v22 += 2000LL;
      }
      else
      {
        v22 = 0LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v22, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    goto LABEL_85;
  }
LABEL_83:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
LABEL_85:
  v23 = *(_DWORD *)(a1 + 184);
  if ( (v23 & 4) != 0 )
  {
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v23 & 0xFFFFFFFB;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
