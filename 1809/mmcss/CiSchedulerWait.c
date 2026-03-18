/*
 * XREFs of CiSchedulerWait @ 0x1C00020D0
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002FB0 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSleep @ 0x1C0001C90 (CiSchedulerSleep.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002950 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0002A50 (CiSchedulerSetTaskIndexThreadTag.c)
 *     __security_check_cookie @ 0x1C0003240 (__security_check_cookie.c)
 *     CiLogSchedulerEvent @ 0x1C0003DD8 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003EC4 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003F48 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0004568 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00047B0 (WPP_SF_d.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 *v2; // rbx
  unsigned int DpcData_high; // edx
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r8
  struct _DEVICE_OBJECT *NextDevice; // rcx
  __int64 InterruptTimePrecise; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int32 v17; // edi
  int v18; // ebx
  int v19; // r12d
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // rcx
  unsigned __int64 DeviceObjectExtension; // rbp
  bool v24; // zf
  unsigned __int64 v25; // r15
  int v26; // eax
  __int64 *j; // rsi
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // edi
  int v31; // eax
  const EVENT_DESCRIPTOR *v32; // rdx
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // rax
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  int v40; // [rsp+30h] [rbp-88h]
  unsigned __int32 i; // [rsp+34h] [rbp-84h]
  int v42; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int32 *v43; // [rsp+40h] [rbp-78h]
  char v44[8]; // [rsp+48h] [rbp-70h] BYREF
  char v45[8]; // [rsp+50h] [rbp-68h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v47[2]; // [rsp+68h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+78h] [rbp-40h] BYREF

  v2 = a2;
  v43 = a2;
  if ( !CiThreadsMovedUp )
  {
    CiSchedulerSleep(0, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
    return 1;
  }
  if ( CiSchedulerInLazyMode )
  {
    DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
    v4 = 2;
  }
  else
  {
    DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
    v4 = 1;
  }
  CiSchedulerSleep(v4, DpcData_high, v2);
  if ( (*v2 & 0xC) != 0 )
    return 0;
  while ( 2 )
  {
    if ( !CiSchedulerDisallowLazyMode )
    {
      v5 = byte_1C0007218;
      v6 = 0;
      v7 = 0;
      if ( !byte_1C0007218 )
        goto LABEL_14;
      v8 = 0LL;
      do
      {
        if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v7, v8 + CiLastIdleTime) )
          ++v6;
        ++v7;
        v8 += 8LL;
      }
      while ( v7 < v5 );
      if ( v6 )
        v9 = 0;
      else
LABEL_14:
        v9 = (2 * CiProcessorIdleHistoryBits) | 1;
      v2 = v43;
      CiProcessorIdleHistoryBits = CiSchedulerIdleCycleBitMask & v9;
    }
    if ( !CiProcessorIdleHistoryBits )
    {
      if ( CiSchedulerInLazyMode )
      {
        CiSchedulerInLazyMode = 0;
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_8825f9f1018b3a0c8bc97e34548ca364_Traceguids);
      }
      return 0;
    }
    if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
    {
      if ( !CiSchedulerInLazyMode )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            13LL,
            &WPP_8825f9f1018b3a0c8bc97e34548ca364_Traceguids,
            HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
        CiSchedulerInLazyMode = 1;
      }
      v10 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v11 = 4;
    }
    else
    {
      v10 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
      v11 = 3;
    }
    if ( byte_1C00072E8 )
      CiLogSchedulerWakeup(*v2);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    if ( CiSchedulerInLazyMode )
    {
      SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
LABEL_33:
        *v2 |= 0x80u;
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        return 0;
      }
      while ( 1 )
      {
        NextDevice = SystemArgument1->NextDevice;
        if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
          break;
LABEL_32:
        SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
        if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
          goto LABEL_33;
      }
      while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
      {
        NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
          goto LABEL_32;
      }
    }
    if ( qword_1C00071B8 )
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
    if ( CiSchedulerWaitStatus == 257 )
      InterruptTimePrecise = KeQueryInterruptTimePrecise(v44);
    else
      InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
    v15 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    byte_1C00071C4 = 0;
    qword_1C00071B8 = InterruptTimePrecise + v10;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        v15 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
      else
        v15 = 0LL;
    }
    LOBYTE(SystemArgument1) = 0;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v15 + 24) > InterruptTimePrecise + (unsigned __int64)v10 )
        {
          v16 = *(_QWORD *)v15;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v16 )
              goto LABEL_55;
            v16 ^= v15;
          }
          if ( !v16 )
          {
LABEL_55:
            LOBYTE(SystemArgument1) = 0;
            break;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v15 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v16 )
              goto LABEL_49;
            v16 ^= v15;
          }
          if ( !v16 )
          {
LABEL_49:
            LOBYTE(SystemArgument1) = 1;
            break;
          }
        }
        v15 = v16;
      }
    }
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v15, SystemArgument1, &WPP_MAIN_CB.Reserved);
    CiSchedulerUpdateTimer(InterruptTimePrecise);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( byte_1C00072E8 )
      CiLogSchedulerSleep(v11, v10);
    v17 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
    for ( i = v17; ; i = 0 )
    {
      if ( !v17 )
        CiSchedulerWaitStatus = KeWaitForSingleObject(
                                  *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                  Executive,
                                  0,
                                  1u,
                                  0LL);
      if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
        break;
LABEL_137:
      if ( byte_1C00072E8 )
        CiLogSchedulerWakeup(v17);
      v17 = 0;
    }
    v18 = 0;
    v40 = 0;
    v19 = 0;
    if ( CiSchedulerWaitStatus == 257 )
      v20 = KeQueryInterruptTimePrecise(v45);
    else
      v20 = MEMORY[0xFFFFF78000000008];
    v21 = v20 + 2000;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    CiSchedulerTimerNode = 2LL;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
        goto LABEL_109;
      DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                   + 1);
    }
    else
    {
      DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
    }
    if ( DeviceObjectExtension )
    {
      do
      {
        if ( *(_QWORD *)(DeviceObjectExtension + 24) > v21 )
          break;
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
        v24 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
        *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
        if ( v24 )
        {
          if ( *(_BYTE *)(DeviceObjectExtension + 36) )
          {
            v25 = DeviceObjectExtension - 96;
          }
          else
          {
            v26 = *(_DWORD *)(DeviceObjectExtension + 128);
            v25 = DeviceObjectExtension - 56;
            if ( (v26 & 1) != 0 )
            {
              v40 = 1;
              ++CiTotalTasksDeadlineExpired;
              *(_DWORD *)(v25 + 184) = v26 | 4;
            }
          }
          for ( j = *(__int64 **)(v25 + 32); j != (__int64 *)(v25 + 32); j = (__int64 *)*j )
          {
            if ( (*((_BYTE *)j + 68) & 1) == 0 )
            {
              if ( CiThreadsMovedUp )
              {
                v28 = *(j - 1);
                if ( *(_QWORD *)(v28 + 120) || !*(_BYTE *)(v28 + 132) && *(_QWORD *)(v28 + 80) )
                {
                  v22 = *(unsigned __int8 *)(*(j - 2) + 40);
                  v29 = *(_BYTE *)(*(j - 2) + 40);
                  if ( (unsigned __int8)v22 > *((_BYTE *)j + 24) )
                    v29 = *((_BYTE *)j + 24);
                }
                else
                {
                  v29 = *((_BYTE *)j + 24);
                }
              }
              else
              {
                v29 = *((_BYTE *)j + 26);
              }
              v30 = v29;
              if ( *((unsigned __int8 *)j + 27) != v29 )
              {
                *((_BYTE *)j + 27) = v29;
                if ( byte_1C00072E8 )
                  CiLogSchedulerEvent(j - 10, v29);
                KeSetActualBasePriorityThread(j[2], v30);
              }
            }
          }
          v31 = *(_DWORD *)(v25 + 184);
          if ( (v31 & 2) != 0 && (*(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v25 + 132)) )
          {
            *(_DWORD *)(v25 + 184) = v31 & 0xFFFFFFFD;
            CiSchedulerSetTaskIndexThreadTag(v25, 0LL);
            --CiTotalTasksBuffering;
          }
          if ( byte_1C00072E8 )
          {
            if ( *(_BYTE *)(DeviceObjectExtension + 36) )
            {
              v47[0] = v25 + 144;
              v32 = &CiTaskIndexPreDeadlineExpiredEvent;
              p_UserData = (struct _EVENT_DATA_DESCRIPTOR *)v47;
              v47[1] = 4LL;
            }
            else
            {
              UserData.Ptr = v25 + 144;
              v32 = &CiTaskIndexDeadlineExpiredEvent;
              p_UserData = &UserData;
              *(_QWORD *)&UserData.Size = 4LL;
            }
            EtwWrite(RegHandle, v32, 0LL, 1u, p_UserData);
          }
          v34 = 32;
        }
        else
        {
          v34 = 16;
        }
        v19 |= v34;
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
      }
      while ( DeviceObjectExtension );
      v18 = v40;
      v17 = i;
    }
LABEL_109:
    if ( (v19 & 0x20) == 0 )
      goto LABEL_118;
    if ( v18 )
    {
      if ( !CiCurrentMediaBufferingState )
        goto LABEL_118;
      CiCurrentMediaBufferingState = 0;
      v22 = 0LL;
      goto LABEL_117;
    }
    LOBYTE(v22) = CiTotalTasksBuffering != 0;
    if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
      && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
    {
      CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_117:
      PoNotifyMediaBuffering(v22);
    }
LABEL_118:
    if ( (v19 & 0x10) != 0 )
      goto LABEL_132;
    v35 = v21 - 2000;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
        goto LABEL_130;
      v36 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
    }
    else
    {
      v36 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
    }
    if ( v36 )
    {
      if ( v36 != CiSchedulerTimerNode )
      {
        v37 = *(_QWORD *)(v36 + 24);
        if ( v35 <= v37 )
        {
          v38 = v35 - v37;
          if ( v38 < -2000 )
            v38 += 2000LL;
        }
        else
        {
          v38 = 0LL;
        }
        CiSchedulerTimerNode = v36;
        ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v38, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
      }
      goto LABEL_132;
    }
LABEL_130:
    if ( CiSchedulerTimerNode != 1 )
    {
      CiSchedulerTimerNode = 1LL;
      ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
    }
LABEL_132:
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( v18 )
    {
      if ( byte_1C00072E8 )
      {
        v48.Ptr = (ULONGLONG)&v42;
        v42 = 1;
        *(_QWORD *)&v48.Size = 4LL;
        EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v48);
      }
      PoLatencySensitivityHint(4LL);
    }
    v17 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v19;
    if ( (v17 & 0xFFFFFFDF) == 0 )
      goto LABEL_137;
    v2 = v43;
    *v43 = v17;
    if ( (v17 & 0xC) == 0 )
      continue;
    return 0;
  }
}
